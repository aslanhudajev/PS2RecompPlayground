#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterLookForCriticalMove
// Address: 0x295e58 - 0x29612c
void CritterLookForCriticalMove_0x295e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x295e58u;

    // 0x295e58: 0x27bdffe0
    ctx->pc = 0x295e58u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x295e5c: 0xffbf0010
    ctx->pc = 0x295e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x295e60: 0xffb00000
    ctx->pc = 0x295e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295e64: 0x80802d
    ctx->pc = 0x295e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e68: 0x8e040004
    ctx->pc = 0x295e68u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x295e6c: 0x86050124
    ctx->pc = 0x295e6cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x295e70: 0x24020090
    ctx->pc = 0x295e70u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x295e74: 0xa21018
    ctx->pc = 0x295e74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x295e78: 0x8c830124
    ctx->pc = 0x295e78u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x295e7c: 0x433021
    ctx->pc = 0x295e7cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x295e80: 0x8c820120
    ctx->pc = 0x295e80u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x295e84: 0x4a00004
    ctx->pc = 0x295E84u;
    {
        const bool branch_taken_0x295e84 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x295E88u;
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
        if (branch_taken_0x295e84) {
            ctx->pc = 0x295E98u;
            goto label_295e98;
        }
    }
    ctx->pc = 0x295E8Cu;
    // 0x295e8c: 0x8e020008
    ctx->pc = 0x295e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x295e90: 0x54400005
    ctx->pc = 0x295E90u;
    {
        const bool branch_taken_0x295e90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295e90) {
            ctx->pc = 0x295E94u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x295EA8u;
            goto label_295ea8;
        }
    }
    ctx->pc = 0x295E98u;
label_295e98:
    // 0x295e98: 0x200202d
    ctx->pc = 0x295e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295e9c: 0x282d
    ctx->pc = 0x295e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ea0: 0x10000041
    ctx->pc = 0x295EA0u;
    {
        const bool branch_taken_0x295ea0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295EA4u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x295ea0) {
            ctx->pc = 0x295FA8u;
            goto label_295fa8;
        }
    }
    ctx->pc = 0x295EA8u;
label_295ea8:
    // 0x295ea8: 0x24020002
    ctx->pc = 0x295ea8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x295eac: 0x54620005
    ctx->pc = 0x295EACu;
    {
        const bool branch_taken_0x295eac = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x295eac) {
            ctx->pc = 0x295EB0u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->pc = 0x295EC4u;
            goto label_295ec4;
        }
    }
    ctx->pc = 0x295EB4u;
    // 0x295eb4: 0x200202d
    ctx->pc = 0x295eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295eb8: 0x282d
    ctx->pc = 0x295eb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ebc: 0x1000003a
    ctx->pc = 0x295EBCu;
    {
        const bool branch_taken_0x295ebc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295EC0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x295ebc) {
            ctx->pc = 0x295FA8u;
            goto label_295fa8;
        }
    }
    ctx->pc = 0x295EC4u;
label_295ec4:
    // 0x295ec4: 0x54400004
    ctx->pc = 0x295EC4u;
    {
        const bool branch_taken_0x295ec4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x295ec4) {
            ctx->pc = 0x295EC8u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->pc = 0x295ED8u;
            goto label_295ed8;
        }
    }
    ctx->pc = 0x295ECCu;
    // 0x295ecc: 0x200202d
    ctx->pc = 0x295eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ed0: 0x10000034
    ctx->pc = 0x295ED0u;
    {
        const bool branch_taken_0x295ed0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295ED4u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
        if (branch_taken_0x295ed0) {
            ctx->pc = 0x295FA4u;
            goto label_295fa4;
        }
    }
    ctx->pc = 0x295ED8u;
label_295ed8:
    // 0x295ed8: 0x24020001
    ctx->pc = 0x295ed8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x295edc: 0x54620005
    ctx->pc = 0x295EDCu;
    {
        const bool branch_taken_0x295edc = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x295edc) {
            ctx->pc = 0x295EE0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 84)));
            ctx->pc = 0x295EF4u;
            goto label_295ef4;
        }
    }
    ctx->pc = 0x295EE4u;
    // 0x295ee4: 0x200202d
    ctx->pc = 0x295ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ee8: 0x24050011
    ctx->pc = 0x295ee8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 17));
    // 0x295eec: 0x1000002e
    ctx->pc = 0x295EECu;
    {
        const bool branch_taken_0x295eec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295EF0u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x295eec) {
            ctx->pc = 0x295FA8u;
            goto label_295fa8;
        }
    }
    ctx->pc = 0x295EF4u;
label_295ef4:
    // 0x295ef4: 0x4400003
    ctx->pc = 0x295EF4u;
    {
        const bool branch_taken_0x295ef4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x295EF8u;
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 84)));
        if (branch_taken_0x295ef4) {
            ctx->pc = 0x295F04u;
            goto label_295f04;
        }
    }
    ctx->pc = 0x295EFCu;
    // 0x295efc: 0x1000002d
    ctx->pc = 0x295EFCu;
    {
        const bool branch_taken_0x295efc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295F00u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x295efc) {
            ctx->pc = 0x295FB4u;
            goto label_295fb4;
        }
    }
    ctx->pc = 0x295F04u;
label_295f04:
    // 0x295f04: 0x3c020034
    ctx->pc = 0x295f04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x295f08: 0x8c42e880
    ctx->pc = 0x295f08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x295f0c: 0x2442ffff
    ctx->pc = 0x295f0cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295f10: 0x2c420002
    ctx->pc = 0x295f10u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 2));
    // 0x295f14: 0x10400004
    ctx->pc = 0x295F14u;
    {
        const bool branch_taken_0x295f14 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295F18u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
        if (branch_taken_0x295f14) {
            ctx->pc = 0x295F28u;
            goto label_295f28;
        }
    }
    ctx->pc = 0x295F1Cu;
    // 0x295f1c: 0x200202d
    ctx->pc = 0x295f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f20: 0x10000021
    ctx->pc = 0x295F20u;
    {
        const bool branch_taken_0x295f20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295F24u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x295f20) {
            ctx->pc = 0x295FA8u;
            goto label_295fa8;
        }
    }
    ctx->pc = 0x295F28u;
label_295f28:
    // 0x295f28: 0x3c020034
    ctx->pc = 0x295f28u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x295f2c: 0x8c43e880
    ctx->pc = 0x295f2cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x295f30: 0x24020003
    ctx->pc = 0x295f30u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x295f34: 0x14620009
    ctx->pc = 0x295F34u;
    {
        const bool branch_taken_0x295f34 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x295F38u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x295f34) {
            ctx->pc = 0x295F5Cu;
            goto label_295f5c;
        }
    }
    ctx->pc = 0x295F3Cu;
    // 0x295f3c: 0x8cc30000
    ctx->pc = 0x295f3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x295f40: 0x24020022
    ctx->pc = 0x295f40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 34));
    // 0x295f44: 0x10620004
    ctx->pc = 0x295F44u;
    {
        const bool branch_taken_0x295f44 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x295F48u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 34));
        if (branch_taken_0x295f44) {
            ctx->pc = 0x295F58u;
            goto label_295f58;
        }
    }
    ctx->pc = 0x295F4Cu;
    // 0x295f4c: 0x200202d
    ctx->pc = 0x295f4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f50: 0x10000015
    ctx->pc = 0x295F50u;
    {
        const bool branch_taken_0x295f50 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x295F54u;
        SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x295f50) {
            ctx->pc = 0x295FA8u;
            goto label_295fa8;
        }
    }
    ctx->pc = 0x295F58u;
label_295f58:
    // 0x295f58: 0x3c020034
    ctx->pc = 0x295f58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_295f5c:
    // 0x295f5c: 0x8c42e880
    ctx->pc = 0x295f5cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961280)));
    // 0x295f60: 0x2442fffd
    ctx->pc = 0x295f60u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x295f64: 0x2c420003
    ctx->pc = 0x295f64u;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), 3));
    // 0x295f68: 0x10400005
    ctx->pc = 0x295F68u;
    {
        const bool branch_taken_0x295f68 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295F6Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x295f68) {
            ctx->pc = 0x295F80u;
            goto label_295f80;
        }
    }
    ctx->pc = 0x295F70u;
    // 0x295f70: 0x8c43d934
    ctx->pc = 0x295f70u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957364)));
    // 0x295f74: 0x24020023
    ctx->pc = 0x295f74u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 35));
    // 0x295f78: 0x50620009
    ctx->pc = 0x295F78u;
    {
        const bool branch_taken_0x295f78 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        if (branch_taken_0x295f78) {
            ctx->pc = 0x295F7Cu;
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->pc = 0x295FA0u;
            goto label_295fa0;
        }
    }
    ctx->pc = 0x295F80u;
label_295f80:
    // 0x295f80: 0x8cc30000
    ctx->pc = 0x295f80u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x295f84: 0x24020010
    ctx->pc = 0x295f84u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 16));
    // 0x295f88: 0x5462000b
    ctx->pc = 0x295F88u;
    {
        const bool branch_taken_0x295f88 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x295f88) {
            ctx->pc = 0x295F8Cu;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x295FB8u;
            goto label_295fb8;
        }
    }
    ctx->pc = 0x295F90u;
    // 0x295f90: 0x24020004
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4));
    // 0x295f94: 0x54820008
    ctx->pc = 0x295F94u;
    {
        const bool branch_taken_0x295f94 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 2));
        if (branch_taken_0x295f94) {
            ctx->pc = 0x295F98u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x295FB8u;
            goto label_295fb8;
        }
    }
    ctx->pc = 0x295F9Cu;
    // 0x295f9c: 0x200202d
    ctx->pc = 0x295f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_295fa0:
    // 0x295fa0: 0x24050020
    ctx->pc = 0x295fa0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 32));
label_295fa4:
    // 0x295fa4: 0x302d
    ctx->pc = 0x295fa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_295fa8:
    // 0x295fa8: 0xc0a552c
    ctx->pc = 0x295FA8u;
    SET_GPR_U32(ctx, 31, 0x295FB0u);
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FB0u; }
    }
    if (ctx->pc != 0x295FB0u) { return; }
    ctx->pc = 0x295FB0u;
    // 0x295fb0: 0xa6020126
    ctx->pc = 0x295fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_295fb4:
    // 0x295fb4: 0x86020126
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
label_295fb8:
    // 0x295fb8: 0x4430039
    ctx->pc = 0x295FB8u;
    {
        const bool branch_taken_0x295fb8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x295fb8) {
            ctx->pc = 0x295FBCu;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x2960A0u;
            goto label_2960a0;
        }
    }
    ctx->pc = 0x295FC0u;
    // 0x295fc0: 0x8e0304fc
    ctx->pc = 0x295fc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x295fc4: 0x30620120
    ctx->pc = 0x295fc4u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 288));
    // 0x295fc8: 0x1040000f
    ctx->pc = 0x295FC8u;
    {
        const bool branch_taken_0x295fc8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295FCCu;
        SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 3), 256));
        if (branch_taken_0x295fc8) {
            ctx->pc = 0x296008u;
            goto label_296008;
        }
    }
    ctx->pc = 0x295FD0u;
    // 0x295fd0: 0x10400005
    ctx->pc = 0x295FD0u;
    {
        const bool branch_taken_0x295fd0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x295FD4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x295fd0) {
            ctx->pc = 0x295FE8u;
            goto label_295fe8;
        }
    }
    ctx->pc = 0x295FD8u;
    // 0x295fd8: 0x24050042
    ctx->pc = 0x295fd8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 66));
    // 0x295fdc: 0xc0a552c
    ctx->pc = 0x295FDCu;
    SET_GPR_U32(ctx, 31, 0x295FE4u);
    ctx->pc = 0x295FE0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295FE4u; }
    }
    if (ctx->pc != 0x295FE4u) { return; }
    ctx->pc = 0x295FE4u;
    // 0x295fe4: 0xa6020126
    ctx->pc = 0x295fe4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_295fe8:
    // 0x295fe8: 0x86020126
    ctx->pc = 0x295fe8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x295fec: 0x443002c
    ctx->pc = 0x295FECu;
    {
        const bool branch_taken_0x295fec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x295fec) {
            ctx->pc = 0x295FF0u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x2960A0u;
            goto label_2960a0;
        }
    }
    ctx->pc = 0x295FF4u;
    // 0x295ff4: 0x200202d
    ctx->pc = 0x295ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295ff8: 0x24050041
    ctx->pc = 0x295ff8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 65));
    // 0x295ffc: 0xc0a552c
    ctx->pc = 0x295FFCu;
    SET_GPR_U32(ctx, 31, 0x296004u);
    ctx->pc = 0x296000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296004u; }
    }
    if (ctx->pc != 0x296004u) { return; }
    ctx->pc = 0x296004u;
    // 0x296004: 0xa6020126
    ctx->pc = 0x296004u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_296008:
    // 0x296008: 0x86020126
    ctx->pc = 0x296008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x29600c: 0x4430024
    ctx->pc = 0x29600Cu;
    {
        const bool branch_taken_0x29600c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x29600c) {
            ctx->pc = 0x296010u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x2960A0u;
            goto label_2960a0;
        }
    }
    ctx->pc = 0x296014u;
    // 0x296014: 0x3c030035
    ctx->pc = 0x296014u;
    SET_GPR_U32(ctx, 3, ((uint32_t)53 << 16));
    // 0x296018: 0x24631d90
    ctx->pc = 0x296018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 7568));
    // 0x29601c: 0x3c020036
    ctx->pc = 0x29601cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x296020: 0x8c42d750
    ctx->pc = 0x296020u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294956880)));
    // 0x296024: 0x21080
    ctx->pc = 0x296024u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x296028: 0x431021
    ctx->pc = 0x296028u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29602c: 0xc4400000
    ctx->pc = 0x29602cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296030: 0x3c014248
    ctx->pc = 0x296030u;
    SET_GPR_U32(ctx, 1, ((uint32_t)16968 << 16));
    // 0x296034: 0x44810800
    ctx->pc = 0x296034u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 1);
    // 0x296038: 0x46010002
    ctx->pc = 0x296038u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x29603c: 0x46000064
    ctx->pc = 0x29603cu;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x296040: 0x44020800
    ctx->pc = 0x296040u;
    SET_GPR_U32(ctx, 2, *(uint32_t*)&ctx->f[1]);
    // 0x296044: 0x44820800
    ctx->pc = 0x296044u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 2);
    // 0x296048: 0x46800860
    ctx->pc = 0x296048u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x29604c: 0xc60004f8
    ctx->pc = 0x29604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x296050: 0x46000836
    ctx->pc = 0x296050u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x296054: 0x0
    ctx->pc = 0x296054u;
    // NOP
    // 0x296058: 0x45000005
    ctx->pc = 0x296058u;
    {
        const bool branch_taken_0x296058 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29605Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296058) {
            ctx->pc = 0x296070u;
            goto label_296070;
        }
    }
    ctx->pc = 0x296060u;
    // 0x296060: 0x24050022
    ctx->pc = 0x296060u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 34));
    // 0x296064: 0xc0a552c
    ctx->pc = 0x296064u;
    SET_GPR_U32(ctx, 31, 0x29606Cu);
    ctx->pc = 0x296068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29606Cu; }
    }
    if (ctx->pc != 0x29606Cu) { return; }
    ctx->pc = 0x29606Cu;
    // 0x29606c: 0xa6020126
    ctx->pc = 0x29606cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_296070:
    // 0x296070: 0x86020126
    ctx->pc = 0x296070u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x296074: 0x443000a
    ctx->pc = 0x296074u;
    {
        const bool branch_taken_0x296074 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x296074) {
            ctx->pc = 0x296078u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x2960A0u;
            goto label_2960a0;
        }
    }
    ctx->pc = 0x29607Cu;
    // 0x29607c: 0x8e0204fc
    ctx->pc = 0x29607cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
    // 0x296080: 0x30420010
    ctx->pc = 0x296080u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 16));
    // 0x296084: 0x10400005
    ctx->pc = 0x296084u;
    {
        const bool branch_taken_0x296084 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x296088u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296084) {
            ctx->pc = 0x29609Cu;
            goto label_29609c;
        }
    }
    ctx->pc = 0x29608Cu;
    // 0x29608c: 0x24050040
    ctx->pc = 0x29608cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 64));
    // 0x296090: 0xc0a552c
    ctx->pc = 0x296090u;
    SET_GPR_U32(ctx, 31, 0x296098u);
    ctx->pc = 0x296094u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2954B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        CritterFindMoveType_0x2954b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296098u; }
    }
    if (ctx->pc != 0x296098u) { return; }
    ctx->pc = 0x296098u;
    // 0x296098: 0xa6020126
    ctx->pc = 0x296098u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
label_29609c:
    // 0x29609c: 0x86030126
    ctx->pc = 0x29609cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
label_2960a0:
    // 0x2960a0: 0x28620002
    ctx->pc = 0x2960a0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 3), 2));
    // 0x2960a4: 0x50400007
    ctx->pc = 0x2960A4u;
    {
        const bool branch_taken_0x2960a4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2960a4) {
            ctx->pc = 0x2960A8u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x2960C4u;
            goto label_2960c4;
        }
    }
    ctx->pc = 0x2960ACu;
    // 0x2960ac: 0x4600017
    ctx->pc = 0x2960ACu;
    {
        const bool branch_taken_0x2960ac = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2960B0u;
        SET_GPR_U32(ctx, 3, ((uint32_t)60 << 16));
        if (branch_taken_0x2960ac) {
            ctx->pc = 0x29610Cu;
            goto label_29610c;
        }
    }
    ctx->pc = 0x2960B4u;
    // 0x2960b4: 0x8c624164
    ctx->pc = 0x2960b4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 16740)));
    // 0x2960b8: 0x24420001
    ctx->pc = 0x2960b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x2960bc: 0xac624164
    ctx->pc = 0x2960bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16740), GPR_U32(ctx, 2));
    // 0x2960c0: 0x86020126
    ctx->pc = 0x2960c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
label_2960c4:
    // 0x2960c4: 0x4420012
    ctx->pc = 0x2960C4u;
    {
        const bool branch_taken_0x2960c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2960c4) {
            ctx->pc = 0x2960C8u;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
            ctx->pc = 0x296110u;
            goto label_296110;
        }
    }
    ctx->pc = 0x2960CCu;
    // 0x2960cc: 0x86020128
    ctx->pc = 0x2960ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 296)));
    // 0x2960d0: 0x440000e
    ctx->pc = 0x2960D0u;
    {
        const bool branch_taken_0x2960d0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2960D4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2960d0) {
            ctx->pc = 0x29610Cu;
            goto label_29610c;
        }
    }
    ctx->pc = 0x2960D8u;
    // 0x2960d8: 0xa6020128
    ctx->pc = 0x2960d8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 296), (uint16_t)GPR_U32(ctx, 2));
    // 0x2960dc: 0xa602012c
    ctx->pc = 0x2960dcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 300), (uint16_t)GPR_U32(ctx, 2));
    // 0x2960e0: 0x8e020b60
    ctx->pc = 0x2960e0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x2960e4: 0x10400009
    ctx->pc = 0x2960E4u;
    {
        const bool branch_taken_0x2960e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2960E8u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x2960e4) {
            ctx->pc = 0x29610Cu;
            goto label_29610c;
        }
    }
    ctx->pc = 0x2960ECu;
    // 0x2960ec: 0x0
    ctx->pc = 0x2960ecu;
    // NOP
label_2960f0:
    // 0x2960f0: 0xa4430128
    ctx->pc = 0x2960f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 296), (uint16_t)GPR_U32(ctx, 3));
    // 0x2960f4: 0xa443012c
    ctx->pc = 0x2960f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 300), (uint16_t)GPR_U32(ctx, 3));
    // 0x2960f8: 0x8c420b60
    ctx->pc = 0x2960f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2912)));
    // 0x2960fc: 0x0
    ctx->pc = 0x2960fcu;
    // NOP
    // 0x296100: 0x0
    ctx->pc = 0x296100u;
    // NOP
    // 0x296104: 0x1440fffa
    ctx->pc = 0x296104u;
    {
        const bool branch_taken_0x296104 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296104) {
            ctx->pc = 0x2960F0u;
            goto label_2960f0;
        }
    }
    ctx->pc = 0x29610Cu;
label_29610c:
    // 0x29610c: 0x8e0204fc
    ctx->pc = 0x29610cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 1276)));
label_296110:
    // 0x296110: 0x2403fecf
    ctx->pc = 0x296110u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294966991));
    // 0x296114: 0x431024
    ctx->pc = 0x296114u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x296118: 0xae0204fc
    ctx->pc = 0x296118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1276), GPR_U32(ctx, 2));
    // 0x29611c: 0xdfbf0010
    ctx->pc = 0x29611cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x296120: 0xdfb00000
    ctx->pc = 0x296120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296124: 0x3e00008
    ctx->pc = 0x296124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296128u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295E98u: goto label_295e98;
            case 0x295EA8u: goto label_295ea8;
            case 0x295EC4u: goto label_295ec4;
            case 0x295ED8u: goto label_295ed8;
            case 0x295EF4u: goto label_295ef4;
            case 0x295F04u: goto label_295f04;
            case 0x295F28u: goto label_295f28;
            case 0x295F58u: goto label_295f58;
            case 0x295F5Cu: goto label_295f5c;
            case 0x295F80u: goto label_295f80;
            case 0x295FA0u: goto label_295fa0;
            case 0x295FA4u: goto label_295fa4;
            case 0x295FA8u: goto label_295fa8;
            case 0x295FB4u: goto label_295fb4;
            case 0x295FB8u: goto label_295fb8;
            case 0x295FE8u: goto label_295fe8;
            case 0x296008u: goto label_296008;
            case 0x296070u: goto label_296070;
            case 0x29609Cu: goto label_29609c;
            case 0x2960A0u: goto label_2960a0;
            case 0x2960C4u: goto label_2960c4;
            case 0x2960F0u: goto label_2960f0;
            case 0x29610Cu: goto label_29610c;
            case 0x296110u: goto label_296110;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29612Cu;
}
