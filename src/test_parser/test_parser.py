import argparse
from pathlib import Path
import re
import csv
import xml.etree.ElementTree as ET


def parse_gtest_xml_report(xml_file):
    """
    Parses a gtest XML report and returns a dictionary of test cases and their verdicts.
    """
    tree = ET.parse(xml_file)
    root = tree.getroot()
    test_cases = {}

    for test_suite in root.findall('testsuite'):
        for test_case in test_suite.findall('testcase'):

            name = test_case.attrib['name']
            print(name)
            verdict = test_case.attrib['result']
            test_cases[name] = verdict
    return test_cases


parser = argparse.ArgumentParser()
parser.add_argument("-i", "--input", type=Path, help="Input source file", required=True)
parser.add_argument("-o", "--output", type=Path, help="Path to the output file", required=True)
parser.add_argument("-r", "--report", type=Path, help="Path to the report file", required=True)
args = parser.parse_args()

parsed_xml = parse_gtest_xml_report(args.report)

with open(args.input, encoding="ascii") as f:
    file_content = f.read()
    regex = r"// (COM\_[0-9]?).*\nTEST_F\((.*), (.*)\)"
    all_results = re.findall(regex, file_content)
    print(all_results)

    with open(args.output, "w", newline='') as csv_output:
        writer = csv.writer(csv_output, delimiter=",")
        writer.writerow(("ID", "Fixture", "Test", "Verdict"))
    
        for result in all_results:
            
            final_array = []
            final_array.append(result[0])
            final_array.append(result[1])
            final_array.append(result[2])
            final_array.append(parsed_xml[result[2]])

            writer.writerow(final_array)
