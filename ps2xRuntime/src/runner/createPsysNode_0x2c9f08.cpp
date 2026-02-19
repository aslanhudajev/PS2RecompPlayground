#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: createPsysNode
// Address: 0x2c9f08 - 0x2c9ff8
void createPsysNode_0x2c9f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2c9f08u;

    // 0x2c9f08: 0x27bdffb0
    ctx->pc = 0x2c9f08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2c9f0c: 0xffbf0040
    ctx->pc = 0x2c9f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c9f10: 0xffb30030
    ctx->pc = 0x2c9f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2c9f14: 0xffb20020
    ctx->pc = 0x2c9f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2c9f18: 0xffb10010
    ctx->pc = 0x2c9f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2c9f1c: 0xffb00000
    ctx->pc = 0x2c9f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c9f20: 0x80402d
    ctx->pc = 0x2c9f20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f24: 0xa0202d
    ctx->pc = 0x2c9f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f28: 0xc0902d
    ctx->pc = 0x2c9f28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f2c: 0x3c02003a
    ctx->pc = 0x2c9f2cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2c9f30: 0x2453aa38
    ctx->pc = 0x2c9f30u;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 2), 4294945336));
    // 0x2c9f34: 0x8e630058
    ctx->pc = 0x2c9f34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c9f38: 0x2402ffff
    ctx->pc = 0x2c9f38u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9f3c: 0x10620010
    ctx->pc = 0x2C9F3Cu;
    {
        const bool branch_taken_0x2c9f3c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2C9F40u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f3c) {
            ctx->pc = 0x2C9F80u;
            goto label_2c9f80;
        }
    }
    ctx->pc = 0x2C9F44u;
    // 0x2c9f44: 0x100282d
    ctx->pc = 0x2c9f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f48: 0xc0b3ec0
    ctx->pc = 0x2C9F48u;
    SET_GPR_U32(ctx, 31, 0x2C9F50u);
    ctx->pc = 0x2C9F4Cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 14));
    ctx->pc = 0x2CFB00u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBNewNode_0x2cfb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F50u; }
    }
    if (ctx->pc != 0x2C9F50u) { return; }
    ctx->pc = 0x2C9F50u;
    // 0x2c9f50: 0x40802d
    ctx->pc = 0x2c9f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f54: 0x12000021
    ctx->pc = 0x2C9F54u;
    {
        const bool branch_taken_0x2c9f54 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9F58u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f54) {
            ctx->pc = 0x2C9FDCu;
            goto label_2c9fdc;
        }
    }
    ctx->pc = 0x2C9F5Cu;
    // 0x2c9f5c: 0xc0b2734
    ctx->pc = 0x2C9F5Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F64u);
    ctx->pc = 0x2C9F60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2C9CD0u;
    {
        const uint32_t __entryPc = ctx->pc;
        allocPsys_0x2c9cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F64u; }
    }
    if (ctx->pc != 0x2C9F64u) { return; }
    ctx->pc = 0x2C9F64u;
    // 0x2c9f64: 0x40182d
    ctx->pc = 0x2c9f64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f68: 0x54600007
    ctx->pc = 0x2C9F68u;
    {
        const bool branch_taken_0x2c9f68 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x2c9f68) {
            ctx->pc = 0x2C9F6Cu;
            WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
            ctx->pc = 0x2C9F88u;
            goto label_2c9f88;
        }
    }
    ctx->pc = 0x2C9F70u;
    // 0x2c9f70: 0xae000070
    ctx->pc = 0x2c9f70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
    // 0x2c9f74: 0x200202d
    ctx->pc = 0x2c9f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f78: 0xc0b3f1a
    ctx->pc = 0x2C9F78u;
    SET_GPR_U32(ctx, 31, 0x2C9F80u);
    ctx->pc = 0x2C9F7Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F80u; }
    }
    if (ctx->pc != 0x2C9F80u) { return; }
    ctx->pc = 0x2C9F80u;
label_2c9f80:
    // 0x2c9f80: 0x10000016
    ctx->pc = 0x2C9F80u;
    {
        const bool branch_taken_0x2c9f80 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9F84u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x2c9f80) {
            ctx->pc = 0x2C9FDCu;
            goto label_2c9fdc;
        }
    }
    ctx->pc = 0x2C9F88u;
label_2c9f88:
    // 0x2c9f88: 0x1220000d
    ctx->pc = 0x2C9F88u;
    {
        const bool branch_taken_0x2c9f88 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9F8Cu;
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 16));
        if (branch_taken_0x2c9f88) {
            ctx->pc = 0x2C9FC0u;
            goto label_2c9fc0;
        }
    }
    ctx->pc = 0x2C9F90u;
    // 0x2c9f90: 0x2402ffff
    ctx->pc = 0x2c9f90u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9f94: 0x56220004
    ctx->pc = 0x2C9F94u;
    {
        const bool branch_taken_0x2c9f94 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        if (branch_taken_0x2c9f94) {
            ctx->pc = 0x2C9F98u;
            SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967294));
            ctx->pc = 0x2C9FA8u;
            goto label_2c9fa8;
        }
    }
    ctx->pc = 0x2C9F9Cu;
    // 0x2c9f9c: 0x9462002c
    ctx->pc = 0x2c9f9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x2c9fa0: 0x10000006
    ctx->pc = 0x2C9FA0u;
    {
        const bool branch_taken_0x2c9fa0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9FA4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 128));
        if (branch_taken_0x2c9fa0) {
            ctx->pc = 0x2C9FBCu;
            goto label_2c9fbc;
        }
    }
    ctx->pc = 0x2C9FA8u;
label_2c9fa8:
    // 0x2c9fa8: 0x16220003
    ctx->pc = 0x2C9FA8u;
    {
        const bool branch_taken_0x2c9fa8 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 2));
        ctx->pc = 0x2C9FACu;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 44)));
        if (branch_taken_0x2c9fa8) {
            ctx->pc = 0x2C9FB8u;
            goto label_2c9fb8;
        }
    }
    ctx->pc = 0x2C9FB0u;
    // 0x2c9fb0: 0x10000002
    ctx->pc = 0x2C9FB0u;
    {
        const bool branch_taken_0x2c9fb0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2C9FB4u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 64));
        if (branch_taken_0x2c9fb0) {
            ctx->pc = 0x2C9FBCu;
            goto label_2c9fbc;
        }
    }
    ctx->pc = 0x2C9FB8u;
label_2c9fb8:
    // 0x2c9fb8: 0x344200c0
    ctx->pc = 0x2c9fb8u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 192));
label_2c9fbc:
    // 0x2c9fbc: 0xa462002c
    ctx->pc = 0x2c9fbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 44), (uint16_t)GPR_U32(ctx, 2));
label_2c9fc0:
    // 0x2c9fc0: 0x8e620014
    ctx->pc = 0x2c9fc0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x2c9fc4: 0xac620090
    ctx->pc = 0x2c9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 144), GPR_U32(ctx, 2));
    // 0x2c9fc8: 0xa0600037
    ctx->pc = 0x2c9fc8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 55), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c9fcc: 0x3c014120
    ctx->pc = 0x2c9fccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)16672 << 16));
    // 0x2c9fd0: 0x44810000
    ctx->pc = 0x2c9fd0u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 1);
    // 0x2c9fd4: 0xe46000a4
    ctx->pc = 0x2c9fd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 164), bits); }
    // 0x2c9fd8: 0x200102d
    ctx->pc = 0x2c9fd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9fdc:
    // 0x2c9fdc: 0xdfbf0040
    ctx->pc = 0x2c9fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9fe0: 0xdfb30030
    ctx->pc = 0x2c9fe0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9fe4: 0xdfb20020
    ctx->pc = 0x2c9fe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9fe8: 0xdfb10010
    ctx->pc = 0x2c9fe8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9fec: 0xdfb00000
    ctx->pc = 0x2c9fecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9ff0: 0x3e00008
    ctx->pc = 0x2C9FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9FF4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2C9F80u: goto label_2c9f80;
            case 0x2C9F88u: goto label_2c9f88;
            case 0x2C9FA8u: goto label_2c9fa8;
            case 0x2C9FB8u: goto label_2c9fb8;
            case 0x2C9FBCu: goto label_2c9fbc;
            case 0x2C9FC0u: goto label_2c9fc0;
            case 0x2C9FDCu: goto label_2c9fdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2C9FF8u;
}
