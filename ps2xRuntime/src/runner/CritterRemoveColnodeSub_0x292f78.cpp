#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterRemoveColnodeSub
// Address: 0x292f78 - 0x293054
void CritterRemoveColnodeSub_0x292f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x292f78u;

label_292f78:
    // 0x292f78: 0x27bdffa0
    ctx->pc = 0x292f78u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x292f7c: 0xffbf0050
    ctx->pc = 0x292f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x292f80: 0xffb40040
    ctx->pc = 0x292f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x292f84: 0xffb30030
    ctx->pc = 0x292f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x292f88: 0xffb20020
    ctx->pc = 0x292f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x292f8c: 0xffb10010
    ctx->pc = 0x292f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x292f90: 0xffb00000
    ctx->pc = 0x292f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x292f94: 0x80882d
    ctx->pc = 0x292f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f98: 0xa0802d
    ctx->pc = 0x292f98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292f9c: 0x12000025
    ctx->pc = 0x292F9Cu;
    {
        const bool branch_taken_0x292f9c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x292FA0u;
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292f9c) {
            ctx->pc = 0x293034u;
            goto label_293034;
        }
    }
    ctx->pc = 0x292FA4u;
    // 0x292fa4: 0x24140002
    ctx->pc = 0x292fa4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 0), 2));
    // 0x292fa8: 0x8e050078
    ctx->pc = 0x292fa8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x292fac: 0x0
    ctx->pc = 0x292facu;
    // NOP
label_292fb0:
    // 0x292fb0: 0x50a00005
    ctx->pc = 0x292FB0u;
    {
        const bool branch_taken_0x292fb0 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        if (branch_taken_0x292fb0) {
            ctx->pc = 0x292FB4u;
            SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 124)));
            ctx->pc = 0x292FC8u;
            goto label_292fc8;
        }
    }
    ctx->pc = 0x292FB8u;
    // 0x292fb8: 0x220202d
    ctx->pc = 0x292fb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fbc: 0xc0a4bde
    ctx->pc = 0x292FBCu;
    SET_GPR_U32(ctx, 31, 0x292FC4u);
    ctx->pc = 0x292FC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x292F78u;
    goto label_292f78;
    ctx->pc = 0x292FC4u;
label_292fc4:
    // 0x292fc4: 0x8e12007c
    ctx->pc = 0x292fc4u;
    SET_GPR_U32(ctx, 18, READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_292fc8:
    // 0x292fc8: 0x200202d
    ctx->pc = 0x292fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fcc: 0xc0b3f1a
    ctx->pc = 0x292FCCu;
    SET_GPR_U32(ctx, 31, 0x292FD4u);
    ctx->pc = 0x292FD0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FD4u; }
    }
    if (ctx->pc != 0x292FD4u) { return; }
    ctx->pc = 0x292FD4u;
    // 0x292fd4: 0x220202d
    ctx->pc = 0x292fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292fd8: 0xc0a4bb4
    ctx->pc = 0x292FD8u;
    SET_GPR_U32(ctx, 31, 0x292FE0u);
    ctx->pc = 0x292FDCu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x292ED0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterColnodeUpdateMoves_0x292ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292FE0u; }
    }
    if (ctx->pc != 0x292FE0u) { return; }
    ctx->pc = 0x292FE0u;
    // 0x292fe0: 0x8e220004
    ctx->pc = 0x292fe0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x292fe4: 0x84420118
    ctx->pc = 0x292fe4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x292fe8: 0x1840000e
    ctx->pc = 0x292FE8u;
    {
        const bool branch_taken_0x292fe8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292FECu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x292fe8) {
            ctx->pc = 0x293024u;
            goto label_293024;
        }
    }
    ctx->pc = 0x292FF0u;
    // 0x292ff0: 0x24050060
    ctx->pc = 0x292ff0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 96));
    // 0x292ff4: 0x851018
    ctx->pc = 0x292ff4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
label_292ff8:
    // 0x292ff8: 0x24420540
    ctx->pc = 0x292ff8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1344));
    // 0x292ffc: 0x2221821
    ctx->pc = 0x292ffcu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x293000: 0x8c620004
    ctx->pc = 0x293000u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x293004: 0x50500001
    ctx->pc = 0x293004u;
    {
        const bool branch_taken_0x293004 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 16));
        if (branch_taken_0x293004) {
            ctx->pc = 0x293008u;
            WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
            ctx->pc = 0x29300Cu;
            goto label_29300c;
        }
    }
    ctx->pc = 0x29300Cu;
label_29300c:
    // 0x29300c: 0x24840001
    ctx->pc = 0x29300cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
    // 0x293010: 0x8e220004
    ctx->pc = 0x293010u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x293014: 0x84420118
    ctx->pc = 0x293014u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 280)));
    // 0x293018: 0x82102a
    ctx->pc = 0x293018u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 2)));
    // 0x29301c: 0x1440fff6
    ctx->pc = 0x29301Cu;
    {
        const bool branch_taken_0x29301c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x293020u;
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x29301c) {
            ctx->pc = 0x292FF8u;
            goto label_292ff8;
        }
    }
    ctx->pc = 0x293024u;
label_293024:
    // 0x293024: 0x16740003
    ctx->pc = 0x293024u;
    {
        const bool branch_taken_0x293024 = (GPR_U32(ctx, 19) != GPR_U32(ctx, 20));
        ctx->pc = 0x293028u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293024) {
            ctx->pc = 0x293034u;
            goto label_293034;
        }
    }
    ctx->pc = 0x29302Cu;
    // 0x29302c: 0x5600ffe0
    ctx->pc = 0x29302Cu;
    {
        const bool branch_taken_0x29302c = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        if (branch_taken_0x29302c) {
            ctx->pc = 0x293030u;
            SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->pc = 0x292FB0u;
            goto label_292fb0;
        }
    }
    ctx->pc = 0x293034u;
label_293034:
    // 0x293034: 0xdfbf0050
    ctx->pc = 0x293034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293038: 0xdfb40040
    ctx->pc = 0x293038u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29303c: 0xdfb30030
    ctx->pc = 0x29303cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x293040: 0xdfb20020
    ctx->pc = 0x293040u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293044: 0xdfb10010
    ctx->pc = 0x293044u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293048: 0xdfb00000
    ctx->pc = 0x293048u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29304c: 0x3e00008
    ctx->pc = 0x29304Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293050u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292F78u: goto label_292f78;
            case 0x292FB0u: goto label_292fb0;
            case 0x292FC4u: goto label_292fc4;
            case 0x292FC8u: goto label_292fc8;
            case 0x292FF8u: goto label_292ff8;
            case 0x29300Cu: goto label_29300c;
            case 0x293024u: goto label_293024;
            case 0x293034u: goto label_293034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293054u;
}
