#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _dispRefImage
// Address: 0x2f3e08 - 0x2f3f20
void _dispRefImage_0x2f3e08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2f3e08u;

    // 0x2f3e08: 0x27bdffc0
    ctx->pc = 0x2f3e08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f3e0c: 0xffb00000
    ctx->pc = 0x2f3e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f3e10: 0x3c10003a
    ctx->pc = 0x2f3e10u;
    SET_GPR_U32(ctx, 16, ((uint32_t)58 << 16));
    // 0x2f3e14: 0xffb20020
    ctx->pc = 0x2f3e14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f3e18: 0x8e063024
    ctx->pc = 0x2f3e18u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12324)));
    // 0x2f3e1c: 0x80902d
    ctx->pc = 0x2f3e1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e20: 0xffbf0030
    ctx->pc = 0x2f3e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f3e24: 0xffb10010
    ctx->pc = 0x2f3e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f3e28: 0x24c70020
    ctx->pc = 0x2f3e28u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 6), 32));
    // 0x2f3e2c: 0x8cd10040
    ctx->pc = 0x2f3e2cu;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x2f3e30: 0x24c50010
    ctx->pc = 0x2f3e30u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 6), 16));
    // 0x2f3e34: 0xc0bcf1c
    ctx->pc = 0x2F3E34u;
    SET_GPR_U32(ctx, 31, 0x2F3E3Cu);
    ctx->pc = 0x2F3E38u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 24));
    ctx->pc = 0x2F3C70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _getPtsDtsFlags_0x2f3c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3E3Cu; }
    }
    if (ctx->pc != 0x2F3E3Cu) { return; }
    ctx->pc = 0x2F3E3Cu;
    // 0x2f3e3c: 0x8e063024
    ctx->pc = 0x2f3e3cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 12324)));
    // 0x2f3e40: 0x3c05003a
    ctx->pc = 0x2f3e40u;
    SET_GPR_U32(ctx, 5, ((uint32_t)58 << 16));
    // 0x2f3e44: 0x24a539b8
    ctx->pc = 0x2f3e44u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 14776));
    // 0x2f3e48: 0x240202d
    ctx->pc = 0x2f3e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f3e4c: 0xdcc20020
    ctx->pc = 0x2f3e4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2f3e50: 0x8cc30010
    ctx->pc = 0x2f3e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2f3e54: 0x216f8
    ctx->pc = 0x2f3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x2f3e58: 0x2103f
    ctx->pc = 0x2f3e58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2f3e5c: 0xae230080
    ctx->pc = 0x2f3e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
    // 0x2f3e60: 0x3042000f
    ctx->pc = 0x2f3e60u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 15));
    // 0x2f3e64: 0x21080
    ctx->pc = 0x2f3e64u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 2));
    // 0x2f3e68: 0x8e43005c
    ctx->pc = 0x2f3e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x2f3e6c: 0x451021
    ctx->pc = 0x2f3e6cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2f3e70: 0x9c450000
    ctx->pc = 0x2f3e70u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f3e74: 0xae2300cc
    ctx->pc = 0x2f3e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 204), GPR_U32(ctx, 3));
    // 0x2f3e78: 0xfe250088
    ctx->pc = 0x2f3e78u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 136), GPR_U64(ctx, 5));
    // 0x2f3e7c: 0x8e420060
    ctx->pc = 0x2f3e7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2f3e80: 0xae2200d0
    ctx->pc = 0x2f3e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 2));
    // 0x2f3e84: 0x8e430044
    ctx->pc = 0x2f3e84u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2f3e88: 0xae2300b4
    ctx->pc = 0x2f3e88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 3));
    // 0x2f3e8c: 0x8e420048
    ctx->pc = 0x2f3e8cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x2f3e90: 0xae2200b8
    ctx->pc = 0x2f3e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 2));
    // 0x2f3e94: 0x8e43004c
    ctx->pc = 0x2f3e94u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x2f3e98: 0xae2300bc
    ctx->pc = 0x2f3e98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 188), GPR_U32(ctx, 3));
    // 0x2f3e9c: 0x8e420050
    ctx->pc = 0x2f3e9cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2f3ea0: 0xae2200c0
    ctx->pc = 0x2f3ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
    // 0x2f3ea4: 0x8e430054
    ctx->pc = 0x2f3ea4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x2f3ea8: 0xae2300c4
    ctx->pc = 0x2f3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
    // 0x2f3eac: 0x8e420058
    ctx->pc = 0x2f3eacu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x2f3eb0: 0xc0bce6a
    ctx->pc = 0x2F3EB0u;
    SET_GPR_U32(ctx, 31, 0x2F3EB8u);
    ctx->pc = 0x2F3EB4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    ctx->pc = 0x2F39A8u;
    {
        const uint32_t __entryPc = ctx->pc;
        _isOutSizeOK_0x2f39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EB8u; }
    }
    if (ctx->pc != 0x2F3EB8u) { return; }
    ctx->pc = 0x2F3EB8u;
    // 0x2f3eb8: 0x10400013
    ctx->pc = 0x2F3EB8u;
    {
        const bool branch_taken_0x2f3eb8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3EBCu;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x2f3eb8) {
            ctx->pc = 0x2F3F08u;
            goto label_2f3f08;
        }
    }
    ctx->pc = 0x2F3EC0u;
    // 0x2f3ec0: 0x8e430028
    ctx->pc = 0x2f3ec0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2f3ec4: 0x14620011
    ctx->pc = 0x2F3EC4u;
    {
        const bool branch_taken_0x2f3ec4 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x2F3EC8u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2f3ec4) {
            ctx->pc = 0x2F3F0Cu;
            goto label_2f3f0c;
        }
    }
    ctx->pc = 0x2F3ECCu;
    // 0x2f3ecc: 0x8e2200b0
    ctx->pc = 0x2f3eccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2f3ed0: 0x10400005
    ctx->pc = 0x2F3ED0u;
    {
        const bool branch_taken_0x2f3ed0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x2f3ed0) {
            ctx->pc = 0x2F3EE8u;
            goto label_2f3ee8;
        }
    }
    ctx->pc = 0x2F3ED8u;
    // 0x2f3ed8: 0xc0bd10c
    ctx->pc = 0x2F3ED8u;
    SET_GPR_U32(ctx, 31, 0x2F3EE0u);
    ctx->pc = 0x2F3EDCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F4430u;
    {
        const uint32_t __entryPc = ctx->pc;
        _csc_storeRefImage_0x2f4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EE0u; }
    }
    if (ctx->pc != 0x2F3EE0u) { return; }
    ctx->pc = 0x2F3EE0u;
    // 0x2f3ee0: 0x10000004
    ctx->pc = 0x2F3EE0u;
    {
        const bool branch_taken_0x2f3ee0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2F3EE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        if (branch_taken_0x2f3ee0) {
            ctx->pc = 0x2F3EF4u;
            goto label_2f3ef4;
        }
    }
    ctx->pc = 0x2F3EE8u;
label_2f3ee8:
    // 0x2f3ee8: 0xc0bce92
    ctx->pc = 0x2F3EE8u;
    SET_GPR_U32(ctx, 31, 0x2F3EF0u);
    ctx->pc = 0x2F3EECu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2F3A48u;
    {
        const uint32_t __entryPc = ctx->pc;
        _cpr8_0x2f3a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2F3EF0u; }
    }
    if (ctx->pc != 0x2F3EF0u) { return; }
    ctx->pc = 0x2F3EF0u;
    // 0x2f3ef0: 0xdfbf0030
    ctx->pc = 0x2f3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3ef4:
    // 0x2f3ef4: 0xdfb20020
    ctx->pc = 0x2f3ef4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3ef8: 0xdfb10010
    ctx->pc = 0x2f3ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3efc: 0xdfb00000
    ctx->pc = 0x2f3efcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3f00: 0x80bcf0e
    ctx->pc = 0x2F3F00u;
    ctx->pc = 0x2F3F04u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
    ctx->pc = 0x2F3C38u;
    _markOutput_0x2f3c38(rdram, ctx, runtime); return;
    ctx->pc = 0x2F3F08u;
label_2f3f08:
    // 0x2f3f08: 0xdfbf0030
    ctx->pc = 0x2f3f08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3f0c:
    // 0x2f3f0c: 0xdfb20020
    ctx->pc = 0x2f3f0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f3f10: 0xdfb10010
    ctx->pc = 0x2f3f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f3f14: 0xdfb00000
    ctx->pc = 0x2f3f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f3f18: 0x3e00008
    ctx->pc = 0x2F3F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F3F1Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2F3EE8u: goto label_2f3ee8;
            case 0x2F3EF4u: goto label_2f3ef4;
            case 0x2F3F08u: goto label_2f3f08;
            case 0x2F3F0Cu: goto label_2f3f0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2F3F20u;
}
