#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _sendDataToIPU
// Address: 0x12c0d0 - 0x12c1d0
void _sendDataToIPU_0x12c0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_sendDataToIPU_0x12c0d0");
#endif

    ctx->pc = 0x12c0d0u;

    // 0x12c0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x12c0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12c0d4: 0x2484088f  addiu       $a0, $a0, 0x88F
    ctx->pc = 0x12c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2191));
    // 0x12c0d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12c0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12c0dc: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x12c0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x12c0e0: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x12c0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x12c0e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12c0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12c0e8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x12c0e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0ec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x12c0ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c0f0: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x12C0F0u;
    {
        const bool branch_taken_0x12c0f0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x12C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C0F0u;
            // 0x12c0f4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c0f0) {
            ctx->pc = 0x12C16Cu;
            goto label_12c16c;
        }
    }
    ctx->pc = 0x12C0F8u;
    // 0x12c0f8: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x12c0f8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x12c0fc: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x12c0fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x12c100: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x12c100u;
    SET_GPR_VEC(ctx, 9, PS2_POR(GPR_VEC(ctx, 9), _mm_cvtsi32_si128((int)65344u)));
    // 0x12c104: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x12c104u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 12), _mm_cvtsi32_si128((int)65535u)));
    // 0x12c108: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x12c108u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c10c: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_12c110:
    // 0x12c110: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x12c110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x12c114: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x12c114u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c118: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x12c118u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x12c11c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12c11cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c120: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x12c120u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x12c124: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x12c124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x12c128: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x12c128u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12c12c: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x12c12cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x12c130: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x12c130u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x12c134: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x12c134u;
    SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 11), GPR_VEC(ctx, 12)));
    // 0x12c138: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x12c138u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x12c13c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x12c13cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x12c140: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x12c140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x12c144: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x12c144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x12c148: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12c148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12c14c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x12c14cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x12c150: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12c150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12c154: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x12c154u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x12c158: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x12c158u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x12c15c: 0xf  sync
    ctx->pc = 0x12c15cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x12c160: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x12c160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x12c164: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x12C164u;
    {
        const bool branch_taken_0x12c164 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x12C168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C164u;
            // 0x12c168: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c164) {
            ctx->pc = 0x12C110u;
            goto label_12c110;
        }
    }
    ctx->pc = 0x12C16Cu;
label_12c16c:
    // 0x12c16c: 0xc04bbb8  jal         func_12EEE0
    ctx->pc = 0x12C16Cu;
    SET_GPR_U32(ctx, 31, 0x12C174u);
    ctx->pc = 0x12C170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C16Cu;
            // 0x12c170: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EEE0u;
    if (runtime->hasFunction(0x12EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x12EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C174u; }
        if (ctx->pc != 0x12C174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x12eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C174u; }
        if (ctx->pc != 0x12C174u) { return; }
    }
    ctx->pc = 0x12C174u;
    // 0x12c174: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12C174u;
    SET_GPR_U32(ctx, 31, 0x12C17Cu);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C17Cu; }
        if (ctx->pc != 0x12C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C17Cu; }
        if (ctx->pc != 0x12C17Cu) { return; }
    }
    ctx->pc = 0x12C17Cu;
    // 0x12c17c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x12c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x12c180: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12c180u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x12c184: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12c184u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x12c188: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x12c188u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46128u)));
    // 0x12c18c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x12c18cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x12c190: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c194: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x12c194u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x12c198: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x12c198u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46112u)));
    // 0x12c19c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12c19cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x12c1a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12c1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12c1a4: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x12c1a4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x12c1a8: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x12c1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x12c1ac: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12c1acu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12c1b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C1B0u;
    {
        const bool branch_taken_0x12c1b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1B0u;
            // 0x12c1b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1b0) {
            ctx->pc = 0x12C1C4u;
            goto label_12c1c4;
        }
    }
    ctx->pc = 0x12C1B8u;
    // 0x12c1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c1bc: 0x804de7a  j           func_1379E8
    ctx->pc = 0x12C1BCu;
    ctx->pc = 0x12C1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1BCu;
            // 0x12c1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EIntr_0x1379e8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x12C1C4u;
label_12c1c4:
    // 0x12c1c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12c1c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x12C1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C1C8u;
            // 0x12c1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C110u: goto label_12c110;
            case 0x12C16Cu: goto label_12c16c;
            case 0x12C1C4u: goto label_12c1c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C1D0u;
}
