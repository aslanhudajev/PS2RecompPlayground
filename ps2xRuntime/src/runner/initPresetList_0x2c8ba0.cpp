#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: initPresetList
// Address: 0x2c8ba0 - 0x2c8c8c
void initPresetList_0x2c8ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c8ba0u;

    // 0x2c8ba0: 0x3c02003a
    ctx->pc = 0x2c8ba0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8ba4: 0x8c42b630
    ctx->pc = 0x2c8ba4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294948400)));
    // 0x2c8ba8: 0x14400036
    ctx->pc = 0x2C8BA8u;
    {
        const bool branch_taken_0x2c8ba8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8BACu;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 8));
        if (branch_taken_0x2c8ba8) {
            ctx->pc = 0x2C8C84u;
            goto label_2c8c84;
        }
    }
    ctx->pc = 0x2C8BB0u;
    // 0x2c8bb0: 0x3c02003a
    ctx->pc = 0x2c8bb0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8bb4: 0x244bab38
    ctx->pc = 0x2c8bb4u;
    SET_GPR_S32(ctx, 11, ADD32(GPR_U32(ctx, 2), 4294945592));
    // 0x2c8bb8: 0x24090138
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 0), 312));
    // 0x2c8bbc: 0x3c02003a
    ctx->pc = 0x2c8bbcu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8bc0: 0x244aac6c
    ctx->pc = 0x2c8bc0u;
    SET_GPR_S32(ctx, 10, ADD32(GPR_U32(ctx, 2), 4294945900));
    // 0x2c8bc4: 0x3c0caaaa
    ctx->pc = 0x2c8bc4u;
    SET_GPR_U32(ctx, 12, ((uint32_t)43690 << 16));
    // 0x2c8bc8: 0x358c5555
    ctx->pc = 0x2c8bc8u;
    SET_GPR_U32(ctx, 12, OR32(GPR_U32(ctx, 12), 21845));
    // 0x2c8bcc: 0x0
    ctx->pc = 0x2c8bccu;
    // NOP
label_2c8bd0:
    // 0x2c8bd0: 0x1091818
    ctx->pc = 0x2c8bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c8bd4: 0x6b1021
    ctx->pc = 0x2c8bd4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x2c8bd8: 0x8c420000
    ctx->pc = 0x2c8bd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c8bdc: 0x2c420101
    ctx->pc = 0x2c8bdcu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 257));
    // 0x2c8be0: 0x10400003
    ctx->pc = 0x2C8BE0u;
    {
        const bool branch_taken_0x2c8be0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8BE4u;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
        if (branch_taken_0x2c8be0) {
            ctx->pc = 0x2C8BF0u;
            goto label_2c8bf0;
        }
    }
    ctx->pc = 0x2C8BE8u;
    // 0x2c8be8: 0x10000020
    ctx->pc = 0x2C8BE8u;
    {
        const bool branch_taken_0x2c8be8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C8BECu;
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        if (branch_taken_0x2c8be8) {
            ctx->pc = 0x2C8C6Cu;
            goto label_2c8c6c;
        }
    }
    ctx->pc = 0x2C8BF0u;
label_2c8bf0:
    // 0x2c8bf0: 0x282d
    ctx->pc = 0x2c8bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8bf4: 0x1091018
    ctx->pc = 0x2c8bf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c8bf8: 0x4b2021
    ctx->pc = 0x2c8bf8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x2c8bfc: 0x24060134
    ctx->pc = 0x2c8bfcu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 308));
    // 0x2c8c00: 0x24030138
    ctx->pc = 0x2c8c00u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 312));
    // 0x2c8c04: 0x1031818
    ctx->pc = 0x2c8c04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c8c08: 0x3c02003a
    ctx->pc = 0x2c8c08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c8c0c: 0x2442ab78
    ctx->pc = 0x2c8c0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294945656));
    // 0x2c8c10: 0x621821
    ctx->pc = 0x2c8c10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2c8c14: 0x24670020
    ctx->pc = 0x2c8c14u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 3), 32));
label_2c8c18:
    // 0x2c8c18: 0x83102b
    ctx->pc = 0x2c8c18u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2c8c1c: 0x5440000b
    ctx->pc = 0x2C8C1Cu;
    {
        const bool branch_taken_0x2c8c1c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c8c1c) {
            ctx->pc = 0x2C8C20u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2C8C4Cu;
            goto label_2c8c4c;
        }
    }
    ctx->pc = 0x2C8C24u;
    // 0x2c8c24: 0xe4102b
    ctx->pc = 0x2c8c24u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x2c8c28: 0x54400008
    ctx->pc = 0x2C8C28u;
    {
        const bool branch_taken_0x2c8c28 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c8c28) {
            ctx->pc = 0x2C8C2Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->pc = 0x2C8C4Cu;
            goto label_2c8c4c;
        }
    }
    ctx->pc = 0x2C8C30u;
    // 0x2c8c30: 0x90820000
    ctx->pc = 0x2c8c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c8c34: 0xa22821
    ctx->pc = 0x2c8c34u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c8c38: 0x90820001
    ctx->pc = 0x2c8c38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x2c8c3c: 0xa22821
    ctx->pc = 0x2c8c3cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c8c40: 0x90820002
    ctx->pc = 0x2c8c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2c8c44: 0xa22821
    ctx->pc = 0x2c8c44u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c8c48: 0x90820003
    ctx->pc = 0x2c8c48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_2c8c4c:
    // 0x2c8c4c: 0xa22821
    ctx->pc = 0x2c8c4cu;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2c8c50: 0x24c6fffc
    ctx->pc = 0x2c8c50u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2c8c54: 0x14c0fff0
    ctx->pc = 0x2C8C54u;
    {
        const bool branch_taken_0x2c8c54 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 0));
        ctx->pc = 0x2C8C58u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4));
        if (branch_taken_0x2c8c54) {
            ctx->pc = 0x2C8C18u;
            goto label_2c8c18;
        }
    }
    ctx->pc = 0x2C8C5Cu;
    // 0x2c8c5c: 0x1091018
    ctx->pc = 0x2c8c5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2c8c60: 0x4a1821
    ctx->pc = 0x2c8c60u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2c8c64: 0xac1026
    ctx->pc = 0x2c8c64u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x2c8c68: 0xac620000
    ctx->pc = 0x2c8c68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2c8c6c:
    // 0x2c8c6c: 0x100102d
    ctx->pc = 0x2c8c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c8c70: 0x1c40ffd7
    ctx->pc = 0x2C8C70u;
    {
        const bool branch_taken_0x2c8c70 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x2C8C74u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 4294967295));
        if (branch_taken_0x2c8c70) {
            ctx->pc = 0x2C8BD0u;
            goto label_2c8bd0;
        }
    }
    ctx->pc = 0x2C8C78u;
    // 0x2c8c78: 0x3c03003a
    ctx->pc = 0x2c8c78u;
    SET_GPR_U32(ctx, 3, ((uint32_t)58 << 16));
    // 0x2c8c7c: 0x24020001
    ctx->pc = 0x2c8c7cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c8c80: 0xac62b630
    ctx->pc = 0x2c8c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294948400), GPR_U32(ctx, 2));
label_2c8c84:
    // 0x2c8c84: 0x3e00008
    ctx->pc = 0x2C8C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C8BD0u: goto label_2c8bd0;
            case 0x2C8BF0u: goto label_2c8bf0;
            case 0x2C8C18u: goto label_2c8c18;
            case 0x2C8C4Cu: goto label_2c8c4c;
            case 0x2C8C6Cu: goto label_2c8c6c;
            case 0x2C8C84u: goto label_2c8c84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C8C8Cu;
}
