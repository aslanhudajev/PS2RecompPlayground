#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ChipDefine
// Address: 0x1ecda0 - 0x1ece10
void ChipDefine_0x1ecda0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ChipDefine_0x1ecda0");
#endif

    ctx->pc = 0x1ecda0u;

    // 0x1ecda0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1ecda0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecda4: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ecda4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ecda8: 0x45100  sll         $t2, $a0, 4
    ctx->pc = 0x1ecda8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1ecdac: 0x24633840  addiu       $v1, $v1, 0x3840
    ctx->pc = 0x1ecdacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14400));
    // 0x1ecdb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecdb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecdb4: 0x6a4821  addu        $t1, $v1, $t2
    ctx->pc = 0x1ecdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ecdb8: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ecdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ecdbc: 0x3c040044  lui         $a0, 0x44
    ctx->pc = 0x1ecdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)68 << 16));
    // 0x1ecdc0: 0x24633844  addiu       $v1, $v1, 0x3844
    ctx->pc = 0x1ecdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14404));
    // 0x1ecdc4: 0x24843848  addiu       $a0, $a0, 0x3848
    ctx->pc = 0x1ecdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14408));
    // 0x1ecdc8: 0x6a2821  addu        $a1, $v1, $t2
    ctx->pc = 0x1ecdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ecdcc: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x1ecdccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1ecdd0: 0x3c030044  lui         $v1, 0x44
    ctx->pc = 0x1ecdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)68 << 16));
    // 0x1ecdd4: 0x2463384c  addiu       $v1, $v1, 0x384C
    ctx->pc = 0x1ecdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14412));
    // 0x1ecdd8: 0xe5200000  swc1        $f0, 0x0($t1)
    ctx->pc = 0x1ecdd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
    // 0x1ecddc: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x1ecddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x1ecde0: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1ecde0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ecde4: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x1ecde4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ecde8: 0x0  nop
    ctx->pc = 0x1ecde8u;
    // NOP
    // 0x1ecdec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ecdecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ecdf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ecdf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ecdf4: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x1ecdf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x1ecdf8: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1ecdf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1ecdfc: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1ecdfcu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ece00: 0x0  nop
    ctx->pc = 0x1ece00u;
    // NOP
    // 0x1ece04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ece04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1ece08: 0x3e00008  jr          $ra
    ctx->pc = 0x1ECE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ECE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ECE08u;
            // 0x1ece0c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ECE10u;
}
