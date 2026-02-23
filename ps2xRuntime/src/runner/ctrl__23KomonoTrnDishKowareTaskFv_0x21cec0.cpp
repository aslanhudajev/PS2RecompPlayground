#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ctrl__23KomonoTrnDishKowareTaskFv
// Address: 0x21cec0 - 0x21d268
void ctrl__23KomonoTrnDishKowareTaskFv_0x21cec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ctrl__23KomonoTrnDishKowareTaskFv");


    ctx->pc = 0x21cec0u;

    // 0x21cec0: 0x27bdffc0
    ctx->pc = 0x21cec0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21cec4: 0x7fbf0030
    ctx->pc = 0x21cec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 31));
    // 0x21cec8: 0x7fb20020
    ctx->pc = 0x21cec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x21cecc: 0x7fb10010
    ctx->pc = 0x21ceccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21ced0: 0x7fb00000
    ctx->pc = 0x21ced0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21ced4: 0x8c910074
    ctx->pc = 0x21ced4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x21ced8: 0x70809628
    ctx->pc = 0x21ced8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x21cedc: 0x10000044
    ctx->pc = 0x21CEDCu;
    {
        const bool branch_taken_0x21cedc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21CEE0u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21cedc) {
            ctx->pc = 0x21CFF0u;
            goto label_21cff0;
        }
    }
    ctx->pc = 0x21CEE4u;
label_21cee4:
    // 0x21cee4: 0xc07ce18
    ctx->pc = 0x21CEE4u;
    SET_GPR_U32(ctx, 31, 0x21CEECu);
    ctx->pc = 0x21CEE8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CEECu; }
        else if (ctx->pc != 0x21CEECu) { ctx->pc = 0x21CEECu; }
    }
    if (ctx->pc != 0x21CEECu) { return; }
    ctx->pc = 0x21CEECu;
    // 0x21ceec: 0x5c40003f
    ctx->pc = 0x21CEECu;
    {
        const bool branch_taken_0x21ceec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21ceec) {
            ctx->pc = 0x21CEF0u;
            SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
            ctx->pc = 0x21CFECu;
            goto label_21cfec;
        }
    }
    ctx->pc = 0x21CEF4u;
    // 0x21cef4: 0xc6200004
    ctx->pc = 0x21cef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cef8: 0x44801800
    ctx->pc = 0x21cef8u;
    *(uint32_t*)&ctx->f[3] = GPR_U32(ctx, 0);
    // 0x21cefc: 0x0
    ctx->pc = 0x21cefcu;
    // NOP
    // 0x21cf00: 0x46030034
    ctx->pc = 0x21cf00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21cf04: 0x0
    ctx->pc = 0x21cf04u;
    // NOP
    // 0x21cf08: 0x45000017
    ctx->pc = 0x21CF08u;
    {
        const bool branch_taken_0x21cf08 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21cf08) {
            ctx->pc = 0x21CF68u;
            goto label_21cf68;
        }
    }
    ctx->pc = 0x21CF10u;
    // 0x21cf10: 0xc6210010
    ctx->pc = 0x21cf10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf14: 0x3c023f66
    ctx->pc = 0x21cf14u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16230 << 16));
    // 0x21cf18: 0x34426666
    ctx->pc = 0x21cf18u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 26214));
    // 0x21cf1c: 0x44820000
    ctx->pc = 0x21cf1cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21cf20: 0x3c023f19
    ctx->pc = 0x21cf20u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16153 << 16));
    // 0x21cf24: 0x46010002
    ctx->pc = 0x21cf24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21cf28: 0x3442999a
    ctx->pc = 0x21cf28u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 39322));
    // 0x21cf2c: 0x46000801
    ctx->pc = 0x21cf2cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21cf30: 0xe6200010
    ctx->pc = 0x21cf30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x21cf34: 0xc620000c
    ctx->pc = 0x21cf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf38: 0x44821000
    ctx->pc = 0x21cf38u;
    *(uint32_t*)&ctx->f[2] = GPR_U32(ctx, 2);
    // 0x21cf3c: 0x0
    ctx->pc = 0x21cf3cu;
    // NOP
    // 0x21cf40: 0x46001002
    ctx->pc = 0x21cf40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21cf44: 0xe620000c
    ctx->pc = 0x21cf44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x21cf48: 0xc6200014
    ctx->pc = 0x21cf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf4c: 0x46001002
    ctx->pc = 0x21cf4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x21cf50: 0xe6200014
    ctx->pc = 0x21cf50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x21cf54: 0xe6230004
    ctx->pc = 0x21cf54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21cf58: 0xae200030
    ctx->pc = 0x21cf58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x21cf5c: 0xae200034
    ctx->pc = 0x21cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
    // 0x21cf60: 0xae200038
    ctx->pc = 0x21cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 0));
    // 0x21cf64: 0x0
    ctx->pc = 0x21cf64u;
    // NOP
label_21cf68:
    // 0x21cf68: 0xc621001c
    ctx->pc = 0x21cf68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf6c: 0xc6200010
    ctx->pc = 0x21cf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf70: 0x3404ffff
    ctx->pc = 0x21cf70u;
    SET_GPR_U32(ctx, 4, OR32(GPR_U32(ctx, 0), 65535));
    // 0x21cf74: 0x46010000
    ctx->pc = 0x21cf74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21cf78: 0xe6200010
    ctx->pc = 0x21cf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x21cf7c: 0xc621000c
    ctx->pc = 0x21cf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf80: 0xc6200000
    ctx->pc = 0x21cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf84: 0x46010000
    ctx->pc = 0x21cf84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21cf88: 0xe6200000
    ctx->pc = 0x21cf88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21cf8c: 0xc6210010
    ctx->pc = 0x21cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cf90: 0xc6200004
    ctx->pc = 0x21cf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cf94: 0x46010000
    ctx->pc = 0x21cf94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21cf98: 0xe6200004
    ctx->pc = 0x21cf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21cf9c: 0xc6210014
    ctx->pc = 0x21cf9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21cfa0: 0xc6200008
    ctx->pc = 0x21cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21cfa4: 0x46010000
    ctx->pc = 0x21cfa4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21cfa8: 0xe6200008
    ctx->pc = 0x21cfa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x21cfac: 0x8e230024
    ctx->pc = 0x21cfacu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x21cfb0: 0x8e220030
    ctx->pc = 0x21cfb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x21cfb4: 0x621021
    ctx->pc = 0x21cfb4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cfb8: 0x441024
    ctx->pc = 0x21cfb8u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x21cfbc: 0xae220024
    ctx->pc = 0x21cfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x21cfc0: 0x8e230028
    ctx->pc = 0x21cfc0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x21cfc4: 0x8e220034
    ctx->pc = 0x21cfc4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x21cfc8: 0x621021
    ctx->pc = 0x21cfc8u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cfcc: 0x3042ffff
    ctx->pc = 0x21cfccu;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x21cfd0: 0xae220028
    ctx->pc = 0x21cfd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    // 0x21cfd4: 0x8e23002c
    ctx->pc = 0x21cfd4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x21cfd8: 0x8e220038
    ctx->pc = 0x21cfd8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x21cfdc: 0x621021
    ctx->pc = 0x21cfdcu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21cfe0: 0x3042ffff
    ctx->pc = 0x21cfe0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 65535));
    // 0x21cfe4: 0xae22002c
    ctx->pc = 0x21cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x21cfe8: 0x26100001
    ctx->pc = 0x21cfe8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
label_21cfec:
    // 0x21cfec: 0x26310040
    ctx->pc = 0x21cfecu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
label_21cff0:
    // 0x21cff0: 0x8e420040
    ctx->pc = 0x21cff0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21cff4: 0x202102a
    ctx->pc = 0x21cff4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 2)));
    // 0x21cff8: 0x1440ffba
    ctx->pc = 0x21CFF8u;
    {
        const bool branch_taken_0x21cff8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21CFFCu;
        SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
        if (branch_taken_0x21cff8) {
            ctx->pc = 0x21CEE4u;
            goto label_21cee4;
        }
    }
    ctx->pc = 0x21D000u;
    // 0x21d000: 0x3c020050
    ctx->pc = 0x21d000u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x21d004: 0xc07ce18
    ctx->pc = 0x21D004u;
    SET_GPR_U32(ctx, 31, 0x21D00Cu);
    ctx->pc = 0x21D008u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 4294960400));
    ctx->pc = 0x1F3860u;
    {
        const uint32_t __entryPc = ctx->pc;
        get__13PauseMgrClassFv_0x1f3860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D00Cu; }
        else if (ctx->pc != 0x21D00Cu) { ctx->pc = 0x21D00Cu; }
    }
    if (ctx->pc != 0x21D00Cu) { return; }
    ctx->pc = 0x21D00Cu;
    // 0x21d00c: 0x1c400004
    ctx->pc = 0x21D00Cu;
    {
        const bool branch_taken_0x21d00c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x21d00c) {
            ctx->pc = 0x21D020u;
            goto label_21d020;
        }
    }
    ctx->pc = 0x21D014u;
    // 0x21d014: 0x8e430078
    ctx->pc = 0x21d014u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x21d018: 0x24630001
    ctx->pc = 0x21d018u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 1));
    // 0x21d01c: 0xae430078
    ctx->pc = 0x21d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_21d020:
    // 0x21d020: 0x8e440048
    ctx->pc = 0x21d020u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 72)));
    // 0x21d024: 0x3c03001b
    ctx->pc = 0x21d024u;
    SET_GPR_U32(ctx, 3, ((uint32_t)27 << 16));
    // 0x21d028: 0x34630079
    ctx->pc = 0x21d028u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 121));
    // 0x21d02c: 0x14830014
    ctx->pc = 0x21D02Cu;
    {
        const bool branch_taken_0x21d02c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x21d02c) {
            ctx->pc = 0x21D080u;
            goto label_21d080;
        }
    }
    ctx->pc = 0x21D034u;
    // 0x21d034: 0x8e430078
    ctx->pc = 0x21d034u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x21d038: 0x28610029
    ctx->pc = 0x21d038u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 41));
    // 0x21d03c: 0x14200008
    ctx->pc = 0x21D03Cu;
    {
        const bool branch_taken_0x21d03c = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d03c) {
            ctx->pc = 0x21D060u;
            goto label_21d060;
        }
    }
    ctx->pc = 0x21D044u;
    // 0x21d044: 0xc6410080
    ctx->pc = 0x21d044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d048: 0x3c033d4c
    ctx->pc = 0x21d048u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x21d04c: 0x3463cccd
    ctx->pc = 0x21d04cu;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x21d050: 0x44830000
    ctx->pc = 0x21d050u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21d054: 0x0
    ctx->pc = 0x21d054u;
    // NOP
    // 0x21d058: 0x46000801
    ctx->pc = 0x21d058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21d05c: 0xe6400080
    ctx->pc = 0x21d05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_21d060:
    // 0x21d060: 0x8e430078
    ctx->pc = 0x21d060u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x21d064: 0x2861003d
    ctx->pc = 0x21d064u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 61));
    // 0x21d068: 0x14200016
    ctx->pc = 0x21D068u;
    {
        const bool branch_taken_0x21d068 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d068) {
            ctx->pc = 0x21D0C4u;
            goto label_21d0c4;
        }
    }
    ctx->pc = 0x21D070u;
    // 0x21d070: 0xc06898c
    ctx->pc = 0x21D070u;
    SET_GPR_U32(ctx, 31, 0x21D078u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D078u; }
        else if (ctx->pc != 0x21D078u) { ctx->pc = 0x21D078u; }
    }
    if (ctx->pc != 0x21D078u) { return; }
    ctx->pc = 0x21D078u;
    // 0x21d078: 0x10000013
    ctx->pc = 0x21D078u;
    {
        const bool branch_taken_0x21d078 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D07Cu;
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        if (branch_taken_0x21d078) {
            ctx->pc = 0x21D0C8u;
            goto label_21d0c8;
        }
    }
    ctx->pc = 0x21D080u;
label_21d080:
    // 0x21d080: 0x8e430078
    ctx->pc = 0x21d080u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x21d084: 0x28610015
    ctx->pc = 0x21d084u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 21));
    // 0x21d088: 0x14200008
    ctx->pc = 0x21D088u;
    {
        const bool branch_taken_0x21d088 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d088) {
            ctx->pc = 0x21D0ACu;
            goto label_21d0ac;
        }
    }
    ctx->pc = 0x21D090u;
    // 0x21d090: 0xc6410080
    ctx->pc = 0x21d090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21d094: 0x3c033d4c
    ctx->pc = 0x21d094u;
    SET_GPR_U32(ctx, 3, ((uint32_t)15692 << 16));
    // 0x21d098: 0x3463cccd
    ctx->pc = 0x21d098u;
    SET_GPR_U32(ctx, 3, OR32(GPR_U32(ctx, 3), 52429));
    // 0x21d09c: 0x44830000
    ctx->pc = 0x21d09cu;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 3);
    // 0x21d0a0: 0x0
    ctx->pc = 0x21d0a0u;
    // NOP
    // 0x21d0a4: 0x46000801
    ctx->pc = 0x21d0a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x21d0a8: 0xe6400080
    ctx->pc = 0x21d0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 128), bits); }
label_21d0ac:
    // 0x21d0ac: 0x8e430078
    ctx->pc = 0x21d0acu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x21d0b0: 0x28610029
    ctx->pc = 0x21d0b0u;
    SET_GPR_U32(ctx, 1, SLT32(GPR_S32(ctx, 3), 41));
    // 0x21d0b4: 0x14200003
    ctx->pc = 0x21D0B4u;
    {
        const bool branch_taken_0x21d0b4 = (GPR_U32(ctx, 1) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d0b4) {
            ctx->pc = 0x21D0C4u;
            goto label_21d0c4;
        }
    }
    ctx->pc = 0x21D0BCu;
    // 0x21d0bc: 0xc06898c
    ctx->pc = 0x21D0BCu;
    SET_GPR_U32(ctx, 31, 0x21D0C4u);
    ctx->pc = 0x1A2630u;
    {
        const uint32_t __entryPc = ctx->pc;
        TaskClose_0x1a2630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D0C4u; }
        else if (ctx->pc != 0x21D0C4u) { ctx->pc = 0x21D0C4u; }
    }
    if (ctx->pc != 0x21D0C4u) { return; }
    ctx->pc = 0x21D0C4u;
label_21d0c4:
    // 0x21d0c4: 0xc6410080
    ctx->pc = 0x21d0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_21d0c8:
    // 0x21d0c8: 0x44800000
    ctx->pc = 0x21d0c8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 0);
    // 0x21d0cc: 0x0
    ctx->pc = 0x21d0ccu;
    // NOP
    // 0x21d0d0: 0x46000836
    ctx->pc = 0x21d0d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d0d4: 0x0
    ctx->pc = 0x21d0d4u;
    // NOP
    // 0x21d0d8: 0x4501005d
    ctx->pc = 0x21D0D8u;
    {
        const bool branch_taken_0x21d0d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d0d8) {
            ctx->pc = 0x21D250u;
            goto label_21d250;
        }
    }
    ctx->pc = 0x21D0E0u;
    // 0x21d0e0: 0x4bede37d
    ctx->pc = 0x21d0e0u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21d0e4: 0x4bedeb7d
    ctx->pc = 0x21d0e4u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21d0e8: 0x4bedf37d
    ctx->pc = 0x21d0e8u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21d0ec: 0x4bedfb7d
    ctx->pc = 0x21d0ecu;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21d0f0: 0xc64d0050
    ctx->pc = 0x21d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21d0f4: 0xc64e0054
    ctx->pc = 0x21d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21d0f8: 0xc06c202
    ctx->pc = 0x21D0F8u;
    SET_GPR_U32(ctx, 31, 0x21D100u);
    ctx->pc = 0x21D0FCu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D100u; }
        else if (ctx->pc != 0x21D100u) { ctx->pc = 0x21D100u; }
    }
    if (ctx->pc != 0x21D100u) { return; }
    ctx->pc = 0x21D100u;
    // 0x21d100: 0xc06c157
    ctx->pc = 0x21D100u;
    SET_GPR_U32(ctx, 31, 0x21D108u);
    ctx->pc = 0x21D104u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 96)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D108u; }
        else if (ctx->pc != 0x21D108u) { ctx->pc = 0x21D108u; }
    }
    if (ctx->pc != 0x21D108u) { return; }
    ctx->pc = 0x21D108u;
    // 0x21d108: 0xc06c0fb
    ctx->pc = 0x21D108u;
    SET_GPR_U32(ctx, 31, 0x21D110u);
    ctx->pc = 0x21D10Cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D110u; }
        else if (ctx->pc != 0x21D110u) { ctx->pc = 0x21D110u; }
    }
    if (ctx->pc != 0x21D110u) { return; }
    ctx->pc = 0x21D110u;
    // 0x21d110: 0xc06c09f
    ctx->pc = 0x21D110u;
    SET_GPR_U32(ctx, 31, 0x21D118u);
    ctx->pc = 0x21D114u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 88)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D118u; }
        else if (ctx->pc != 0x21D118u) { ctx->pc = 0x21D118u; }
    }
    if (ctx->pc != 0x21D118u) { return; }
    ctx->pc = 0x21D118u;
    // 0x21d118: 0x4bede37d
    ctx->pc = 0x21d118u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21d11c: 0x4bedeb7d
    ctx->pc = 0x21d11cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21d120: 0x4bedf37d
    ctx->pc = 0x21d120u;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21d124: 0x4bedfb7d
    ctx->pc = 0x21d124u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21d128: 0x8e510074
    ctx->pc = 0x21d128u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x21d12c: 0x1000003c
    ctx->pc = 0x21D12Cu;
    {
        const bool branch_taken_0x21d12c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D130u;
        SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        if (branch_taken_0x21d12c) {
            ctx->pc = 0x21D220u;
            goto label_21d220;
        }
    }
    ctx->pc = 0x21D134u;
label_21d134:
    // 0x21d134: 0x4bede37d
    ctx->pc = 0x21d134u;
    { uint32_t addr = ((uint32_t)(ctx->vi[28] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[28] = (ctx->vi[28] + 1) & 0x3FF; }
    // 0x21d138: 0x4bedeb7d
    ctx->pc = 0x21d138u;
    { uint32_t addr = ((uint32_t)(ctx->vi[29] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[29] = (ctx->vi[29] + 1) & 0x3FF; }
    // 0x21d13c: 0x4bedf37d
    ctx->pc = 0x21d13cu;
    { uint32_t addr = ((uint32_t)(ctx->vi[30] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[30] = (ctx->vi[30] + 1) & 0x3FF; }
    // 0x21d140: 0x4bedfb7d
    ctx->pc = 0x21d140u;
    { uint32_t addr = ((uint32_t)(ctx->vi[31] & 0x3FF)) << 4; __m128i old_val = READ128(addr); __m128 res = ps2_blendv_ps(_mm_castsi128_ps(old_val), ctx->vu0_vf[13], _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); WRITE128(addr, _mm_castps_si128(res)); ctx->vi[31] = (ctx->vi[31] + 1) & 0x3FF; }
    // 0x21d144: 0xc62d0004
    ctx->pc = 0x21d144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x21d148: 0xc62e0008
    ctx->pc = 0x21d148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x21d14c: 0xc06c202
    ctx->pc = 0x21D14Cu;
    SET_GPR_U32(ctx, 31, 0x21D154u);
    ctx->pc = 0x21D150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1B0808u;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B0808_0x1b0808(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D154u; }
        else if (ctx->pc != 0x21D154u) { ctx->pc = 0x21D154u; }
    }
    if (ctx->pc != 0x21D154u) { return; }
    ctx->pc = 0x21D154u;
    // 0x21d154: 0xc06c157
    ctx->pc = 0x21D154u;
    SET_GPR_U32(ctx, 31, 0x21D15Cu);
    ctx->pc = 0x21D158u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 44)));
    ctx->pc = 0x1B055Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B055C_0x1b055c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D15Cu; }
        else if (ctx->pc != 0x21D15Cu) { ctx->pc = 0x21D15Cu; }
    }
    if (ctx->pc != 0x21D15Cu) { return; }
    ctx->pc = 0x21D15Cu;
    // 0x21d15c: 0xc06c0fb
    ctx->pc = 0x21D15Cu;
    SET_GPR_U32(ctx, 31, 0x21D164u);
    ctx->pc = 0x21D160u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->pc = 0x1B03ECu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B03EC_0x1b03ec(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D164u; }
        else if (ctx->pc != 0x21D164u) { ctx->pc = 0x21D164u; }
    }
    if (ctx->pc != 0x21D164u) { return; }
    ctx->pc = 0x21D164u;
    // 0x21d164: 0xc06c09f
    ctx->pc = 0x21D164u;
    SET_GPR_U32(ctx, 31, 0x21D16Cu);
    ctx->pc = 0x21D168u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->pc = 0x1B027Cu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B027C_0x1b027c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D16Cu; }
        else if (ctx->pc != 0x21D16Cu) { ctx->pc = 0x21D16Cu; }
    }
    if (ctx->pc != 0x21D16Cu) { return; }
    ctx->pc = 0x21D16Cu;
    // 0x21d16c: 0xc64c0084
    ctx->pc = 0x21d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d170: 0x3c023f80
    ctx->pc = 0x21d170u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x21d174: 0x44820000
    ctx->pc = 0x21d174u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21d178: 0x0
    ctx->pc = 0x21d178u;
    // NOP
    // 0x21d17c: 0x460c0032
    ctx->pc = 0x21d17cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d180: 0x0
    ctx->pc = 0x21d180u;
    // NOP
    // 0x21d184: 0x45010006
    ctx->pc = 0x21D184u;
    {
        const bool branch_taken_0x21d184 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x21D188u;
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        if (branch_taken_0x21d184) {
            ctx->pc = 0x21D1A0u;
            goto label_21d1a0;
        }
    }
    ctx->pc = 0x21D18Cu;
    // 0x21d18c: 0xc06c1b3
    ctx->pc = 0x21D18Cu;
    SET_GPR_U32(ctx, 31, 0x21D194u);
    ctx->pc = 0x21D190u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    ctx->pc = 0x1B06CCu;
    {
        const uint32_t __entryPc = ctx->pc;
        sub_001B06CC_0x1b06cc(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D194u; }
        else if (ctx->pc != 0x21D194u) { ctx->pc = 0x21D194u; }
    }
    if (ctx->pc != 0x21D194u) { return; }
    ctx->pc = 0x21D194u;
    // 0x21d194: 0xc06b218
    ctx->pc = 0x21D194u;
    SET_GPR_U32(ctx, 31, 0x21D19Cu);
    ctx->pc = 0x21D198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x1AC860u;
    {
        const uint32_t __entryPc = ctx->pc;
        nlSetScaleFactor_0x1ac860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D19Cu; }
        else if (ctx->pc != 0x21D19Cu) { ctx->pc = 0x21D19Cu; }
    }
    if (ctx->pc != 0x21D19Cu) { return; }
    ctx->pc = 0x21D19Cu;
    // 0x21d19c: 0x0
    ctx->pc = 0x21d19cu;
    // NOP
label_21d1a0:
    // 0x21d1a0: 0xc64c0080
    ctx->pc = 0x21d1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21d1a4: 0x3c023f80
    ctx->pc = 0x21d1a4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)16256 << 16));
    // 0x21d1a8: 0x44820000
    ctx->pc = 0x21d1a8u;
    *(uint32_t*)&ctx->f[0] = GPR_U32(ctx, 2);
    // 0x21d1ac: 0x0
    ctx->pc = 0x21d1acu;
    // NOP
    // 0x21d1b0: 0x460c0032
    ctx->pc = 0x21d1b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21d1b4: 0x0
    ctx->pc = 0x21d1b4u;
    // NOP
    // 0x21d1b8: 0x4501000b
    ctx->pc = 0x21D1B8u;
    {
        const bool branch_taken_0x21d1b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x21d1b8) {
            ctx->pc = 0x21D1E8u;
            goto label_21d1e8;
        }
    }
    ctx->pc = 0x21D1C0u;
    // 0x21d1c0: 0x8e420040
    ctx->pc = 0x21d1c0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21d1c4: 0x14400002
    ctx->pc = 0x21D1C4u;
    {
        const bool branch_taken_0x21d1c4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21D1C8u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x21d1c4) {
            ctx->pc = 0x21D1D0u;
            goto label_21d1d0;
        }
    }
    ctx->pc = 0x21D1CCu;
    // 0x21d1cc: 0x1cd
    ctx->pc = 0x21d1ccu;
    runtime->handleBreak(rdram, ctx);
label_21d1d0:
    // 0x21d1d0: 0x8e420044
    ctx->pc = 0x21d1d0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x21d1d4: 0x1810
    ctx->pc = 0x21d1d4u;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x21d1d8: 0xc0853e4
    ctx->pc = 0x21D1D8u;
    SET_GPR_U32(ctx, 31, 0x21D1E0u);
    ctx->pc = 0x21D1DCu;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x214F90u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMatT__Fif_0x214f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D1E0u; }
        else if (ctx->pc != 0x21D1E0u) { ctx->pc = 0x21D1E0u; }
    }
    if (ctx->pc != 0x21D1E0u) { return; }
    ctx->pc = 0x21D1E0u;
    // 0x21d1e0: 0x1000000a
    ctx->pc = 0x21D1E0u;
    {
        const bool branch_taken_0x21d1e0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x21D1E4u;
        { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
        if (branch_taken_0x21d1e0) {
            ctx->pc = 0x21D20Cu;
            goto label_21d20c;
        }
    }
    ctx->pc = 0x21D1E8u;
label_21d1e8:
    // 0x21d1e8: 0x8e420040
    ctx->pc = 0x21d1e8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21d1ec: 0x14400002
    ctx->pc = 0x21D1ECu;
    {
        const bool branch_taken_0x21d1ec = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x21D1F0u;
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
        if (branch_taken_0x21d1ec) {
            ctx->pc = 0x21D1F8u;
            goto label_21d1f8;
        }
    }
    ctx->pc = 0x21D1F4u;
    // 0x21d1f4: 0x1cd
    ctx->pc = 0x21d1f4u;
    runtime->handleBreak(rdram, ctx);
label_21d1f8:
    // 0x21d1f8: 0x8e420044
    ctx->pc = 0x21d1f8u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x21d1fc: 0x1810
    ctx->pc = 0x21d1fcu;
    SET_GPR_U32(ctx, 3, ctx->hi);
    // 0x21d200: 0xc0853ac
    ctx->pc = 0x21D200u;
    SET_GPR_U32(ctx, 31, 0x21D208u);
    ctx->pc = 0x21D204u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->pc = 0x214EB0u;
    {
        const uint32_t __entryPc = ctx->pc;
        PutPolyMat__Fi_0x214eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D208u; }
        else if (ctx->pc != 0x21D208u) { ctx->pc = 0x21D208u; }
    }
    if (ctx->pc != 0x21D208u) { return; }
    ctx->pc = 0x21D208u;
    // 0x21d208: 0x4bff6b7e
    ctx->pc = 0x21d208u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
label_21d20c:
    // 0x21d20c: 0x4bfe6b7e
    ctx->pc = 0x21d20cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21d210: 0x4bfd6b7e
    ctx->pc = 0x21d210u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21d214: 0x4bfc6b7e
    ctx->pc = 0x21d214u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21d218: 0x26100001
    ctx->pc = 0x21d218u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x21d21c: 0x26310040
    ctx->pc = 0x21d21cu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 64));
label_21d220:
    // 0x21d220: 0x8e430040
    ctx->pc = 0x21d220u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x21d224: 0x203182a
    ctx->pc = 0x21d224u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 16), GPR_S32(ctx, 3)));
    // 0x21d228: 0x1460ffc2
    ctx->pc = 0x21D228u;
    {
        const bool branch_taken_0x21d228 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x21d228) {
            ctx->pc = 0x21D134u;
            goto label_21d134;
        }
    }
    ctx->pc = 0x21D230u;
    // 0x21d230: 0x4bff6b7e
    ctx->pc = 0x21d230u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21d234: 0x4bfe6b7e
    ctx->pc = 0x21d234u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21d238: 0x4bfd6b7e
    ctx->pc = 0x21d238u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21d23c: 0x4bfc6b7e
    ctx->pc = 0x21d23cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x21d240: 0x4bff6b7e
    ctx->pc = 0x21d240u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[31] = ps2_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x21d244: 0x4bfe6b7e
    ctx->pc = 0x21d244u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[30] = ps2_blendv_ps(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21d248: 0x4bfd6b7e
    ctx->pc = 0x21d248u;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[29] = ps2_blendv_ps(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21d24c: 0x4bfc6b7e
    ctx->pc = 0x21d24cu;
    { ctx->vi[13] = (ctx->vi[13] - 1) & 0x3FF; uint32_t addr = ((uint32_t)(ctx->vi[13] & 0x3FF)) << 4; __m128 res = _mm_castsi128_ps(READ128(addr)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[28] = ps2_blendv_ps(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
label_21d250:
    // 0x21d250: 0x7bbf0030
    ctx->pc = 0x21d250u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d254: 0x7bb20020
    ctx->pc = 0x21d254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d258: 0x7bb10010
    ctx->pc = 0x21d258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d25c: 0x7bb00000
    ctx->pc = 0x21d25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d260: 0x3e00008
    ctx->pc = 0x21D260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D264u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21CEE4u: goto label_21cee4;
            case 0x21CF68u: goto label_21cf68;
            case 0x21CFECu: goto label_21cfec;
            case 0x21CFF0u: goto label_21cff0;
            case 0x21D020u: goto label_21d020;
            case 0x21D060u: goto label_21d060;
            case 0x21D080u: goto label_21d080;
            case 0x21D0ACu: goto label_21d0ac;
            case 0x21D0C4u: goto label_21d0c4;
            case 0x21D0C8u: goto label_21d0c8;
            case 0x21D134u: goto label_21d134;
            case 0x21D1A0u: goto label_21d1a0;
            case 0x21D1D0u: goto label_21d1d0;
            case 0x21D1E8u: goto label_21d1e8;
            case 0x21D1F8u: goto label_21d1f8;
            case 0x21D20Cu: goto label_21d20c;
            case 0x21D220u: goto label_21d220;
            case 0x21D250u: goto label_21d250;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D268u;
}
