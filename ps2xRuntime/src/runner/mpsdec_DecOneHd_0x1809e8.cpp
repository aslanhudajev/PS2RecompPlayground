#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: mpsdec_DecOneHd
// Address: 0x1809e8 - 0x180ad4
void mpsdec_DecOneHd_0x1809e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("mpsdec_DecOneHd");


    ctx->pc = 0x1809e8u;

    // 0x1809e8: 0x27bdffa0
    ctx->pc = 0x1809e8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1809ec: 0xffb30030
    ctx->pc = 0x1809ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1809f0: 0xffb40040
    ctx->pc = 0x1809f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1809f4: 0xe0982d
    ctx->pc = 0x1809f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1809f8: 0xffb20020
    ctx->pc = 0x1809f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1809fc: 0xa02d
    ctx->pc = 0x1809fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a00: 0xffb10010
    ctx->pc = 0x180a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x180a04: 0xa0902d
    ctx->pc = 0x180a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a08: 0xffb00000
    ctx->pc = 0x180a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180a0c: 0x80882d
    ctx->pc = 0x180a0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a10: 0xffbf0050
    ctx->pc = 0x180a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x180a14: 0x100802d
    ctx->pc = 0x180a14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a18: 0xae600000
    ctx->pc = 0x180a18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x180a1c: 0xc06086c
    ctx->pc = 0x180A1Cu;
    SET_GPR_U32(ctx, 31, 0x180A24u);
    ctx->pc = 0x180A20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1821B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MPSDEL_CheckDelim_0x1821b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A24u; }
        else if (ctx->pc != 0x180A24u) { ctx->pc = 0x180A24u; }
    }
    if (ctx->pc != 0x180A24u) { return; }
    ctx->pc = 0x180A24u;
    // 0x180a24: 0x40182d
    ctx->pc = 0x180a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a28: 0x3c020002
    ctx->pc = 0x180a28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)2 << 16));
    // 0x180a2c: 0x10620014
    ctx->pc = 0x180A2Cu;
    {
        const bool branch_taken_0x180a2c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x180A30u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        if (branch_taken_0x180a2c) {
            ctx->pc = 0x180A80u;
            goto label_180a80;
        }
    }
    ctx->pc = 0x180A34u;
    // 0x180a34: 0x43102b
    ctx->pc = 0x180a34u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180a38: 0x14400006
    ctx->pc = 0x180A38u;
    {
        const bool branch_taken_0x180a38 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x180A3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)4 << 16));
        if (branch_taken_0x180a38) {
            ctx->pc = 0x180A54u;
            goto label_180a54;
        }
    }
    ctx->pc = 0x180A40u;
    // 0x180a40: 0x3c020001
    ctx->pc = 0x180a40u;
    SET_GPR_U32(ctx, 2, ((uint32_t)1 << 16));
    // 0x180a44: 0x10620007
    ctx->pc = 0x180A44u;
    {
        const bool branch_taken_0x180a44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x180A48u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180a44) {
            ctx->pc = 0x180A64u;
            goto label_180a64;
        }
    }
    ctx->pc = 0x180A4Cu;
    // 0x180a4c: 0x1000001a
    ctx->pc = 0x180A4Cu;
    {
        const bool branch_taken_0x180a4c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180A50u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x180a4c) {
            ctx->pc = 0x180AB8u;
            goto label_180ab8;
        }
    }
    ctx->pc = 0x180A54u;
label_180a54:
    // 0x180a54: 0x10620011
    ctx->pc = 0x180A54u;
    {
        const bool branch_taken_0x180a54 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x180A58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180a54) {
            ctx->pc = 0x180A9Cu;
            goto label_180a9c;
        }
    }
    ctx->pc = 0x180A5Cu;
    // 0x180a5c: 0x10000016
    ctx->pc = 0x180A5Cu;
    {
        const bool branch_taken_0x180a5c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180A60u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x180a5c) {
            ctx->pc = 0x180AB8u;
            goto label_180ab8;
        }
    }
    ctx->pc = 0x180A64u;
label_180a64:
    // 0x180a64: 0x26240014
    ctx->pc = 0x180a64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 20));
    // 0x180a68: 0x240282d
    ctx->pc = 0x180a68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a6c: 0x260302d
    ctx->pc = 0x180a6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a70: 0xc0602b6
    ctx->pc = 0x180A70u;
    SET_GPR_U32(ctx, 31, 0x180A78u);
    ctx->pc = 0x180A74u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x180AD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpsdec_DecPackHd_0x180ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A78u; }
        else if (ctx->pc != 0x180A78u) { ctx->pc = 0x180A78u; }
    }
    if (ctx->pc != 0x180A78u) { return; }
    ctx->pc = 0x180A78u;
    // 0x180a78: 0x1000000e
    ctx->pc = 0x180A78u;
    {
        const bool branch_taken_0x180a78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180A7Cu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180a78) {
            ctx->pc = 0x180AB4u;
            goto label_180ab4;
        }
    }
    ctx->pc = 0x180A80u;
label_180a80:
    // 0x180a80: 0x26240020
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 32));
    // 0x180a84: 0x240282d
    ctx->pc = 0x180a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a88: 0x260302d
    ctx->pc = 0x180a88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180a8c: 0xc0603ce
    ctx->pc = 0x180A8Cu;
    SET_GPR_U32(ctx, 31, 0x180A94u);
    ctx->pc = 0x180A90u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x180F38u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpsdec_DecSysHd_0x180f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180A94u; }
        else if (ctx->pc != 0x180A94u) { ctx->pc = 0x180A94u; }
    }
    if (ctx->pc != 0x180A94u) { return; }
    ctx->pc = 0x180A94u;
    // 0x180a94: 0x10000007
    ctx->pc = 0x180A94u;
    {
        const bool branch_taken_0x180a94 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x180A98u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x180a94) {
            ctx->pc = 0x180AB4u;
            goto label_180ab4;
        }
    }
    ctx->pc = 0x180A9Cu;
label_180a9c:
    // 0x180a9c: 0x8e270010
    ctx->pc = 0x180a9cu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x180aa0: 0x240282d
    ctx->pc = 0x180aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180aa4: 0x260302d
    ctx->pc = 0x180aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180aa8: 0xc06055a
    ctx->pc = 0x180AA8u;
    SET_GPR_U32(ctx, 31, 0x180AB0u);
    ctx->pc = 0x180AACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 17), 160));
    ctx->pc = 0x181568u;
    {
        const uint32_t __entryPc = ctx->pc;
        mpsdec_DecPketHd_0x181568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180AB0u; }
        else if (ctx->pc != 0x180AB0u) { ctx->pc = 0x180AB0u; }
    }
    if (ctx->pc != 0x180AB0u) { return; }
    ctx->pc = 0x180AB0u;
    // 0x180ab0: 0x280102d
    ctx->pc = 0x180ab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_180ab4:
    // 0x180ab4: 0xdfbf0050
    ctx->pc = 0x180ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_180ab8:
    // 0x180ab8: 0xdfb40040
    ctx->pc = 0x180ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180abc: 0xdfb30030
    ctx->pc = 0x180abcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180ac0: 0xdfb20020
    ctx->pc = 0x180ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180ac4: 0xdfb10010
    ctx->pc = 0x180ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180ac8: 0xdfb00000
    ctx->pc = 0x180ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180acc: 0x3e00008
    ctx->pc = 0x180ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180AD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x180A54u: goto label_180a54;
            case 0x180A64u: goto label_180a64;
            case 0x180A80u: goto label_180a80;
            case 0x180A9Cu: goto label_180a9c;
            case 0x180AB4u: goto label_180ab4;
            case 0x180AB8u: goto label_180ab8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x180AD4u;
}
