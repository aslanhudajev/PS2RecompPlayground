#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: RankingInsertName
// Address: 0x1980e0 - 0x19812c
void RankingInsertName_0x1980e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("RankingInsertName_0x1980e0");
#endif

    ctx->pc = 0x1980e0u;

    // 0x1980e0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1980e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1980e4: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1980e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1980e8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1980e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1980ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1980ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1980f0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1980f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1980f4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1980f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1980f8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1980f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1980fc: 0x2463164c  addiu       $v1, $v1, 0x164C
    ctx->pc = 0x1980fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5708));
    // 0x198100: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x198100u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x198104: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x198104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x198108: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x198108u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x19810c: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x19810cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x198110: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x198110u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x198114: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x198114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x198118: 0xc4a10010  lwc1        $f1, 0x10($a1)
    ctx->pc = 0x198118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19811c: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x19811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x198120: 0xe4610010  swc1        $f1, 0x10($v1)
    ctx->pc = 0x198120u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x198124: 0x3e00008  jr          $ra
    ctx->pc = 0x198124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198124u;
            // 0x198128: 0xe4600014  swc1        $f0, 0x14($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19812Cu;
}
