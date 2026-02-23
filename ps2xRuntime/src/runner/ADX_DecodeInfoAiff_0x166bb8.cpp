#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADX_DecodeInfoAiff
// Address: 0x166bb8 - 0x166cc0
void ADX_DecodeInfoAiff_0x166bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADX_DecodeInfoAiff");


    ctx->pc = 0x166bb8u;

    // 0x166bb8: 0x27bdff70
    ctx->pc = 0x166bb8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x166bbc: 0x28a51000
    ctx->pc = 0x166bbcu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), 4096));
    // 0x166bc0: 0xffb60070
    ctx->pc = 0x166bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x166bc4: 0xffb50060
    ctx->pc = 0x166bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x166bc8: 0x120b02d
    ctx->pc = 0x166bc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bcc: 0xffb40050
    ctx->pc = 0x166bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x166bd0: 0xe0a82d
    ctx->pc = 0x166bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bd4: 0xffb30040
    ctx->pc = 0x166bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x166bd8: 0x100a02d
    ctx->pc = 0x166bd8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bdc: 0xffb20030
    ctx->pc = 0x166bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x166be0: 0x160982d
    ctx->pc = 0x166be0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166be4: 0xffb10020
    ctx->pc = 0x166be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x166be8: 0x140902d
    ctx->pc = 0x166be8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bec: 0xffb00010
    ctx->pc = 0x166becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x166bf0: 0xc0882d
    ctx->pc = 0x166bf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166bf4: 0xffbf0080
    ctx->pc = 0x166bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x166bf8: 0x10a00004
    ctx->pc = 0x166BF8u;
    {
        const bool branch_taken_0x166bf8 = (GPR_U32(ctx, 5) == GPR_U32(ctx, 0));
        ctx->pc = 0x166BFCu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x166bf8) {
            ctx->pc = 0x166C0Cu;
            goto label_166c0c;
        }
    }
    ctx->pc = 0x166C00u;
    // 0x166c00: 0xa6200000
    ctx->pc = 0x166c00u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_166c04:
    // 0x166c04: 0x10000024
    ctx->pc = 0x166C04u;
    {
        const bool branch_taken_0x166c04 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x166C08u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x166c04) {
            ctx->pc = 0x166C98u;
            goto label_166c98;
        }
    }
    ctx->pc = 0x166C0Cu;
label_166c0c:
    // 0x166c0c: 0x200202d
    ctx->pc = 0x166c0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c10: 0x3a0282d
    ctx->pc = 0x166c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c14: 0x37a60004
    ctx->pc = 0x166c14u;
    SET_GPR_U32(ctx, 6, OR32(GPR_U32(ctx, 29), 4));
    // 0x166c18: 0x37a70008
    ctx->pc = 0x166c18u;
    SET_GPR_U32(ctx, 7, OR32(GPR_U32(ctx, 29), 8));
    // 0x166c1c: 0xc0599f8
    ctx->pc = 0x166C1Cu;
    SET_GPR_U32(ctx, 31, 0x166C24u);
    ctx->pc = 0x166C20u;
    SET_GPR_U32(ctx, 8, OR32(GPR_U32(ctx, 29), 12));
    ctx->pc = 0x1667E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        AIFF_GetInfo_0x1667e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x166C24u; }
        else if (ctx->pc != 0x166C24u) { ctx->pc = 0x166C24u; }
    }
    if (ctx->pc != 0x166C24u) { return; }
    ctx->pc = 0x166C24u;
    // 0x166c24: 0x1040fff7
    ctx->pc = 0x166C24u;
    {
        const bool branch_taken_0x166c24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x166C28u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        if (branch_taken_0x166c24) {
            ctx->pc = 0x166C04u;
            goto label_166c04;
        }
    }
    ctx->pc = 0x166C2Cu;
    // 0x166c2c: 0xa6220000
    ctx->pc = 0x166c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x166c30: 0x21400
    ctx->pc = 0x166c30u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x166c34: 0x1840fff3
    ctx->pc = 0x166C34u;
    {
        const bool branch_taken_0x166c34 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x166C38u;
        SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x166c34) {
            ctx->pc = 0x166C04u;
            goto label_166c04;
        }
    }
    ctx->pc = 0x166C3Cu;
    // 0x166c3c: 0x2407ffff
    ctx->pc = 0x166c3cu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166c40: 0x93a30004
    ctx->pc = 0x166c40u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x166c44: 0x2405ffff
    ctx->pc = 0x166c44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x166c48: 0xae620000
    ctx->pc = 0x166c48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x166c4c: 0x24080001
    ctx->pc = 0x166c4cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 1));
    // 0x166c50: 0x102d
    ctx->pc = 0x166c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166c54: 0x93a60008
    ctx->pc = 0x166c54u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x166c58: 0xa2430000
    ctx->pc = 0x166c58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x166c5c: 0x8fa4000c
    ctx->pc = 0x166c5cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x166c60: 0xa2860000
    ctx->pc = 0x166c60u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x166c64: 0x8fa30090
    ctx->pc = 0x166c64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x166c68: 0xac640000
    ctx->pc = 0x166c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x166c6c: 0xa2a70000
    ctx->pc = 0x166c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x166c70: 0x82830000
    ctx->pc = 0x166c70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x166c74: 0x82440000
    ctx->pc = 0x166c74u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x166c78: 0x832018
    ctx->pc = 0x166c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)(uint32_t)result); }
    // 0x166c7c: 0xa4282a
    ctx->pc = 0x166c7cu;
    SET_GPR_U32(ctx, 5, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 4)));
    // 0x166c80: 0x24830007
    ctx->pc = 0x166c80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 4), 7));
    // 0x166c84: 0x85180b
    ctx->pc = 0x166c84u;
    if (GPR_U32(ctx, 5) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x166c88: 0x318c3
    ctx->pc = 0x166c88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x166c8c: 0xa2c30000
    ctx->pc = 0x166c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x166c90: 0x8fa40098
    ctx->pc = 0x166c90u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x166c94: 0xac880000
    ctx->pc = 0x166c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_166c98:
    // 0x166c98: 0xdfbf0080
    ctx->pc = 0x166c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x166c9c: 0xdfb60070
    ctx->pc = 0x166c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166ca0: 0xdfb50060
    ctx->pc = 0x166ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166ca4: 0xdfb40050
    ctx->pc = 0x166ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166ca8: 0xdfb30040
    ctx->pc = 0x166ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x166cac: 0xdfb20030
    ctx->pc = 0x166cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x166cb0: 0xdfb10020
    ctx->pc = 0x166cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x166cb4: 0xdfb00010
    ctx->pc = 0x166cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x166cb8: 0x3e00008
    ctx->pc = 0x166CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166CBCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x166C04u: goto label_166c04;
            case 0x166C0Cu: goto label_166c0c;
            case 0x166C98u: goto label_166c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x166CC0u;
}
