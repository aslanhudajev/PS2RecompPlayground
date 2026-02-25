#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsReadTim2rom
// Address: 0x170830 - 0x1708fc
void wrsReadTim2rom_0x170830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsReadTim2rom_0x170830");
#endif

    ctx->pc = 0x170830u;

    // 0x170830: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x170830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x170834: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170838: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17083c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17083cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170840: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x170840u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170844: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170848: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x170848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17084c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17084cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170850: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x170850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170854: 0xc0504cc  jal         func_141330
    ctx->pc = 0x170854u;
    SET_GPR_U32(ctx, 31, 0x17085Cu);
    ctx->pc = 0x170858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170854u;
            // 0x170858: 0x27b00050  addiu       $s0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141330u;
    if (runtime->hasFunction(0x141330u)) {
        auto targetFn = runtime->lookupFunction(0x141330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17085Cu; }
        if (ctx->pc != 0x17085Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsRomLoad_0x141330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17085Cu; }
        if (ctx->pc != 0x17085Cu) { return; }
    }
    ctx->pc = 0x17085Cu;
    // 0x17085c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x17085cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170860: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x170860u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170864: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x170864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x170868: 0xc05c0b4  jal         func_1702D0
    ctx->pc = 0x170868u;
    SET_GPR_U32(ctx, 31, 0x170870u);
    ctx->pc = 0x17086Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170868u;
            // 0x17086c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D0u;
    if (runtime->hasFunction(0x1702D0u)) {
        auto targetFn = runtime->lookupFunction(0x1702D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170870u; }
        if (ctx->pc != 0x170870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setTexInfo_0x1702d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170870u; }
        if (ctx->pc != 0x170870u) { return; }
    }
    ctx->pc = 0x170870u;
    // 0x170870: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x170870u;
    {
        const bool branch_taken_0x170870 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170870u;
            // 0x170874: 0x1318c0  sll         $v1, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170870) {
            ctx->pc = 0x1708C0u;
            goto label_1708c0;
        }
    }
    ctx->pc = 0x170878u;
    // 0x170878: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x170878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x17087c: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x17087cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x170880: 0x24421640  addiu       $v0, $v0, 0x1640
    ctx->pc = 0x170880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5696));
    // 0x170884: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170884u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x170888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17088c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x17088cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x170890: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x170890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x170894: 0x0  nop
    ctx->pc = 0x170894u;
    // NOP
label_170898:
    // 0x170898: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x170898u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17089c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1708a0: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1708a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1708a4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1708a4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1708a8: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1708a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1708ac: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x1708acu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x1708b0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1708B0u;
    {
        const bool branch_taken_0x1708b0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1708B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708B0u;
            // 0x1708b4: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708b0) {
            ctx->pc = 0x170898u;
            goto label_170898;
        }
    }
    ctx->pc = 0x1708B8u;
    // 0x1708b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1708B8u;
    {
        const bool branch_taken_0x1708b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1708BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708B8u;
            // 0x1708bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1708b8) {
            ctx->pc = 0x1708E0u;
            goto label_1708e0;
        }
    }
    ctx->pc = 0x1708C0u;
label_1708c0:
    // 0x1708c0: 0x3c040022  lui         $a0, 0x22
    ctx->pc = 0x1708c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)34 << 16));
    // 0x1708c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1708c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708c8: 0xc04f1dc  jal         func_13C770
    ctx->pc = 0x1708C8u;
    SET_GPR_U32(ctx, 31, 0x1708D0u);
    ctx->pc = 0x1708CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1708C8u;
            // 0x1708cc: 0x24841300  addiu       $a0, $a0, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C770u;
    if (runtime->hasFunction(0x13C770u)) {
        auto targetFn = runtime->lookupFunction(0x13C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708D0u; }
        if (ctx->pc != 0x1708D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x13c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708D0u; }
        if (ctx->pc != 0x1708D0u) { return; }
    }
    ctx->pc = 0x1708D0u;
    // 0x1708d0: 0xc050700  jal         func_141C00
    ctx->pc = 0x1708D0u;
    SET_GPR_U32(ctx, 31, 0x1708D8u);
    ctx->pc = 0x1708D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1708D0u;
            // 0x1708d4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141C00u;
    if (runtime->hasFunction(0x141C00u)) {
        auto targetFn = runtime->lookupFunction(0x141C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708D8u; }
        if (ctx->pc != 0x1708D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsFree_0x141c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708D8u; }
        if (ctx->pc != 0x1708D8u) { return; }
    }
    ctx->pc = 0x1708D8u;
    // 0x1708d8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1708d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1708dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1708dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1708e0:
    // 0x1708e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1708e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1708e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1708e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1708e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1708e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1708ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1708ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1708f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1708f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1708f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1708F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1708F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1708F4u;
            // 0x1708f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170898u: goto label_170898;
            case 0x1708C0u: goto label_1708c0;
            case 0x1708E0u: goto label_1708e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1708FCu;
}
