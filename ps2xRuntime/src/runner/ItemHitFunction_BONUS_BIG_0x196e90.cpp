#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ItemHitFunction_BONUS_BIG
// Address: 0x196e90 - 0x196f64
void ItemHitFunction_BONUS_BIG_0x196e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ItemHitFunction_BONUS_BIG_0x196e90");
#endif

    ctx->pc = 0x196e90u;

    // 0x196e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x196e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x196e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x196e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x196e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x196e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x196e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x196e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x196ea0: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x196ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x196ea4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x196ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x196ea8: 0x18800029  blez        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x196EA8u;
    {
        const bool branch_taken_0x196ea8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x196EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196EA8u;
            // 0x196eac: 0x8cb0000c  lw          $s0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196ea8) {
            ctx->pc = 0x196F50u;
            goto label_196f50;
        }
    }
    ctx->pc = 0x196EB0u;
    // 0x196eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x196eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x196eb4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x196EB4u;
    {
        const bool branch_taken_0x196eb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x196eb4) {
            ctx->pc = 0x196EC8u;
            goto label_196ec8;
        }
    }
    ctx->pc = 0x196EBCu;
    // 0x196ebc: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x196EBCu;
    {
        const bool branch_taken_0x196ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196ebc) {
            ctx->pc = 0x196F50u;
            goto label_196f50;
        }
    }
    ctx->pc = 0x196EC4u;
    // 0x196ec4: 0x0  nop
    ctx->pc = 0x196ec4u;
    // NOP
label_196ec8:
    // 0x196ec8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x196ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x196ecc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x196eccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x196ed0: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x196ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x196ed4: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x196ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x196ed8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x196ED8u;
    {
        const bool branch_taken_0x196ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x196ed8) {
            ctx->pc = 0x196EE8u;
            goto label_196ee8;
        }
    }
    ctx->pc = 0x196EE0u;
    // 0x196ee0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x196ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x196ee4: 0x0  nop
    ctx->pc = 0x196ee4u;
    // NOP
label_196ee8:
    // 0x196ee8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x196ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x196eec: 0x433823  subu        $a3, $v0, $v1
    ctx->pc = 0x196eecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196ef0: 0x24022710  addiu       $v0, $zero, 0x2710
    ctx->pc = 0x196ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
    // 0x196ef4: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x196ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x196ef8: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x196ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x196efc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x196efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x196f00: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x196f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x196f04: 0x8e050098  lw          $a1, 0x98($s0)
    ctx->pc = 0x196f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x196f08: 0x8e06009c  lw          $a2, 0x9C($s0)
    ctx->pc = 0x196f08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x196f0c: 0xc076c80  jal         func_1DB200
    ctx->pc = 0x196F0Cu;
    SET_GPR_U32(ctx, 31, 0x196F14u);
    ctx->pc = 0x196F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F0Cu;
            // 0x196f10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB200u;
    if (runtime->hasFunction(0x1DB200u)) {
        auto targetFn = runtime->lookupFunction(0x1DB200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F14u; }
        if (ctx->pc != 0x196F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatePoints_0x1db200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F14u; }
        if (ctx->pc != 0x196F14u) { return; }
    }
    ctx->pc = 0x196F14u;
    // 0x196f14: 0xc62c000c  lwc1        $f12, 0xC($s1)
    ctx->pc = 0x196f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x196f18: 0xc62d0010  lwc1        $f13, 0x10($s1)
    ctx->pc = 0x196f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x196f1c: 0xc05d080  jal         func_174200
    ctx->pc = 0x196F1Cu;
    SET_GPR_U32(ctx, 31, 0x196F24u);
    ctx->pc = 0x196F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F1Cu;
            // 0x196f20: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174200u;
    if (runtime->hasFunction(0x174200u)) {
        auto targetFn = runtime->lookupFunction(0x174200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F24u; }
        if (ctx->pc != 0x196F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        play_se_abs_0x174200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F24u; }
        if (ctx->pc != 0x196F24u) { return; }
    }
    ctx->pc = 0x196F24u;
    // 0x196f24: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x196f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x196f28: 0xc055124  jal         func_154490
    ctx->pc = 0x196F28u;
    SET_GPR_U32(ctx, 31, 0x196F30u);
    ctx->pc = 0x196F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x196F28u;
            // 0x196f2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154490u;
    if (runtime->hasFunction(0x154490u)) {
        auto targetFn = runtime->lookupFunction(0x154490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F30u; }
        if (ctx->pc != 0x196F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsDualShock_0x154490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196F30u; }
        if (ctx->pc != 0x196F30u) { return; }
    }
    ctx->pc = 0x196F30u;
    // 0x196f30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x196f30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x196f34: 0x8c233514  lw          $v1, 0x3514($at)
    ctx->pc = 0x196f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 13588)));
    // 0x196f38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x196f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x196f3c: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x196f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x196f40: 0x8c8300e4  lw          $v1, 0xE4($a0)
    ctx->pc = 0x196f40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
    // 0x196f44: 0x24630032  addiu       $v1, $v1, 0x32
    ctx->pc = 0x196f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 50));
    // 0x196f48: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x196f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x196f4c: 0x0  nop
    ctx->pc = 0x196f4cu;
    // NOP
label_196f50:
    // 0x196f50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x196f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x196f54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x196f54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x196f58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x196f58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x196f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x196F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196F5Cu;
            // 0x196f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x196EC8u: goto label_196ec8;
            case 0x196EE8u: goto label_196ee8;
            case 0x196F50u: goto label_196f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x196F64u;
}
