#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SfxSetPhysics
// Address: 0x27de50 - 0x27df3c
void SfxSetPhysics_0x27de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x27de50u;

    // 0x27de50: 0x27bdffb0
    ctx->pc = 0x27de50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27de54: 0xffbf0030
    ctx->pc = 0x27de54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x27de58: 0xffb20020
    ctx->pc = 0x27de58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27de5c: 0xffb10010
    ctx->pc = 0x27de5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27de60: 0xffb00000
    ctx->pc = 0x27de60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27de64: 0xe7b50048
    ctx->pc = 0x27de64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x27de68: 0xe7b40040
    ctx->pc = 0x27de68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x27de6c: 0xa0882d
    ctx->pc = 0x27de6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de70: 0xc0902d
    ctx->pc = 0x27de70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de74: 0x46006506
    ctx->pc = 0x27de74u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x27de78: 0x4800028
    ctx->pc = 0x27DE78u;
    {
        const bool branch_taken_0x27de78 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x27DE7Cu;
        ctx->f[21] = FPU_MOV_S(ctx->f[13]);
        if (branch_taken_0x27de78) {
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DE80u;
    // 0x27de80: 0x240300f0
    ctx->pc = 0x27de80u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 240));
    // 0x27de84: 0x831818
    ctx->pc = 0x27de84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x27de88: 0x3c020034
    ctx->pc = 0x27de88u;
    SET_GPR_U32(ctx, 2, ((uint32_t)52 << 16));
    // 0x27de8c: 0x24420eb0
    ctx->pc = 0x27de8cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 3760));
    // 0x27de90: 0x12200010
    ctx->pc = 0x27DE90u;
    {
        const bool branch_taken_0x27de90 = (GPR_U32(ctx, 17) == GPR_U32(ctx, 0));
        ctx->pc = 0x27DE94u;
        SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        if (branch_taken_0x27de90) {
            ctx->pc = 0x27DED4u;
            goto label_27ded4;
        }
    }
    ctx->pc = 0x27DE98u;
    // 0x27de98: 0xc62c0000
    ctx->pc = 0x27de98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x27de9c: 0xc0ba04a
    ctx->pc = 0x27DE9Cu;
    SET_GPR_U32(ctx, 31, 0x27DEA4u);
    ctx->pc = 0x27DEA0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->pc = 0x2E8128u;
    {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x2e8128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DEA4u; }
    }
    if (ctx->pc != 0x27DEA4u) { return; }
    ctx->pc = 0x27DEA4u;
    // 0x27dea4: 0x46000306
    ctx->pc = 0x27dea4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x27dea8: 0xc6200000
    ctx->pc = 0x27dea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27deac: 0xe6000080
    ctx->pc = 0x27deacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x27deb0: 0xc6200004
    ctx->pc = 0x27deb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27deb4: 0xe6000084
    ctx->pc = 0x27deb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 132), bits); }
    // 0x27deb8: 0xc6200008
    ctx->pc = 0x27deb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27debc: 0xe6000088
    ctx->pc = 0x27debcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x27dec0: 0x8e040014
    ctx->pc = 0x27dec0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x27dec4: 0x10800003
    ctx->pc = 0x27DEC4u;
    {
        const bool branch_taken_0x27dec4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x27dec4) {
            ctx->pc = 0x27DED4u;
            goto label_27ded4;
        }
    }
    ctx->pc = 0x27DECCu;
    // 0x27decc: 0xc0b5632
    ctx->pc = 0x27DECCu;
    SET_GPR_U32(ctx, 31, 0x27DED4u);
    ctx->pc = 0x2D58C8u;
    {
        const uint32_t __entryPc = ctx->pc;
        YawMat3_0x2d58c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DED4u; }
    }
    if (ctx->pc != 0x27DED4u) { return; }
    ctx->pc = 0x27DED4u;
label_27ded4:
    // 0x27ded4: 0x12400007
    ctx->pc = 0x27DED4u;
    {
        const bool branch_taken_0x27ded4 = (GPR_U32(ctx, 18) == GPR_U32(ctx, 0));
        if (branch_taken_0x27ded4) {
            ctx->pc = 0x27DEF4u;
            goto label_27def4;
        }
    }
    ctx->pc = 0x27DEDCu;
    // 0x27dedc: 0xc6400000
    ctx->pc = 0x27dedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dee0: 0xe600008c
    ctx->pc = 0x27dee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 140), bits); }
    // 0x27dee4: 0xc6400004
    ctx->pc = 0x27dee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27dee8: 0xe6000090
    ctx->pc = 0x27dee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x27deec: 0xc6400008
    ctx->pc = 0x27deecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27def0: 0xe6000094
    ctx->pc = 0x27def0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_27def4:
    // 0x27def4: 0x44800000
    ctx->pc = 0x27def4u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x27def8: 0x46140036
    ctx->pc = 0x27def8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27defc: 0x0
    ctx->pc = 0x27defcu;
    // NOP
    // 0x27df00: 0x45030002
    ctx->pc = 0x27DF00u;
    {
        const bool branch_taken_0x27df00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27df00) {
            ctx->pc = 0x27DF04u;
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
            ctx->pc = 0x27DF0Cu;
            goto label_27df0c;
        }
    }
    ctx->pc = 0x27DF08u;
    // 0x27df08: 0x44800000
    ctx->pc = 0x27df08u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
label_27df0c:
    // 0x27df0c: 0x46150036
    ctx->pc = 0x27df0cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x27df10: 0x0
    ctx->pc = 0x27df10u;
    // NOP
    // 0x27df14: 0x45030001
    ctx->pc = 0x27DF14u;
    {
        const bool branch_taken_0x27df14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27df14) {
            ctx->pc = 0x27DF18u;
            { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
            ctx->pc = 0x27DF1Cu;
            goto label_27df1c;
        }
    }
    ctx->pc = 0x27DF1Cu;
label_27df1c:
    // 0x27df1c: 0xdfbf0030
    ctx->pc = 0x27df1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27df20: 0xdfb20020
    ctx->pc = 0x27df20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27df24: 0xdfb10010
    ctx->pc = 0x27df24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27df28: 0xdfb00000
    ctx->pc = 0x27df28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27df2c: 0xc7b50048
    ctx->pc = 0x27df2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x27df30: 0xc7b40040
    ctx->pc = 0x27df30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x27df34: 0x3e00008
    ctx->pc = 0x27DF34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DF38u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DED4u: goto label_27ded4;
            case 0x27DEF4u: goto label_27def4;
            case 0x27DF0Cu: goto label_27df0c;
            case 0x27DF1Cu: goto label_27df1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DF3Cu;
}
