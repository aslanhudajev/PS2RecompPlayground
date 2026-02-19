#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// argc_copy at gp-0x7fec, argv_copy at gp-0x7ff0 (gp=0x3c3170)
static constexpr uint32_t kArgcCopy = 0x3bb184u;
static constexpr uint32_t kArgvCopy = 0x3bb180u;

// sceeDemoStart(param_1=argc, param_2=argv, param_3..7=short* outs). If argc>=6, parse argv[1..5] with simpleatoi.3 into the five short*.
void sceeDemoStart_0x2f79a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime)
{
    const uint32_t argc = GPR_U32(ctx, 4);
    const uint32_t argv = GPR_U32(ctx, 5);
    const uint32_t out1 = GPR_U32(ctx, 6);
    const uint32_t out2 = GPR_U32(ctx, 7);
    const uint32_t out3 = GPR_U32(ctx, 8);
    const uint32_t out4 = GPR_U32(ctx, 9);
    const uint32_t out5 = GPR_U32(ctx, 10);

    WRITE32(kArgcCopy, argc);
    WRITE32(kArgvCopy, argv);

    if (argc < 6u)
    {
        ctx->pc = GPR_U32(ctx, 31);
        return;
    }

    SET_GPR_U32(ctx, 4, READ32(argv + 4u));
    SET_GPR_U32(ctx, 5, out1);
    simpleatoi_3_0x2f7950(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 4, READ32(argv + 8u));
    SET_GPR_U32(ctx, 5, out2);
    simpleatoi_3_0x2f7950(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 4, READ32(argv + 12u));
    SET_GPR_U32(ctx, 5, out3);
    simpleatoi_3_0x2f7950(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 4, READ32(argv + 16u));
    SET_GPR_U32(ctx, 5, out4);
    simpleatoi_3_0x2f7950(rdram, ctx, runtime);

    SET_GPR_U32(ctx, 4, READ32(argv + 20u));
    SET_GPR_U32(ctx, 5, out5);
    simpleatoi_3_0x2f7950(rdram, ctx, runtime);

    ctx->pc = GPR_U32(ctx, 31);
}
