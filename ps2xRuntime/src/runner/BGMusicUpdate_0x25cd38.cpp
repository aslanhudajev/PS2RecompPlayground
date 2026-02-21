#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: BGMusicUpdate
// Address: 0x25cd38 - 0x25ce74
void BGMusicUpdate_0x25cd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25cd38u;

    // 0x25cd38: 0x27bdfff0
    ctx->pc = 0x25cd38u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25cd3c: 0xffbf0000
    ctx->pc = 0x25cd3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25cd40: 0xc087fb2
    ctx->pc = 0x25CD40u;
    SET_GPR_U32(ctx, 31, 0x25CD48u);
    ctx->pc = 0x21FEC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioEnabled_0x21fec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD48u; }
    }
    if (ctx->pc != 0x25CD48u) { return; }
    ctx->pc = 0x25CD48u;
    // 0x25cd48: 0x10400047
    ctx->pc = 0x25CD48u;
    {
        const bool branch_taken_0x25cd48 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CD4Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25cd48) {
            ctx->pc = 0x25CE68u;
            goto label_25ce68;
        }
    }
    ctx->pc = 0x25CD50u;
    // 0x25cd50: 0x8c42d344
    ctx->pc = 0x25cd50u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955844)));
    // 0x25cd54: 0x4400045
    ctx->pc = 0x25CD54u;
    {
        const bool branch_taken_0x25cd54 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x25CD58u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x25cd54) {
            ctx->pc = 0x25CE6Cu;
            goto label_25ce6c;
        }
    }
    ctx->pc = 0x25CD5Cu;
    // 0x25cd5c: 0xc0971e6
    ctx->pc = 0x25CD5Cu;
    SET_GPR_U32(ctx, 31, 0x25CD64u);
    ctx->pc = 0x25C798u;
    {
        const uint32_t __entryPc = ctx->pc;
        BGPlayStream_0x25c798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CD64u; }
    }
    if (ctx->pc != 0x25CD64u) { return; }
    ctx->pc = 0x25CD64u;
    // 0x25cd64: 0x3c020034
    ctx->pc = 0x25cd64u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cd68: 0x8c43d324
    ctx->pc = 0x25cd68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955812)));
    // 0x25cd6c: 0x24020001
    ctx->pc = 0x25cd6cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x25cd70: 0x14620014
    ctx->pc = 0x25CD70u;
    {
        const bool branch_taken_0x25cd70 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25CD74u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x25cd70) {
            ctx->pc = 0x25CDC4u;
            goto label_25cdc4;
        }
    }
    ctx->pc = 0x25CD78u;
    // 0x25cd78: 0x3c020034
    ctx->pc = 0x25cd78u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cd7c: 0x3c030034
    ctx->pc = 0x25cd7cu;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25cd80: 0x8c44d320
    ctx->pc = 0x25cd80u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955808)));
    // 0x25cd84: 0x8c62d348
    ctx->pc = 0x25cd84u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294955848)));
    // 0x25cd88: 0x1082000d
    ctx->pc = 0x25CD88u;
    {
        const bool branch_taken_0x25cd88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 2));
        ctx->pc = 0x25CD8Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25cd88) {
            ctx->pc = 0x25CDC0u;
            goto label_25cdc0;
        }
    }
    ctx->pc = 0x25CD90u;
    // 0x25cd90: 0x8c42e7c8
    ctx->pc = 0x25cd90u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25cd94: 0x8c420064
    ctx->pc = 0x25cd94u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x25cd98: 0x84420028
    ctx->pc = 0x25cd98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x25cd9c: 0x28420002
    ctx->pc = 0x25cd9cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x25cda0: 0x14400008
    ctx->pc = 0x25CDA0u;
    {
        const bool branch_taken_0x25cda0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x25CDA4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x25cda0) {
            ctx->pc = 0x25CDC4u;
            goto label_25cdc4;
        }
    }
    ctx->pc = 0x25CDA8u;
    // 0x25cda8: 0x3c020034
    ctx->pc = 0x25cda8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cdac: 0x8c44d34c
    ctx->pc = 0x25cdacu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294955852)));
    // 0x25cdb0: 0x28830004
    ctx->pc = 0x25cdb0u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 4), 4));
    // 0x25cdb4: 0x2482fffd
    ctx->pc = 0x25cdb4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 4294967293));
    // 0x25cdb8: 0x10000013
    ctx->pc = 0x25CDB8u;
    {
        const bool branch_taken_0x25cdb8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CDBCu;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 4, GPR_U32(ctx, 2));
        if (branch_taken_0x25cdb8) {
            ctx->pc = 0x25CE08u;
            goto label_25ce08;
        }
    }
    ctx->pc = 0x25CDC0u;
label_25cdc0:
    // 0x25cdc0: 0x3c020031
    ctx->pc = 0x25cdc0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_25cdc4:
    // 0x25cdc4: 0x3c030034
    ctx->pc = 0x25cdc4u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x25cdc8: 0xc441ffa4
    ctx->pc = 0x25cdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cdcc: 0xc460d350
    ctx->pc = 0x25cdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294955856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cdd0: 0x46000834
    ctx->pc = 0x25cdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25cdd4: 0x0
    ctx->pc = 0x25cdd4u;
    // NOP
    // 0x25cdd8: 0x4500000a
    ctx->pc = 0x25CDD8u;
    {
        const bool branch_taken_0x25cdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x25CDDCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x25cdd8) {
            ctx->pc = 0x25CE04u;
            goto label_25ce04;
        }
    }
    ctx->pc = 0x25CDE0u;
    // 0x25cde0: 0xc440fd68
    ctx->pc = 0x25cde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25cde4: 0x46800020
    ctx->pc = 0x25cde4u;
    ctx->f[0] = FPU_CVT_S_W(*(int32_t*)&ctx->f[0]);
    // 0x25cde8: 0x3c020034
    ctx->pc = 0x25cde8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25cdec: 0xc441d354
    ctx->pc = 0x25cdecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294955860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25cdf0: 0x46010002
    ctx->pc = 0x25cdf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x25cdf4: 0x46000064
    ctx->pc = 0x25cdf4u;
    *(int32_t*)&ctx->f[1] = FPU_CVT_W_S(ctx->f[0]);
    // 0x25cdf8: 0x44040800
    ctx->pc = 0x25cdf8u;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[1]);
    // 0x25cdfc: 0x10000003
    ctx->pc = 0x25CDFCu;
    {
        const bool branch_taken_0x25cdfc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CE00u;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25cdfc) {
            ctx->pc = 0x25CE0Cu;
            goto label_25ce0c;
        }
    }
    ctx->pc = 0x25CE04u;
label_25ce04:
    // 0x25ce04: 0x8c44fd68
    ctx->pc = 0x25ce04u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294966632)));
label_25ce08:
    // 0x25ce08: 0x3c020034
    ctx->pc = 0x25ce08u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
label_25ce0c:
    // 0x25ce0c: 0x8c43d34c
    ctx->pc = 0x25ce0cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 4294955852)));
    // 0x25ce10: 0x10830015
    ctx->pc = 0x25CE10u;
    {
        const bool branch_taken_0x25ce10 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        ctx->pc = 0x25CE14u;
        SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        if (branch_taken_0x25ce10) {
            ctx->pc = 0x25CE68u;
            goto label_25ce68;
        }
    }
    ctx->pc = 0x25CE18u;
    // 0x25ce18: 0x28a20009
    ctx->pc = 0x25ce18u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 9));
    // 0x25ce1c: 0x50400001
    ctx->pc = 0x25CE1Cu;
    {
        const bool branch_taken_0x25ce1c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x25ce1c) {
            ctx->pc = 0x25CE20u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 8));
            ctx->pc = 0x25CE24u;
            goto label_25ce24;
        }
    }
    ctx->pc = 0x25CE24u;
label_25ce24:
    // 0x25ce24: 0x28a2fff8
    ctx->pc = 0x25ce24u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 4294967288));
    // 0x25ce28: 0x10400003
    ctx->pc = 0x25CE28u;
    {
        const bool branch_taken_0x25ce28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25CE2Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
        if (branch_taken_0x25ce28) {
            ctx->pc = 0x25CE38u;
            goto label_25ce38;
        }
    }
    ctx->pc = 0x25CE30u;
    // 0x25ce30: 0x8c42d34c
    ctx->pc = 0x25ce30u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294955852)));
    // 0x25ce34: 0x2444fff8
    ctx->pc = 0x25ce34u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294967288));
label_25ce38:
    // 0x25ce38: 0x3c020034
    ctx->pc = 0x25ce38u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ce3c: 0xac44d34c
    ctx->pc = 0x25ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294955852), GPR_U32(ctx, 4));
    // 0x25ce40: 0x44840800
    ctx->pc = 0x25ce40u;
    *(uint32_t*)&ctx->f[1] = GPR_U32(ctx, 4);
    // 0x25ce44: 0x46800860
    ctx->pc = 0x25ce44u;
    ctx->f[1] = FPU_CVT_S_W(*(int32_t*)&ctx->f[1]);
    // 0x25ce48: 0x3c020034
    ctx->pc = 0x25ce48u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x25ce4c: 0x8c42e7c8
    ctx->pc = 0x25ce4cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294961096)));
    // 0x25ce50: 0xc4400094
    ctx->pc = 0x25ce50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ce54: 0x46000842
    ctx->pc = 0x25ce54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x25ce58: 0x46000824
    ctx->pc = 0x25ce58u;
    *(int32_t*)&ctx->f[0] = FPU_CVT_W_S(ctx->f[1]);
    // 0x25ce5c: 0x44040000
    ctx->pc = 0x25ce5cu;
    SET_GPR_U32(ctx, 4, *(uint32_t*)&ctx->f[0]);
    // 0x25ce60: 0xc08845c
    ctx->pc = 0x25CE60u;
    SET_GPR_U32(ctx, 31, 0x25CE68u);
    ctx->pc = 0x221170u;
    {
        const uint32_t __entryPc = ctx->pc;
        AudioStreamSetVolume_0x221170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25CE68u; }
    }
    if (ctx->pc != 0x25CE68u) { return; }
    ctx->pc = 0x25CE68u;
label_25ce68:
    // 0x25ce68: 0xdfbf0000
    ctx->pc = 0x25ce68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25ce6c:
    // 0x25ce6c: 0x3e00008
    ctx->pc = 0x25CE6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25CE70u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25CDC0u: goto label_25cdc0;
            case 0x25CDC4u: goto label_25cdc4;
            case 0x25CE04u: goto label_25ce04;
            case 0x25CE08u: goto label_25ce08;
            case 0x25CE0Cu: goto label_25ce0c;
            case 0x25CE24u: goto label_25ce24;
            case 0x25CE38u: goto label_25ce38;
            case 0x25CE68u: goto label_25ce68;
            case 0x25CE6Cu: goto label_25ce6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25CE74u;
}
