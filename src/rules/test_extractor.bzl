def _test_extractor_impl(ctx):
    out_file = ctx.actions.declare_file(ctx.label.name + ".csv")
    
    args = ctx.actions.args()
    args.add("-i", ctx.file.source)
    args.add("-o", out_file)
    args.add("-r", ctx.file.report)

    ctx.actions.run(
        mnemonic = "GenerateTestListFile",
        executable = ctx.executable.extraction_tool,
        arguments = [args],
        inputs = [ctx.file.source, ctx.file.report],
        outputs = [out_file]
    )

    return [
        DefaultInfo(files = depset([out_file])),
    ]


test_extractor = rule(
    implementation = _test_extractor_impl,
    attrs = {
        "source": attr.label(allow_single_file=True),
        "report": attr.label(allow_single_file=True),
        "extraction_tool": attr.label(
            executable = True,
            cfg = "exec",
        )
    }
)
