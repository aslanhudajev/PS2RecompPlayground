#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: backpollWait
// Address: 0x207948 - 0x2079c4
void backpollWait_0x207948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x207948u;

label_207948:
    // 0x207948: 0x27bdffd0
    ctx->pc = 0x207948u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
label_20794c:
    // 0x20794c: 0xffbf0020
    ctx->pc = 0x20794cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_207950:
    // 0x207950: 0xffbe0010
    ctx->pc = 0x207950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 30));
label_207954:
    // 0x207954: 0xffb00000
    ctx->pc = 0x207954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_207958:
    // 0x207958: 0x3a0f02d
    ctx->pc = 0x207958u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_20795c:
    // 0x20795c: 0x0
    ctx->pc = 0x20795cu;
    // NOP
label_207960:
    // 0x207960: 0x3c02003c
    ctx->pc = 0x207960u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_207964:
    // 0x207964: 0x8c42c4e8
    ctx->pc = 0x207964u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952168)));
label_207968:
    // 0x207968: 0x14400003
label_20796c:
    if (ctx->pc == 0x20796Cu) {
        ctx->pc = 0x207970u;
        goto label_207970;
    }
    ctx->pc = 0x207968u;
    {
        const bool branch_taken_0x207968 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x207968) {
            ctx->pc = 0x207978u;
            goto label_207978;
        }
    }
    ctx->pc = 0x207970u;
label_207970:
    // 0x207970: 0x1000000d
label_207974:
    if (ctx->pc == 0x207974u) {
        ctx->pc = 0x207978u;
        goto label_207978;
    }
    ctx->pc = 0x207970u;
    {
        const bool branch_taken_0x207970 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x207970) {
            ctx->pc = 0x2079A8u;
            goto label_2079a8;
        }
    }
    ctx->pc = 0x207978u;
label_207978:
    // 0x207978: 0xc081dae
label_20797c:
    if (ctx->pc == 0x20797Cu) {
        ctx->pc = 0x207980u;
        goto label_207980;
    }
    ctx->pc = 0x207978u;
    SET_GPR_U32(ctx, 31, 0x207980u);
    ctx->pc = 0x2076B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        backpollCheck_0x2076b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207980u; }
    }
    if (ctx->pc != 0x207980u) { return; }
    ctx->pc = 0x207980u;
label_207980:
    // 0x207980: 0x3c02003c
    ctx->pc = 0x207980u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
label_207984:
    // 0x207984: 0x8c42c4e4
    ctx->pc = 0x207984u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294952164)));
label_207988:
    // 0x207988: 0x10400005
label_20798c:
    if (ctx->pc == 0x20798Cu) {
        ctx->pc = 0x207990u;
        goto label_207990;
    }
    ctx->pc = 0x207988u;
    {
        const bool branch_taken_0x207988 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x207988) {
            ctx->pc = 0x2079A0u;
            goto label_2079a0;
        }
    }
    ctx->pc = 0x207990u;
label_207990:
    // 0x207990: 0x3c10003c
    ctx->pc = 0x207990u;
    SET_GPR_U32(ctx, 16, ((uint32_t)60 << 16));
label_207994:
    // 0x207994: 0x8e10c4e4
    ctx->pc = 0x207994u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 16), 4294952164)));
label_207998:
    // 0x207998: 0x200f809
label_20799c:
    if (ctx->pc == 0x20799Cu) {
        ctx->pc = 0x2079A0u;
        goto label_2079a0;
    }
    ctx->pc = 0x207998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2079A0u);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2079A0u; }
            if (ctx->pc != 0x2079A0u) { return; }
        }
    }
    ctx->pc = 0x2079A0u;
label_2079a0:
    // 0x2079a0: 0x1000ffef
label_2079a4:
    if (ctx->pc == 0x2079A4u) {
        ctx->pc = 0x2079A8u;
        goto label_2079a8;
    }
    ctx->pc = 0x2079A0u;
    {
        const bool branch_taken_0x2079a0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        if (branch_taken_0x2079a0) {
            ctx->pc = 0x207960u;
            goto label_207960;
        }
    }
    ctx->pc = 0x2079A8u;
label_2079a8:
    // 0x2079a8: 0x3c0e82d
    ctx->pc = 0x2079a8u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2079ac:
    // 0x2079ac: 0xdfbf0020
    ctx->pc = 0x2079acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2079b0:
    // 0x2079b0: 0xdfbe0010
    ctx->pc = 0x2079b0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2079b4:
    // 0x2079b4: 0xdfb00000
    ctx->pc = 0x2079b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2079b8:
    // 0x2079b8: 0x27bd0030
    ctx->pc = 0x2079b8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
label_2079bc:
    // 0x2079bc: 0x3e00008
label_2079c0:
    if (ctx->pc == 0x2079C0u) {
        ctx->pc = 0x2079C4u;
        goto label_fallthrough_0x2079bc;
    }
    ctx->pc = 0x2079BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            default: break;
        }
        return;
    }
label_fallthrough_0x2079bc:
    ctx->pc = 0x2079C4u;
}
