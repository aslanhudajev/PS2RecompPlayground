#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: BossResultSet
// Address: 0x1594c0 - 0x1595b0
void BossResultSet_0x1594c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("BossResultSet_0x1594c0");
#endif

    ctx->pc = 0x1594c0u;

    // 0x1594c0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1594C0u;
    {
        const bool branch_taken_0x1594c0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1594C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594C0u;
            // 0x1594c4: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594c0) {
            ctx->pc = 0x1594D8u;
            goto label_1594d8;
        }
    }
    ctx->pc = 0x1594C8u;
    // 0x1594c8: 0xac202cc8  sw          $zero, 0x2CC8($at)
    ctx->pc = 0x1594c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11464), GPR_U32(ctx, 0));
    // 0x1594cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1594ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1594d0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1594D0u;
    {
        const bool branch_taken_0x1594d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1594D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1594D0u;
            // 0x1594d4: 0xac202ccc  sw          $zero, 0x2CCC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 11468), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1594d0) {
            ctx->pc = 0x1595A8u;
            goto label_1595a8;
        }
    }
    ctx->pc = 0x1594D8u;
label_1594d8:
    // 0x1594d8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1594d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1594dc: 0xac202cc8  sw          $zero, 0x2CC8($at)
    ctx->pc = 0x1594dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11464), GPR_U32(ctx, 0));
    // 0x1594e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1594e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1594e4: 0xac202ccc  sw          $zero, 0x2CCC($at)
    ctx->pc = 0x1594e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11468), GPR_U32(ctx, 0));
    // 0x1594e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1594e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1594ec: 0x8c233530  lw          $v1, 0x3530($at)
    ctx->pc = 0x1594ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13616)));
    // 0x1594f0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1594F0u;
    {
        const bool branch_taken_0x1594f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1594f0) {
            ctx->pc = 0x159548u;
            goto label_159548;
        }
    }
    ctx->pc = 0x1594F8u;
    // 0x1594f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1594f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1594fc: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x1594fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x159500: 0x34658000  ori         $a1, $v1, 0x8000
    ctx->pc = 0x159500u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x159504: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159508: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x159508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x15950c: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x15950cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x159510: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x159510u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20480u)));
    // 0x159514: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x159514u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159518: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159518u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15951c: 0x0  nop
    ctx->pc = 0x15951cu;
    // NOP
    // 0x159520: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x159520u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x159524: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159524u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159528: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x159528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15952c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x15952cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x159530: 0x0  nop
    ctx->pc = 0x159530u;
    // NOP
    // 0x159534: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x159534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x159538: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x159538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x15953c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15953cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x159540: 0xac232cc8  sw          $v1, 0x2CC8($at)
    ctx->pc = 0x159540u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11464), GPR_U32(ctx, 3));
    // 0x159544: 0x0  nop
    ctx->pc = 0x159544u;
    // NOP
label_159548:
    // 0x159548: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159548u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x15954c: 0x8c233534  lw          $v1, 0x3534($at)
    ctx->pc = 0x15954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13620)));
    // 0x159550: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x159550u;
    {
        const bool branch_taken_0x159550 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x159550) {
            ctx->pc = 0x1595A8u;
            goto label_1595a8;
        }
    }
    ctx->pc = 0x159558u;
    // 0x159558: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x159558u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15955c: 0x3c0345bb  lui         $v1, 0x45BB
    ctx->pc = 0x15955cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17851 << 16));
    // 0x159560: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x159560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x159564: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x159564u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x159568: 0x34648000  ori         $a0, $v1, 0x8000
    ctx->pc = 0x159568u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)32768u)));
    // 0x15956c: 0x3c0347c3  lui         $v1, 0x47C3
    ctx->pc = 0x15956cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18371 << 16));
    // 0x159570: 0x34635000  ori         $v1, $v1, 0x5000
    ctx->pc = 0x159570u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)20480u)));
    // 0x159574: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x159574u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x159578: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x159578u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15957c: 0x0  nop
    ctx->pc = 0x15957cu;
    // NOP
    // 0x159580: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x159580u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
    // 0x159584: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x159584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x159588: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x159588u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x15958c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x15958cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x159590: 0x0  nop
    ctx->pc = 0x159590u;
    // NOP
    // 0x159594: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x159594u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x159598: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x159598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15959c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x15959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1595a0: 0xac232ccc  sw          $v1, 0x2CCC($at)
    ctx->pc = 0x1595a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 11468), GPR_U32(ctx, 3));
    // 0x1595a4: 0x0  nop
    ctx->pc = 0x1595a4u;
    // NOP
label_1595a8:
    // 0x1595a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1595A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1594D8u: goto label_1594d8;
            case 0x159548u: goto label_159548;
            case 0x1595A8u: goto label_1595a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1595B0u;
}
