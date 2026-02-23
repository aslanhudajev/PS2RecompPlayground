#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: NEXTEV__13EventCtrlTaskFv
// Address: 0x1e3d80 - 0x1e3f24
void NEXTEV__13EventCtrlTaskFv_0x1e3d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("NEXTEV__13EventCtrlTaskFv");


    ctx->pc = 0x1e3d80u;

    // 0x1e3d80: 0x27bdfff0
    ctx->pc = 0x1e3d80u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e3d84: 0x7fbf0000
    ctx->pc = 0x1e3d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x1e3d88: 0x83868bb0
    ctx->pc = 0x1e3d88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x1e3d8c: 0x83838ba8
    ctx->pc = 0x1e3d8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e3d90: 0x3c0101fc
    ctx->pc = 0x1e3d90u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1e3d94: 0x83898bac
    ctx->pc = 0x1e3d94u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x1e3d98: 0x70802e28
    ctx->pc = 0x1e3d98u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e3d9c: 0x34212000
    ctx->pc = 0x1e3d9cu;
    SET_GPR_U32(ctx, 1, OR32(GPR_U32(ctx, 1), 8192));
    // 0x1e3da0: 0x24c60001
    ctx->pc = 0x1e3da0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x1e3da4: 0x35080
    ctx->pc = 0x1e3da4u;
    SET_GPR_U32(ctx, 10, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e3da8: 0xa3868bb0
    ctx->pc = 0x1e3da8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937520), (uint8_t)GPR_U32(ctx, 6));
    // 0x1e3dac: 0x1411821
    ctx->pc = 0x1e3dacu;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 1)));
    // 0x1e3db0: 0x8c670000
    ctx->pc = 0x1e3db0u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3db4: 0x83868bb0
    ctx->pc = 0x1e3db4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x1e3db8: 0x94080
    ctx->pc = 0x1e3db8u;
    SET_GPR_U32(ctx, 8, SLL32(GPR_U32(ctx, 9), 2));
    // 0x1e3dbc: 0x2404ffff
    ctx->pc = 0x1e3dbcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e3dc0: 0xe84021
    ctx->pc = 0x1e3dc0u;
    SET_GPR_U32(ctx, 8, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x1e3dc4: 0x63880
    ctx->pc = 0x1e3dc4u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e3dc8: 0x8d060000
    ctx->pc = 0x1e3dc8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1e3dcc: 0xc73021
    ctx->pc = 0x1e3dccu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1e3dd0: 0x8cc60000
    ctx->pc = 0x1e3dd0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e3dd4: 0x14c4003e
    ctx->pc = 0x1E3DD4u;
    {
        const bool branch_taken_0x1e3dd4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 4));
        if (branch_taken_0x1e3dd4) {
            ctx->pc = 0x1E3ED0u;
            goto label_1e3ed0;
        }
    }
    ctx->pc = 0x1E3DDCu;
    // 0x1e3ddc: 0x3c04009b
    ctx->pc = 0x1e3ddcu;
    SET_GPR_U32(ctx, 4, ((uint32_t)155 << 16));
    // 0x1e3de0: 0x248463a0
    ctx->pc = 0x1e3de0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 25504));
    // 0x1e3de4: 0x8a2021
    ctx->pc = 0x1e3de4u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1e3de8: 0x8c870000
    ctx->pc = 0x1e3de8u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3dec: 0x930c0
    ctx->pc = 0x1e3decu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 9), 3));
    // 0x1e3df0: 0xe63821
    ctx->pc = 0x1e3df0u;
    SET_GPR_U32(ctx, 7, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1e3df4: 0x84e60000
    ctx->pc = 0x1e3df4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1e3df8: 0x24040003
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e3dfc: 0x10c40017
    ctx->pc = 0x1E3DFCu;
    {
        const bool branch_taken_0x1e3dfc = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        if (branch_taken_0x1e3dfc) {
            ctx->pc = 0x1E3E5Cu;
            goto label_1e3e5c;
        }
    }
    ctx->pc = 0x1E3E04u;
    // 0x1e3e04: 0x24040002
    ctx->pc = 0x1e3e04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e3e08: 0x10c40012
    ctx->pc = 0x1E3E08u;
    {
        const bool branch_taken_0x1e3e08 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        ctx->pc = 0x1E3E0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 1));
        if (branch_taken_0x1e3e08) {
            ctx->pc = 0x1E3E54u;
            goto label_1e3e54;
        }
    }
    ctx->pc = 0x1E3E10u;
    // 0x1e3e10: 0x24040001
    ctx->pc = 0x1e3e10u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3e14: 0x10c40008
    ctx->pc = 0x1E3E14u;
    {
        const bool branch_taken_0x1e3e14 = (GPR_U32(ctx, 6) == GPR_U32(ctx, 4));
        if (branch_taken_0x1e3e14) {
            ctx->pc = 0x1E3E38u;
            goto label_1e3e38;
        }
    }
    ctx->pc = 0x1E3E1Cu;
    // 0x1e3e1c: 0x10c00003
    ctx->pc = 0x1E3E1Cu;
    {
        const bool branch_taken_0x1e3e1c = (GPR_U32(ctx, 6) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e3e1c) {
            ctx->pc = 0x1E3E2Cu;
            goto label_1e3e2c;
        }
    }
    ctx->pc = 0x1E3E24u;
    // 0x1e3e24: 0x10000029
    ctx->pc = 0x1E3E24u;
    {
        const bool branch_taken_0x1e3e24 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3E28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x1e3e24) {
            ctx->pc = 0x1E3ECCu;
            goto label_1e3ecc;
        }
    }
    ctx->pc = 0x1E3E2Cu;
label_1e3e2c:
    // 0x1e3e2c: 0x80e40002
    ctx->pc = 0x1e3e2cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1e3e30: 0x10000025
    ctx->pc = 0x1E3E30u;
    {
        const bool branch_taken_0x1e3e30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3E34u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937516), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1e3e30) {
            ctx->pc = 0x1E3EC8u;
            goto label_1e3ec8;
        }
    }
    ctx->pc = 0x1E3E38u;
label_1e3e38:
    // 0x1e3e38: 0x83848bb4
    ctx->pc = 0x1e3e38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937524)));
    // 0x1e3e3c: 0x42040
    ctx->pc = 0x1e3e3cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 1));
    // 0x1e3e40: 0x872021
    ctx->pc = 0x1e3e40u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1e3e44: 0x80840002
    ctx->pc = 0x1e3e44u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e3e48: 0x1000001f
    ctx->pc = 0x1E3E48u;
    {
        const bool branch_taken_0x1e3e48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3E4Cu;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937516), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1e3e48) {
            ctx->pc = 0x1E3EC8u;
            goto label_1e3ec8;
        }
    }
    ctx->pc = 0x1E3E50u;
    // 0x1e3e50: 0x25240001
    ctx->pc = 0x1e3e50u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 9), 1));
label_1e3e54:
    // 0x1e3e54: 0x1000001c
    ctx->pc = 0x1E3E54u;
    {
        const bool branch_taken_0x1e3e54 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3E58u;
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937516), (uint8_t)GPR_U32(ctx, 4));
        if (branch_taken_0x1e3e54) {
            ctx->pc = 0x1E3EC8u;
            goto label_1e3ec8;
        }
    }
    ctx->pc = 0x1E3E5Cu;
label_1e3e5c:
    // 0x1e3e5c: 0xc078b94
    ctx->pc = 0x1E3E5Cu;
    SET_GPR_U32(ctx, 31, 0x1E3E64u);
    ctx->pc = 0x1E2E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        EventStageClear__Fv_0x1e2e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3E64u; }
        else if (ctx->pc != 0x1E3E64u) { ctx->pc = 0x1E3E64u; }
    }
    if (ctx->pc != 0x1E3E64u) { return; }
    ctx->pc = 0x1E3E64u;
    // 0x1e3e64: 0x83878ba8
    ctx->pc = 0x1e3e64u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e3e68: 0x3c03009b
    ctx->pc = 0x1e3e68u;
    SET_GPR_U32(ctx, 3, ((uint32_t)155 << 16));
    // 0x1e3e6c: 0x246663a0
    ctx->pc = 0x1e3e6cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 3), 25504));
    // 0x1e3e70: 0x83848bac
    ctx->pc = 0x1e3e70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x1e3e74: 0x3c0101fc
    ctx->pc = 0x1e3e74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)508 << 16));
    // 0x1e3e78: 0x24030001
    ctx->pc = 0x1e3e78u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e3e7c: 0x73880
    ctx->pc = 0x1e3e7cu;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 2));
    // 0x1e3e80: 0xc73021
    ctx->pc = 0x1e3e80u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x1e3e84: 0x8cc60000
    ctx->pc = 0x1e3e84u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e3e88: 0x420c0
    ctx->pc = 0x1e3e88u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e3e8c: 0x862021
    ctx->pc = 0x1e3e8cu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e3e90: 0x80840002
    ctx->pc = 0x1e3e90u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1e3e94: 0xa3848bac
    ctx->pc = 0x1e3e94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937516), (uint8_t)GPR_U32(ctx, 4));
    // 0x1e3e98: 0xa3808bb0
    ctx->pc = 0x1e3e98u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937520), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3e9c: 0x8c242020
    ctx->pc = 0x1e3e9cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 1), 8224)));
    // 0x1e3ea0: 0x8c840000
    ctx->pc = 0x1e3ea0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3ea4: 0x8c840000
    ctx->pc = 0x1e3ea4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e3ea8: 0xaca4000c
    ctx->pc = 0x1e3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 4));
    // 0x1e3eac: 0x83848ba8
    ctx->pc = 0x1e3eacu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
    // 0x1e3eb0: 0x14830019
    ctx->pc = 0x1E3EB0u;
    {
        const bool branch_taken_0x1e3eb0 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1e3eb0) {
            ctx->pc = 0x1E3F18u;
            goto label_1e3f18;
        }
    }
    ctx->pc = 0x1E3EB8u;
    // 0x1e3eb8: 0xc084d5c
    ctx->pc = 0x1E3EB8u;
    SET_GPR_U32(ctx, 31, 0x1E3EC0u);
    ctx->pc = 0x213570u;
    {
        const uint32_t __entryPc = ctx->pc;
        AddHitPerBonus__Fv_0x213570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3EC0u; }
        else if (ctx->pc != 0x1E3EC0u) { ctx->pc = 0x1E3EC0u; }
    }
    if (ctx->pc != 0x1E3EC0u) { return; }
    ctx->pc = 0x1E3EC0u;
    // 0x1e3ec0: 0x10000016
    ctx->pc = 0x1E3EC0u;
    {
        const bool branch_taken_0x1e3ec0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E3EC4u;
        SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x1e3ec0) {
            ctx->pc = 0x1E3F1Cu;
            goto label_1e3f1c;
        }
    }
    ctx->pc = 0x1E3EC8u;
label_1e3ec8:
    // 0x1e3ec8: 0x24040001
    ctx->pc = 0x1e3ec8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
label_1e3ecc:
    // 0x1e3ecc: 0xa3848bb0
    ctx->pc = 0x1e3eccu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937520), (uint8_t)GPR_U32(ctx, 4));
label_1e3ed0:
    // 0x1e3ed0: 0x8c640000
    ctx->pc = 0x1e3ed0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3ed4: 0x83868bac
    ctx->pc = 0x1e3ed4u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937516)));
    // 0x1e3ed8: 0x3c010050
    ctx->pc = 0x1e3ed8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e3edc: 0x83838bb0
    ctx->pc = 0x1e3edcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937520)));
    // 0x1e3ee0: 0x63080
    ctx->pc = 0x1e3ee0u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e3ee4: 0x863021
    ctx->pc = 0x1e3ee4u;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1e3ee8: 0x32080
    ctx->pc = 0x1e3ee8u;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 3), 2));
    // 0x1e3eec: 0x8cc30000
    ctx->pc = 0x1e3eecu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e3ef0: 0x641821
    ctx->pc = 0x1e3ef0u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1e3ef4: 0x8c630000
    ctx->pc = 0x1e3ef4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e3ef8: 0xaca3000c
    ctx->pc = 0x1e3ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x1e3efc: 0x8023e4f5
    ctx->pc = 0x1e3efcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 4294960373)));
    // 0x1e3f00: 0x14600002
    ctx->pc = 0x1E3F00u;
    {
        const bool branch_taken_0x1e3f00 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x1e3f00) {
            ctx->pc = 0x1E3F0Cu;
            goto label_1e3f0c;
        }
    }
    ctx->pc = 0x1E3F08u;
    // 0x1e3f08: 0xa3808bb4
    ctx->pc = 0x1e3f08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294937524), (uint8_t)GPR_U32(ctx, 0));
label_1e3f0c:
    // 0x1e3f0c: 0x3c010050
    ctx->pc = 0x1e3f0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e3f10: 0xa020e4f7
    ctx->pc = 0x1e3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960375), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e3f14: 0xa0a00005
    ctx->pc = 0x1e3f14u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 0));
label_1e3f18:
    // 0x1e3f18: 0x7bbf0000
    ctx->pc = 0x1e3f18u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3f1c:
    // 0x1e3f1c: 0x3e00008
    ctx->pc = 0x1E3F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3F20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E3E2Cu: goto label_1e3e2c;
            case 0x1E3E38u: goto label_1e3e38;
            case 0x1E3E54u: goto label_1e3e54;
            case 0x1E3E5Cu: goto label_1e3e5c;
            case 0x1E3EC8u: goto label_1e3ec8;
            case 0x1E3ECCu: goto label_1e3ecc;
            case 0x1E3ED0u: goto label_1e3ed0;
            case 0x1E3F0Cu: goto label_1e3f0c;
            case 0x1E3F18u: goto label_1e3f18;
            case 0x1E3F1Cu: goto label_1e3f1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E3F24u;
}
