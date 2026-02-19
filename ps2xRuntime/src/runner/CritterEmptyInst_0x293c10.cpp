#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterEmptyInst
// Address: 0x293c10 - 0x293d3c
void CritterEmptyInst_0x293c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x293c10u;

    // 0x293c10: 0x27bdffd0
    ctx->pc = 0x293c10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x293c14: 0xffbf0020
    ctx->pc = 0x293c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293c18: 0xffb10010
    ctx->pc = 0x293c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x293c1c: 0xffb00000
    ctx->pc = 0x293c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x293c20: 0x3c020036
    ctx->pc = 0x293c20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x293c24: 0x8c42d4c0
    ctx->pc = 0x293c24u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x293c28: 0x18400012
    ctx->pc = 0x293C28u;
    {
        const bool branch_taken_0x293c28 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x293C2Cu;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293c28) {
            ctx->pc = 0x293C74u;
            goto label_293c74;
        }
    }
    ctx->pc = 0x293C30u;
    // 0x293c30: 0x3c020035
    ctx->pc = 0x293c30u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x293c34: 0x8c421dc4
    ctx->pc = 0x293c34u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 7620)));
    // 0x293c38: 0x1040000e
    ctx->pc = 0x293C38u;
    {
        const bool branch_taken_0x293c38 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293C3Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x293c38) {
            ctx->pc = 0x293C74u;
            goto label_293c74;
        }
    }
    ctx->pc = 0x293C40u;
    // 0x293c40: 0x8c43d4c0
    ctx->pc = 0x293c40u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294956224)));
    // 0x293c44: 0x3c020035
    ctx->pc = 0x293c44u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x293c48: 0x24461dc0
    ctx->pc = 0x293c48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x293c4c: 0x24040b70
    ctx->pc = 0x293c4cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x293c50: 0x26310001
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x293c54: 0x0
    ctx->pc = 0x293c54u;
    // NOP
label_293c58:
    // 0x293c58: 0x223102a
    ctx->pc = 0x293c58u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 3)));
    // 0x293c5c: 0x10400005
    ctx->pc = 0x293C5Cu;
    {
        const bool branch_taken_0x293c5c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x293C60u;
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
        if (branch_taken_0x293c5c) {
            ctx->pc = 0x293C74u;
            goto label_293c74;
        }
    }
    ctx->pc = 0x293C64u;
    // 0x293c64: 0xa61021
    ctx->pc = 0x293c64u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x293c68: 0x8c420004
    ctx->pc = 0x293c68u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293c6c: 0x5440fffa
    ctx->pc = 0x293C6Cu;
    {
        const bool branch_taken_0x293c6c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293c6c) {
            ctx->pc = 0x293C70u;
            SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
            ctx->pc = 0x293C58u;
            goto label_293c58;
        }
    }
    ctx->pc = 0x293C74u;
label_293c74:
    // 0x293c74: 0x2a220010
    ctx->pc = 0x293c74u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 16));
    // 0x293c78: 0x14400007
    ctx->pc = 0x293C78u;
    {
        const bool branch_taken_0x293c78 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x293C7Cu;
        SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
        if (branch_taken_0x293c78) {
            ctx->pc = 0x293C98u;
            goto label_293c98;
        }
    }
    ctx->pc = 0x293C80u;
    // 0x293c80: 0x3c04003b
    ctx->pc = 0x293c80u;
    SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
    // 0x293c84: 0x2484e1d8
    ctx->pc = 0x293c84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294959576));
    // 0x293c88: 0xc0b492e
    ctx->pc = 0x293C88u;
    SET_GPR_U32(ctx, 31, 0x293C90u);
    ctx->pc = 0x293C8Cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D24B8u;
    {
        const uint32_t __entryPc = ctx->pc;
        Errorf_0x2d24b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293C90u; }
    }
    if (ctx->pc != 0x293C90u) { return; }
    ctx->pc = 0x293C90u;
    // 0x293c90: 0x10000025
    ctx->pc = 0x293C90u;
    {
        const bool branch_taken_0x293c90 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x293C94u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x293c90) {
            ctx->pc = 0x293D28u;
            goto label_293d28;
        }
    }
    ctx->pc = 0x293C98u;
label_293c98:
    // 0x293c98: 0x8c82d4c0
    ctx->pc = 0x293c98u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 4294956224)));
    // 0x293c9c: 0x16220009
    ctx->pc = 0x293C9Cu;
    {
        const bool branch_taken_0x293c9c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x293CA0u;
        SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
        if (branch_taken_0x293c9c) {
            ctx->pc = 0x293CC4u;
            goto label_293cc4;
        }
    }
    ctx->pc = 0x293CA4u;
    // 0x293ca4: 0x26230001
    ctx->pc = 0x293ca4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 17), 1));
    // 0x293ca8: 0xac83d4c0
    ctx->pc = 0x293ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294956224), GPR_U32(ctx, 3));
    // 0x293cac: 0x3c040035
    ctx->pc = 0x293cacu;
    SET_GPR_U32(ctx, 4, ((uint32_t)53 << 16));
    // 0x293cb0: 0x8c821d70
    ctx->pc = 0x293cb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 7536)));
    // 0x293cb4: 0x43102a
    ctx->pc = 0x293cb4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x293cb8: 0x54400001
    ctx->pc = 0x293CB8u;
    {
        const bool branch_taken_0x293cb8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293cb8) {
            ctx->pc = 0x293CBCu;
            WRITE32(ADD32(GPR_U32(ctx, 4), 7536), GPR_U32(ctx, 3));
            ctx->pc = 0x293CC0u;
            goto label_293cc0;
        }
    }
    ctx->pc = 0x293CC0u;
label_293cc0:
    // 0x293cc0: 0x3c020035
    ctx->pc = 0x293cc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
label_293cc4:
    // 0x293cc4: 0x24421dc0
    ctx->pc = 0x293cc4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x293cc8: 0x24100b70
    ctx->pc = 0x293cc8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 0), 2928));
    // 0x293ccc: 0x2308018
    ctx->pc = 0x293cccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293cd0: 0x2028021
    ctx->pc = 0x293cd0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x293cd4: 0x200202d
    ctx->pc = 0x293cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cd8: 0x282d
    ctx->pc = 0x293cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293cdc: 0xc0becc6
    ctx->pc = 0x293CDCu;
    SET_GPR_U32(ctx, 31, 0x293CE4u);
    ctx->pc = 0x293CE0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2928));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293CE4u; }
    }
    if (ctx->pc != 0x293CE4u) { return; }
    ctx->pc = 0x293CE4u;
    // 0x293ce4: 0xa6110000
    ctx->pc = 0x293ce4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x293ce8: 0x3c030035
    ctx->pc = 0x293ce8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x293cec: 0x94621d8c
    ctx->pc = 0x293cecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 7564)));
    // 0x293cf0: 0xa6020002
    ctx->pc = 0x293cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x293cf4: 0x24420001
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x293cf8: 0xa4621d8c
    ctx->pc = 0x293cf8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7564), (uint16_t)GPR_U32(ctx, 2));
    // 0x293cfc: 0x3042ffff
    ctx->pc = 0x293cfcu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x293d00: 0x2c421000
    ctx->pc = 0x293d00u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 4096));
    // 0x293d04: 0x54400004
    ctx->pc = 0x293D04u;
    {
        const bool branch_taken_0x293d04 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x293d04) {
            ctx->pc = 0x293D08u;
            SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2928));
            ctx->pc = 0x293D18u;
            goto label_293d18;
        }
    }
    ctx->pc = 0x293D0Cu;
    // 0x293d0c: 0x24020001
    ctx->pc = 0x293d0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x293d10: 0xa4621d8c
    ctx->pc = 0x293d10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 7564), (uint16_t)GPR_U32(ctx, 2));
    // 0x293d14: 0x24030b70
    ctx->pc = 0x293d14u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2928));
label_293d18:
    // 0x293d18: 0x2231818
    ctx->pc = 0x293d18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x293d1c: 0x3c020035
    ctx->pc = 0x293d1cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)53 << 16));
    // 0x293d20: 0x24421dc0
    ctx->pc = 0x293d20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 7616));
    // 0x293d24: 0x621021
    ctx->pc = 0x293d24u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_293d28:
    // 0x293d28: 0xdfbf0020
    ctx->pc = 0x293d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293d2c: 0xdfb10010
    ctx->pc = 0x293d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293d30: 0xdfb00000
    ctx->pc = 0x293d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293d34: 0x3e00008
    ctx->pc = 0x293D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293D38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x293C58u: goto label_293c58;
            case 0x293C74u: goto label_293c74;
            case 0x293C98u: goto label_293c98;
            case 0x293CC0u: goto label_293cc0;
            case 0x293CC4u: goto label_293cc4;
            case 0x293D18u: goto label_293d18;
            case 0x293D28u: goto label_293d28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x293D3Cu;
}
