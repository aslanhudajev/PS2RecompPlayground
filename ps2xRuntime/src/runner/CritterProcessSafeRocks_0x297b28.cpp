#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterProcessSafeRocks
// Address: 0x297b28 - 0x297c80
void CritterProcessSafeRocks_0x297b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x297b28u;

    // 0x297b28: 0x27bdff90
    ctx->pc = 0x297b28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x297b2c: 0xffbf0050
    ctx->pc = 0x297b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x297b30: 0xffb40040
    ctx->pc = 0x297b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x297b34: 0xffb30030
    ctx->pc = 0x297b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x297b38: 0xffb20020
    ctx->pc = 0x297b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x297b3c: 0xffb10010
    ctx->pc = 0x297b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x297b40: 0xffb00000
    ctx->pc = 0x297b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x297b44: 0xe7b40060
    ctx->pc = 0x297b44u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x297b48: 0x3c100036
    ctx->pc = 0x297b48u;
    SET_GPR_U32(ctx, 16, ((uint32_t)54 << 16));
    // 0x297b4c: 0x8e02d7d8
    ctx->pc = 0x297b4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294957016)));
    // 0x297b50: 0x14400022
    ctx->pc = 0x297B50u;
    {
        const bool branch_taken_0x297b50 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x297B54u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x297b50) {
            ctx->pc = 0x297BDCu;
            goto label_297bdc;
        }
    }
    ctx->pc = 0x297B58u;
    // 0x297b58: 0x3c020036
    ctx->pc = 0x297b58u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x297b5c: 0x3c040036
    ctx->pc = 0x297b5cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)54 << 16));
    // 0x297b60: 0x2484d758
    ctx->pc = 0x297b60u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294956888));
    // 0x297b64: 0x24050010
    ctx->pc = 0x297b64u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 16));
    // 0x297b68: 0xc094cda
    ctx->pc = 0x297B68u;
    SET_GPR_U32(ctx, 31, 0x297B70u);
    ctx->pc = 0x297B6Cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 2), 4294957024)));
    ctx->pc = 0x253368u;
    {
        const uint32_t __entryPc = ctx->pc;
        SafeRockSetup_0x253368(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297B70u; }
    }
    if (ctx->pc != 0x297B70u) { return; }
    ctx->pc = 0x297B70u;
    // 0x297b70: 0xae02d7d8
    ctx->pc = 0x297b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294957016), GPR_U32(ctx, 2));
    // 0x297b74: 0x1840000d
    ctx->pc = 0x297B74u;
    {
        const bool branch_taken_0x297b74 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297B78u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x297b74) {
            ctx->pc = 0x297BACu;
            goto label_297bac;
        }
    }
    ctx->pc = 0x297B7Cu;
    // 0x297b7c: 0x3c020036
    ctx->pc = 0x297b7cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x297b80: 0x2444d798
    ctx->pc = 0x297b80u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294956952));
    // 0x297b84: 0x3c020036
    ctx->pc = 0x297b84u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x297b88: 0x8c43d7d8
    ctx->pc = 0x297b88u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
    // 0x297b8c: 0x0
    ctx->pc = 0x297b8cu;
    // NOP
label_297b90:
    // 0x297b90: 0x101080
    ctx->pc = 0x297b90u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
    // 0x297b94: 0x441021
    ctx->pc = 0x297b94u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x297b98: 0xac400000
    ctx->pc = 0x297b98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x297b9c: 0x26100001
    ctx->pc = 0x297b9cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x297ba0: 0x203102a
    ctx->pc = 0x297ba0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x297ba4: 0x1440fffa
    ctx->pc = 0x297BA4u;
    {
        const bool branch_taken_0x297ba4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x297ba4) {
            ctx->pc = 0x297B90u;
            goto label_297b90;
        }
    }
    ctx->pc = 0x297BACu;
label_297bac:
    // 0x297bac: 0x3c030036
    ctx->pc = 0x297bacu;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x297bb0: 0x8c62d7d8
    ctx->pc = 0x297bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294957016)));
    // 0x297bb4: 0x1c400004
    ctx->pc = 0x297BB4u;
    {
        const bool branch_taken_0x297bb4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x297BB8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
        if (branch_taken_0x297bb4) {
            ctx->pc = 0x297BC8u;
            goto label_297bc8;
        }
    }
    ctx->pc = 0x297BBCu;
    // 0x297bbc: 0x2402ffff
    ctx->pc = 0x297bbcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297bc0: 0x10000026
    ctx->pc = 0x297BC0u;
    {
        const bool branch_taken_0x297bc0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297BC4u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957016), GPR_U32(ctx, 2));
        if (branch_taken_0x297bc0) {
            ctx->pc = 0x297C5Cu;
            goto label_297c5c;
        }
    }
    ctx->pc = 0x297BC8u;
label_297bc8:
    // 0x297bc8: 0xc0b5c24
    ctx->pc = 0x297BC8u;
    SET_GPR_U32(ctx, 31, 0x297BD0u);
    ctx->pc = 0x297BCCu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
    ctx->pc = 0x2D7090u;
    {
        const uint32_t __entryPc = ctx->pc;
        RandInt_0x2d7090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297BD0u; }
    }
    if (ctx->pc != 0x297BD0u) { return; }
    ctx->pc = 0x297BD0u;
    // 0x297bd0: 0x3c030036
    ctx->pc = 0x297bd0u;
    SET_GPR_U32(ctx, 3, ((uint32_t)54 << 16));
    // 0x297bd4: 0x10000021
    ctx->pc = 0x297BD4u;
    {
        const bool branch_taken_0x297bd4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x297BD8u;
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957020), GPR_U32(ctx, 2));
        if (branch_taken_0x297bd4) {
            ctx->pc = 0x297C5Cu;
            goto label_297c5c;
        }
    }
    ctx->pc = 0x297BDCu;
label_297bdc:
    // 0x297bdc: 0x8c42d7d8
    ctx->pc = 0x297bdcu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294957016)));
    // 0x297be0: 0x1840001f
    ctx->pc = 0x297BE0u;
    {
        const bool branch_taken_0x297be0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297BE4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        if (branch_taken_0x297be0) {
            ctx->pc = 0x297C60u;
            goto label_297c60;
        }
    }
    ctx->pc = 0x297BE8u;
    // 0x297be8: 0x1840001d
    ctx->pc = 0x297BE8u;
    {
        const bool branch_taken_0x297be8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x297BECu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x297be8) {
            ctx->pc = 0x297C60u;
            goto label_297c60;
        }
    }
    ctx->pc = 0x297BF0u;
    // 0x297bf0: 0x3c020036
    ctx->pc = 0x297bf0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x297bf4: 0x2454d798
    ctx->pc = 0x297bf4u;
    SET_GPR_S32(ctx, 20, ADD32(GPR_U32(ctx, 2), 4294956952));
    // 0x297bf8: 0x4480a000
    ctx->pc = 0x297bf8u;
    *(uint32_t*)&ctx->f[20] = GPR_U32(ctx, 0);
    // 0x297bfc: 0x3c130031
    ctx->pc = 0x297bfcu;
    SET_GPR_U32(ctx, 19, ((uint32_t)49 << 16));
    // 0x297c00: 0x3c020036
    ctx->pc = 0x297c00u;
    SET_GPR_U32(ctx, 2, ((uint32_t)54 << 16));
    // 0x297c04: 0x2452d758
    ctx->pc = 0x297c04u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294956888));
    // 0x297c08: 0x3c110036
    ctx->pc = 0x297c08u;
    SET_GPR_U32(ctx, 17, ((uint32_t)54 << 16));
    // 0x297c0c: 0x101080
    ctx->pc = 0x297c0cu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
label_297c10:
    // 0x297c10: 0x541821
    ctx->pc = 0x297c10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x297c14: 0xc4610000
    ctx->pc = 0x297c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x297c18: 0x4601a034
    ctx->pc = 0x297c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297c1c: 0x0
    ctx->pc = 0x297c1cu;
    // NOP
    // 0x297c20: 0x45000009
    ctx->pc = 0x297C20u;
    {
        const bool branch_taken_0x297c20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x297C24u;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4294967208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        if (branch_taken_0x297c20) {
            ctx->pc = 0x297C48u;
            goto label_297c48;
        }
    }
    ctx->pc = 0x297C28u;
    // 0x297c28: 0x46000801
    ctx->pc = 0x297c28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x297c2c: 0x46140036
    ctx->pc = 0x297c2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x297c30: 0x0
    ctx->pc = 0x297c30u;
    // NOP
    // 0x297c34: 0x45000004
    ctx->pc = 0x297C34u;
    {
        const bool branch_taken_0x297c34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x297C38u;
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        if (branch_taken_0x297c34) {
            ctx->pc = 0x297C48u;
            goto label_297c48;
        }
    }
    ctx->pc = 0x297C3Cu;
    // 0x297c3c: 0x521021
    ctx->pc = 0x297c3cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x297c40: 0xc094d58
    ctx->pc = 0x297C40u;
    SET_GPR_U32(ctx, 31, 0x297C48u);
    ctx->pc = 0x297C44u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->pc = 0x253560u;
    {
        const uint32_t __entryPc = ctx->pc;
        SafeRockActivate_0x253560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x297C48u; }
    }
    if (ctx->pc != 0x297C48u) { return; }
    ctx->pc = 0x297C48u;
label_297c48:
    // 0x297c48: 0x26100001
    ctx->pc = 0x297c48u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x297c4c: 0x8e22d7d8
    ctx->pc = 0x297c4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 4294957016)));
    // 0x297c50: 0x202102a
    ctx->pc = 0x297c50u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x297c54: 0x1440ffee
    ctx->pc = 0x297C54u;
    {
        const bool branch_taken_0x297c54 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x297C58u;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 16), 2));
        if (branch_taken_0x297c54) {
            ctx->pc = 0x297C10u;
            goto label_297c10;
        }
    }
    ctx->pc = 0x297C5Cu;
label_297c5c:
    // 0x297c5c: 0xdfbf0050
    ctx->pc = 0x297c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_297c60:
    // 0x297c60: 0xdfb40040
    ctx->pc = 0x297c60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297c64: 0xdfb30030
    ctx->pc = 0x297c64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297c68: 0xdfb20020
    ctx->pc = 0x297c68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297c6c: 0xdfb10010
    ctx->pc = 0x297c6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297c70: 0xdfb00000
    ctx->pc = 0x297c70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x297c74: 0xc7b40060
    ctx->pc = 0x297c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x297c78: 0x3e00008
    ctx->pc = 0x297C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C7Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x297B90u: goto label_297b90;
            case 0x297BACu: goto label_297bac;
            case 0x297BC8u: goto label_297bc8;
            case 0x297BDCu: goto label_297bdc;
            case 0x297C10u: goto label_297c10;
            case 0x297C48u: goto label_297c48;
            case 0x297C5Cu: goto label_297c5c;
            case 0x297C60u: goto label_297c60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x297C80u;
}
