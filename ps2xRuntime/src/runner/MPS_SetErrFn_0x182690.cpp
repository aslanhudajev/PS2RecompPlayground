#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: MPS_SetErrFn
// Address: 0x182690 - 0x182718
void MPS_SetErrFn_0x182690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("MPS_SetErrFn");


    ctx->pc = 0x182690u;

    // 0x182690: 0x27bdffc0
    ctx->pc = 0x182690u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182694: 0xffb20020
    ctx->pc = 0x182694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x182698: 0xffb10010
    ctx->pc = 0x182698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x18269c: 0xc0902d
    ctx->pc = 0x18269cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826a0: 0xffb00000
    ctx->pc = 0x1826a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1826a4: 0xa0882d
    ctx->pc = 0x1826a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826a8: 0x80802d
    ctx->pc = 0x1826a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826ac: 0x16000006
    ctx->pc = 0x1826ACu;
    {
        const bool branch_taken_0x1826ac = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1826B0u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        if (branch_taken_0x1826ac) {
            ctx->pc = 0x1826C8u;
            goto label_1826c8;
        }
    }
    ctx->pc = 0x1826B4u;
    // 0x1826b4: 0x3c020024
    ctx->pc = 0x1826b4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)36 << 16));
    // 0x1826b8: 0xc0609c6
    ctx->pc = 0x1826B8u;
    SET_GPR_U32(ctx, 31, 0x1826C0u);
    ctx->pc = 0x1826BCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 5432)));
    ctx->pc = 0x182718u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_SetErrFnSub_0x182718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826C0u; }
        else if (ctx->pc != 0x1826C0u) { ctx->pc = 0x1826C0u; }
    }
    if (ctx->pc != 0x1826C0u) { return; }
    ctx->pc = 0x1826C0u;
    // 0x1826c0: 0x1000000f
    ctx->pc = 0x1826C0u;
    {
        const bool branch_taken_0x1826c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1826C4u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1826c0) {
            ctx->pc = 0x182700u;
            goto label_182700;
        }
    }
    ctx->pc = 0x1826C8u;
label_1826c8:
    // 0x1826c8: 0xc0609f0
    ctx->pc = 0x1826C8u;
    SET_GPR_U32(ctx, 31, 0x1826D0u);
    ctx->pc = 0x1826CCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1827C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_CheckHn_0x1827c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826D0u; }
        else if (ctx->pc != 0x1826D0u) { ctx->pc = 0x1826D0u; }
    }
    if (ctx->pc != 0x1826D0u) { return; }
    ctx->pc = 0x1826D0u;
    // 0x1826d0: 0x10400006
    ctx->pc = 0x1826D0u;
    {
        const bool branch_taken_0x1826d0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1826D4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1826d0) {
            ctx->pc = 0x1826ECu;
            goto label_1826ec;
        }
    }
    ctx->pc = 0x1826D8u;
    // 0x1826d8: 0x3c05ff02
    ctx->pc = 0x1826d8u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65282 << 16));
    // 0x1826dc: 0xc060986
    ctx->pc = 0x1826DCu;
    SET_GPR_U32(ctx, 31, 0x1826E4u);
    ctx->pc = 0x1826E0u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 257));
    ctx->pc = 0x182618u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSLIB_SetErr_0x182618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826E4u; }
        else if (ctx->pc != 0x1826E4u) { ctx->pc = 0x1826E4u; }
    }
    if (ctx->pc != 0x1826E4u) { return; }
    ctx->pc = 0x1826E4u;
    // 0x1826e4: 0x10000007
    ctx->pc = 0x1826E4u;
    {
        const bool branch_taken_0x1826e4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1826E8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x1826e4) {
            ctx->pc = 0x182704u;
            goto label_182704;
        }
    }
    ctx->pc = 0x1826ECu;
label_1826ec:
    // 0x1826ec: 0x26040004
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    // 0x1826f0: 0x220282d
    ctx->pc = 0x1826f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826f4: 0xc0609c6
    ctx->pc = 0x1826F4u;
    SET_GPR_U32(ctx, 31, 0x1826FCu);
    ctx->pc = 0x1826F8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x182718u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpslib_SetErrFnSub_0x182718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826FCu; }
        else if (ctx->pc != 0x1826FCu) { ctx->pc = 0x1826FCu; }
    }
    if (ctx->pc != 0x1826FCu) { return; }
    ctx->pc = 0x1826FCu;
    // 0x1826fc: 0x102d
    ctx->pc = 0x1826fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182700:
    // 0x182700: 0xdfbf0030
    ctx->pc = 0x182700u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_182704:
    // 0x182704: 0xdfb20020
    ctx->pc = 0x182704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182708: 0xdfb10010
    ctx->pc = 0x182708u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18270c: 0xdfb00000
    ctx->pc = 0x18270cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182710: 0x3e00008
    ctx->pc = 0x182710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182714u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1826C8u: goto label_1826c8;
            case 0x1826ECu: goto label_1826ec;
            case 0x182700u: goto label_182700;
            case 0x182704u: goto label_182704;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182718u;
}
