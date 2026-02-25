#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: GetSoundScale
// Address: 0x1742f0 - 0x17443c
void GetSoundScale_0x1742f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("GetSoundScale_0x1742f0");
#endif

    ctx->pc = 0x1742f0u;

    // 0x1742f0: 0x3c034380  lui         $v1, 0x4380
    ctx->pc = 0x1742f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17280 << 16));
    // 0x1742f4: 0x24070fff  addiu       $a3, $zero, 0xFFF
    ctx->pc = 0x1742f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4095));
    // 0x1742f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1742f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1742fc: 0x46006047  neg.s       $f1, $f12
    ctx->pc = 0x1742fcu;
    ctx->f[1] = FPU_NEG_S(ctx->f[12]);
    // 0x174300: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x174300u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x174304: 0x3c034580  lui         $v1, 0x4580
    ctx->pc = 0x174304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17792 << 16));
    // 0x174308: 0x46006003  div.s       $f0, $f12, $f0
    ctx->pc = 0x174308u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[0] = ctx->f[12] / ctx->f[0];
    // 0x17430c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x17430cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x174310: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x174310u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x174314: 0x46012902  mul.s       $f4, $f5, $f1
    ctx->pc = 0x174314u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x174318: 0x3c034328  lui         $v1, 0x4328
    ctx->pc = 0x174318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17192 << 16));
    // 0x17431c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x17431cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x174320: 0x46002842  mul.s       $f1, $f5, $f0
    ctx->pc = 0x174320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x174324: 0x46041880  add.s       $f2, $f3, $f4
    ctx->pc = 0x174324u;
    ctx->f[2] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x174328: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x174328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x17432c: 0x460010a4  .word       0x460010A4                   # cvt.w.s     $f2, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17432cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x174330: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174330u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x174334: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x174334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174338: 0x44071000  mfc1        $a3, $f2
    ctx->pc = 0x174338u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x17433c: 0x46006836  c.le.s      $f13, $f0
    ctx->pc = 0x17433cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x174340: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x174340u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x174344: 0x45010014  bc1t        . + 4 + (0x14 << 2)
    ctx->pc = 0x174344u;
    {
        const bool branch_taken_0x174344 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x174348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174344u;
            // 0x174348: 0x46006841  sub.s       $f1, $f13, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174344) {
            ctx->pc = 0x174398u;
            goto label_174398;
        }
    }
    ctx->pc = 0x17434Cu;
    // 0x17434c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x17434cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x174350: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x174350u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x174354: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x174354u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174358: 0x0  nop
    ctx->pc = 0x174358u;
    // NOP
    // 0x17435c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x17435cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x174360: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x174360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174364: 0x46012841  sub.s       $f1, $f5, $f1
    ctx->pc = 0x174364u;
    ctx->f[1] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x174368: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174368u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x17436c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17436cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174370: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x174370u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x174374: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x174374u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174378: 0x0  nop
    ctx->pc = 0x174378u;
    // NOP
    // 0x17437c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17437cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x174380: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x174380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x174384: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x174384u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x174388: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x174388u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x17438c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17438Cu;
    {
        const bool branch_taken_0x17438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17438c) {
            ctx->pc = 0x1743E0u;
            goto label_1743e0;
        }
    }
    ctx->pc = 0x174394u;
    // 0x174394: 0x0  nop
    ctx->pc = 0x174394u;
    // NOP
label_174398:
    // 0x174398: 0x3c034108  lui         $v1, 0x4108
    ctx->pc = 0x174398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16648 << 16));
    // 0x17439c: 0x460d0040  add.s       $f1, $f0, $f13
    ctx->pc = 0x17439cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x1743a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1743a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1743a4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1743a4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743a8: 0x0  nop
    ctx->pc = 0x1743a8u;
    // NOP
    // 0x1743ac: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1743acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1743b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1743b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1743b4: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1743b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1743b8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1743b8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1743bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1743bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1743c0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1743c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1743c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1743c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1743c8: 0x0  nop
    ctx->pc = 0x1743c8u;
    // NOP
    // 0x1743cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1743ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1743d0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1743d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1743d4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1743d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1743d8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1743d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1743dc: 0x0  nop
    ctx->pc = 0x1743dcu;
    // NOP
label_1743e0:
    // 0x1743e0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1743e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1743e4: 0xe1082a  slt         $at, $a3, $at
    ctx->pc = 0x1743e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x1743e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1743E8u;
    {
        const bool branch_taken_0x1743e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1743e8) {
            ctx->pc = 0x1743F8u;
            goto label_1743f8;
        }
    }
    ctx->pc = 0x1743F0u;
    // 0x1743f0: 0x24073fff  addiu       $a3, $zero, 0x3FFF
    ctx->pc = 0x1743f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x1743f4: 0x0  nop
    ctx->pc = 0x1743f4u;
    // NOP
label_1743f8:
    // 0x1743f8: 0x4e10003  bgez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1743F8u;
    {
        const bool branch_taken_0x1743f8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x1743f8) {
            ctx->pc = 0x174408u;
            goto label_174408;
        }
    }
    ctx->pc = 0x174400u;
    // 0x174400: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x174400u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174404: 0x0  nop
    ctx->pc = 0x174404u;
    // NOP
label_174408:
    // 0x174408: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x174408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x17440c: 0xc1082a  slt         $at, $a2, $at
    ctx->pc = 0x17440cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 1)) ? 1 : 0);
    // 0x174410: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x174410u;
    {
        const bool branch_taken_0x174410 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x174410) {
            ctx->pc = 0x174420u;
            goto label_174420;
        }
    }
    ctx->pc = 0x174418u;
    // 0x174418: 0x24063fff  addiu       $a2, $zero, 0x3FFF
    ctx->pc = 0x174418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x17441c: 0x0  nop
    ctx->pc = 0x17441cu;
    // NOP
label_174420:
    // 0x174420: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x174420u;
    {
        const bool branch_taken_0x174420 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x174420) {
            ctx->pc = 0x174430u;
            goto label_174430;
        }
    }
    ctx->pc = 0x174428u;
    // 0x174428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x174428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17442c: 0x0  nop
    ctx->pc = 0x17442cu;
    // NOP
label_174430:
    // 0x174430: 0xa4870000  sh          $a3, 0x0($a0)
    ctx->pc = 0x174430u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 7));
    // 0x174434: 0x3e00008  jr          $ra
    ctx->pc = 0x174434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174434u;
            // 0x174438: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174398u: goto label_174398;
            case 0x1743E0u: goto label_1743e0;
            case 0x1743F8u: goto label_1743f8;
            case 0x174408u: goto label_174408;
            case 0x174420u: goto label_174420;
            case 0x174430u: goto label_174430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17443Cu;
}
