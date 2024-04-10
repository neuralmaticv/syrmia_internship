def _test_report_impl(ctx):
    out_file = ctx.actions.declare_file(ctx.label.name + ".xml")
    
    args = ctx.actions.args()
    args.add("--gtest_output=xml:" + out_file.path)

    ctx.actions.run(
        mnemonic = "GenerateXMLReport",
        executable = ctx.executable.test,
        arguments = [args],
        outputs = [out_file]
    )

    return [
        DefaultInfo(files = depset([out_file])),
    ]


test_report = rule(
    implementation = _test_report_impl,
    attrs = {
        "test": attr.label(executable=True, cfg="target"),
    }
)
