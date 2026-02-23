#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: nlPushPerspective
// Address: 0x1ac9b0 - 0x1acb60
void nlPushPerspective_0x1ac9b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("nlPushPerspective");


    ctx->pc = 0x1ac9b0u;

    // 0x1ac9b0: 0x27bdffe0
    ctx->pc = 0x1ac9b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ac9b4: 0x7fbf0010
    ctx->pc = 0x1ac9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1ac9b8: 0x7fb00000
    ctx->pc = 0x1ac9b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ac9bc: 0x3c010030
    ctx->pc = 0x1ac9bcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac9c0: 0xc4253c40
    ctx->pc = 0x1ac9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1ac9c4: 0x3c020030
    ctx->pc = 0x1ac9c4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac9c8: 0x24463c60
    ctx->pc = 0x1ac9c8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15456));
    // 0x1ac9cc: 0x3c020030
    ctx->pc = 0x1ac9ccu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1ac9d0: 0x839089ac
    ctx->pc = 0x1ac9d0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937004)));
    // 0x1ac9d4: 0x24455670
    ctx->pc = 0x1ac9d4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22128));
    // 0x1ac9d8: 0x3c010030
    ctx->pc = 0x1ac9d8u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac9dc: 0xc4243c44
    ctx->pc = 0x1ac9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1ac9e0: 0x24040008
    ctx->pc = 0x1ac9e0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    // 0x1ac9e4: 0x3c010030
    ctx->pc = 0x1ac9e4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac9e8: 0xc4233c48
    ctx->pc = 0x1ac9e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1ac9ec: 0x3c010030
    ctx->pc = 0x1ac9ecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac9f0: 0xc4223c4c
    ctx->pc = 0x1ac9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1ac9f4: 0x3c010030
    ctx->pc = 0x1ac9f4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1ac9f8: 0xc4213c58
    ctx->pc = 0x1ac9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ac9fc: 0x3c010030
    ctx->pc = 0x1ac9fcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca00: 0xc4203c5c
    ctx->pc = 0x1aca00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aca04: 0x3c010030
    ctx->pc = 0x1aca04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca08: 0xe4255650
    ctx->pc = 0x1aca08u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22096), bits); }
    // 0x1aca0c: 0x3c010030
    ctx->pc = 0x1aca0cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca10: 0xe4245654
    ctx->pc = 0x1aca10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22100), bits); }
    // 0x1aca14: 0x3c010030
    ctx->pc = 0x1aca14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca18: 0xe4235658
    ctx->pc = 0x1aca18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22104), bits); }
    // 0x1aca1c: 0x3c010030
    ctx->pc = 0x1aca1cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca20: 0xe422565c
    ctx->pc = 0x1aca20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22108), bits); }
    // 0x1aca24: 0x3c010030
    ctx->pc = 0x1aca24u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca28: 0xe4215668
    ctx->pc = 0x1aca28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22120), bits); }
    // 0x1aca2c: 0x3c010030
    ctx->pc = 0x1aca2cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca30: 0xe420566c
    ctx->pc = 0x1aca30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22124), bits); }
label_1aca34:
    // 0x1aca34: 0x8cc30000
    ctx->pc = 0x1aca34u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aca38: 0x8cc20004
    ctx->pc = 0x1aca38u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1aca3c: 0x2484ffff
    ctx->pc = 0x1aca3cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aca40: 0xaca30000
    ctx->pc = 0x1aca40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1aca44: 0xaca20004
    ctx->pc = 0x1aca44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1aca48: 0x24c60008
    ctx->pc = 0x1aca48u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1aca4c: 0x1c80fff9
    ctx->pc = 0x1ACA4Cu;
    {
        const bool branch_taken_0x1aca4c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ACA50u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1aca4c) {
            ctx->pc = 0x1ACA34u;
            goto label_1aca34;
        }
    }
    ctx->pc = 0x1ACA54u;
    // 0x1aca54: 0x3c020030
    ctx->pc = 0x1aca54u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1aca58: 0x24463ca0
    ctx->pc = 0x1aca58u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 2), 15520));
    // 0x1aca5c: 0x3c020030
    ctx->pc = 0x1aca5cu;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1aca60: 0x244556b0
    ctx->pc = 0x1aca60u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 22192));
    // 0x1aca64: 0x24040008
    ctx->pc = 0x1aca64u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
label_1aca68:
    // 0x1aca68: 0x8cc30000
    ctx->pc = 0x1aca68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1aca6c: 0x8cc20004
    ctx->pc = 0x1aca6cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1aca70: 0x2484ffff
    ctx->pc = 0x1aca70u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1aca74: 0xaca30000
    ctx->pc = 0x1aca74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1aca78: 0xaca20004
    ctx->pc = 0x1aca78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1aca7c: 0x24c60008
    ctx->pc = 0x1aca7cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 8));
    // 0x1aca80: 0x1c80fff9
    ctx->pc = 0x1ACA80u;
    {
        const bool branch_taken_0x1aca80 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1ACA84u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 8));
        if (branch_taken_0x1aca80) {
            ctx->pc = 0x1ACA68u;
            goto label_1aca68;
        }
    }
    ctx->pc = 0x1ACA88u;
    // 0x1aca88: 0x3c010030
    ctx->pc = 0x1aca88u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca8c: 0xc4253d00
    ctx->pc = 0x1aca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1aca90: 0x24040003
    ctx->pc = 0x1aca90u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 3));
    // 0x1aca94: 0x3c010030
    ctx->pc = 0x1aca94u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1aca98: 0xc4243d04
    ctx->pc = 0x1aca98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aca9c: 0x3c010030
    ctx->pc = 0x1aca9cu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acaa0: 0xc4233d08
    ctx->pc = 0x1acaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1acaa4: 0x3c010030
    ctx->pc = 0x1acaa4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acaa8: 0xc4223d0c
    ctx->pc = 0x1acaa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1acaac: 0x3c010030
    ctx->pc = 0x1acaacu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acab0: 0xc4213d10
    ctx->pc = 0x1acab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acab4: 0x3c010030
    ctx->pc = 0x1acab4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acab8: 0xc4203d14
    ctx->pc = 0x1acab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acabc: 0x3c010030
    ctx->pc = 0x1acabcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acac0: 0xe4255710
    ctx->pc = 0x1acac0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22288), bits); }
    // 0x1acac4: 0x3c010030
    ctx->pc = 0x1acac4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acac8: 0xe4245714
    ctx->pc = 0x1acac8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22292), bits); }
    // 0x1acacc: 0x3c010030
    ctx->pc = 0x1acaccu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acad0: 0xe4235718
    ctx->pc = 0x1acad0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22296), bits); }
    // 0x1acad4: 0x3c010030
    ctx->pc = 0x1acad4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acad8: 0xe422571c
    ctx->pc = 0x1acad8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22300), bits); }
    // 0x1acadc: 0x3c010030
    ctx->pc = 0x1acadcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acae0: 0xe4215720
    ctx->pc = 0x1acae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22304), bits); }
    // 0x1acae4: 0x3c010030
    ctx->pc = 0x1acae4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acae8: 0xe4205724
    ctx->pc = 0x1acae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22308), bits); }
    // 0x1acaec: 0x3c010030
    ctx->pc = 0x1acaecu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acaf0: 0xc4213d18
    ctx->pc = 0x1acaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1acaf4: 0x3c010030
    ctx->pc = 0x1acaf4u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acaf8: 0xc4203d1c
    ctx->pc = 0x1acaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 15644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1acafc: 0x3c010030
    ctx->pc = 0x1acafcu;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acb00: 0xe4215728
    ctx->pc = 0x1acb00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22312), bits); }
    // 0x1acb04: 0x3c010030
    ctx->pc = 0x1acb04u;
    SET_GPR_U32(ctx, 1, ((uint32_t)48 << 16));
    // 0x1acb08: 0xc069338
    ctx->pc = 0x1ACB08u;
    SET_GPR_U32(ctx, 31, 0x1ACB10u);
    ctx->pc = 0x1ACB0Cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 22316), bits); }
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB10u; }
        else if (ctx->pc != 0x1ACB10u) { ctx->pc = 0x1ACB10u; }
    }
    if (ctx->pc != 0x1ACB10u) { return; }
    ctx->pc = 0x1ACB10u;
    // 0x1acb10: 0x3c020030
    ctx->pc = 0x1acb10u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acb14: 0xc06bf55
    ctx->pc = 0x1ACB14u;
    SET_GPR_U32(ctx, 31, 0x1ACB1Cu);
    ctx->pc = 0x1ACB18u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22320));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB1Cu; }
        else if (ctx->pc != 0x1ACB1Cu) { ctx->pc = 0x1ACB1Cu; }
    }
    if (ctx->pc != 0x1ACB1Cu) { return; }
    ctx->pc = 0x1ACB1Cu;
    // 0x1acb1c: 0xc0693a0
    ctx->pc = 0x1ACB1Cu;
    SET_GPR_U32(ctx, 31, 0x1ACB24u);
    ctx->pc = 0x1ACB20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4E80u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPushMatrix_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB24u; }
        else if (ctx->pc != 0x1ACB24u) { ctx->pc = 0x1ACB24u; }
    }
    if (ctx->pc != 0x1ACB24u) { return; }
    ctx->pc = 0x1ACB24u;
    // 0x1acb24: 0x4bfcc33c
    ctx->pc = 0x1acb24u;
    ctx->vu0_vf[28] = ctx->vu0_vf[24];
    // 0x1acb28: 0x4bfdcb3c
    ctx->pc = 0x1acb28u;
    ctx->vu0_vf[29] = ctx->vu0_vf[25];
    // 0x1acb2c: 0x4bfed33c
    ctx->pc = 0x1acb2cu;
    ctx->vu0_vf[30] = ctx->vu0_vf[26];
    // 0x1acb30: 0x4bffdb3c
    ctx->pc = 0x1acb30u;
    ctx->vu0_vf[31] = ctx->vu0_vf[27];
    // 0x1acb34: 0x3c020030
    ctx->pc = 0x1acb34u;
    SET_GPR_U32(ctx, 2, ((uint32_t)48 << 16));
    // 0x1acb38: 0xc06bf55
    ctx->pc = 0x1ACB38u;
    SET_GPR_U32(ctx, 31, 0x1ACB40u);
    ctx->pc = 0x1ACB3Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 22384));
    ctx->pc = 0x1AFD54u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001AFD54_0x1afd54(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB40u; }
        else if (ctx->pc != 0x1ACB40u) { ctx->pc = 0x1ACB40u; }
    }
    if (ctx->pc != 0x1ACB40u) { return; }
    ctx->pc = 0x1ACB40u;
    // 0x1acb40: 0xc069394
    ctx->pc = 0x1ACB40u;
    SET_GPR_U32(ctx, 31, 0x1ACB48u);
    ctx->pc = 0x1ACB44u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x1A4E50u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlPopMatrix_0x1a4e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB48u; }
        else if (ctx->pc != 0x1ACB48u) { ctx->pc = 0x1ACB48u; }
    }
    if (ctx->pc != 0x1ACB48u) { return; }
    ctx->pc = 0x1ACB48u;
    // 0x1acb48: 0xc069338
    ctx->pc = 0x1ACB48u;
    SET_GPR_U32(ctx, 31, 0x1ACB50u);
    ctx->pc = 0x1ACB4Cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1A4CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlMatrixMode_0x1a4ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACB50u; }
        else if (ctx->pc != 0x1ACB50u) { ctx->pc = 0x1ACB50u; }
    }
    if (ctx->pc != 0x1ACB50u) { return; }
    ctx->pc = 0x1ACB50u;
    // 0x1acb50: 0x7bbf0010
    ctx->pc = 0x1acb50u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1acb54: 0x7bb00000
    ctx->pc = 0x1acb54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1acb58: 0x3e00008
    ctx->pc = 0x1ACB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACB5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1ACA34u: goto label_1aca34;
            case 0x1ACA68u: goto label_1aca68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1ACB60u;
}
