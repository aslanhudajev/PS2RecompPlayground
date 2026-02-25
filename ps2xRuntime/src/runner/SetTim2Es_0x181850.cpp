#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetTim2Es
// Address: 0x181850 - 0x1818c0
void SetTim2Es_0x181850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetTim2Es_0x181850");
#endif

    ctx->pc = 0x181850u;

    // 0x181850: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x181850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181854: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x181854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x181858: 0xc4e20004  lwc1        $f2, 0x4($a3)
    ctx->pc = 0x181858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18185c: 0x445021  addu        $t2, $v0, $a0
    ctx->pc = 0x18185cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x181860: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x181860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181868: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x181868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18186c: 0x25490004  addiu       $t1, $t2, 0x4
    ctx->pc = 0x18186cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x181870: 0x248301d4  addiu       $v1, $a0, 0x1D4
    ctx->pc = 0x181870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 468));
    // 0x181874: 0xe5430004  swc1        $f3, 0x4($t2)
    ctx->pc = 0x181874u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
    // 0x181878: 0xe5420008  swc1        $f2, 0x8($t2)
    ctx->pc = 0x181878u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
    // 0x18187c: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x18187cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x181880: 0xe5400010  swc1        $f0, 0x10($t2)
    ctx->pc = 0x181880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
    // 0x181884: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x181884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x181888: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x181888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18188c: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x18188cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x181890: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x181890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x181894: 0xe5430014  swc1        $f3, 0x14($t2)
    ctx->pc = 0x181894u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
    // 0x181898: 0xe5420018  swc1        $f2, 0x18($t2)
    ctx->pc = 0x181898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
    // 0x18189c: 0xe541001c  swc1        $f1, 0x1C($t2)
    ctx->pc = 0x18189cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x1818a0: 0xe5400020  swc1        $f0, 0x20($t2)
    ctx->pc = 0x1818a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 32), bits); }
    // 0x1818a4: 0xac8201d4  sw          $v0, 0x1D4($a0)
    ctx->pc = 0x1818a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 468), GPR_U32(ctx, 2));
    // 0x1818a8: 0xac8901d8  sw          $t1, 0x1D8($a0)
    ctx->pc = 0x1818a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 472), GPR_U32(ctx, 9));
    // 0x1818ac: 0x8c82017c  lw          $v0, 0x17C($a0)
    ctx->pc = 0x1818acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
    // 0x1818b0: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x1818b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x1818b4: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1818b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1818b8: 0x8046fcc  j           func_11BF30
    ctx->pc = 0x1818B8u;
    ctx->pc = 0x1818BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1818B8u;
            // 0x1818bc: 0x8c84017c  lw          $a0, 0x17C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BF30u;
    if (runtime->hasFunction(0x11BF30u)) {
        auto targetFn = runtime->lookupFunction(0x11BF30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceHiPlugTim2SetData_0x11bf30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1818C0u;
}
