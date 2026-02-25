#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: Trans3Dto2D3
// Address: 0x1c79f0 - 0x1c7a2c
void Trans3Dto2D3_0x1c79f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("Trans3Dto2D3_0x1c79f0");
#endif

    ctx->pc = 0x1c79f0u;

    // 0x1c79f0: 0x3c0340d9  lui         $v1, 0x40D9
    ctx->pc = 0x1c79f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16601 << 16));
    // 0x1c79f4: 0x3466999a  ori         $a2, $v1, 0x999A
    ctx->pc = 0x1c79f4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)39322u)));
    // 0x1c79f8: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x1c79f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c79fc: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1c79fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1c7a00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c7a00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c7a04: 0x0  nop
    ctx->pc = 0x1c7a04u;
    // NOP
    // 0x1c7a08: 0x460c0842  mul.s       $f1, $f1, $f12
    ctx->pc = 0x1c7a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x1c7a0c: 0x460d0002  mul.s       $f0, $f0, $f13
    ctx->pc = 0x1c7a0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x1c7a10: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7a10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1c7a14: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x1c7a14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c7a18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1c7a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1c7a1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1c7a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1c7a20: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1c7a20u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1c7a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1C7A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A24u;
            // 0x1c7a28: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7A2Cu;
}
