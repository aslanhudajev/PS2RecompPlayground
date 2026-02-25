#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _ch3dmaCSC
// Address: 0x129c58 - 0x129da0
void _ch3dmaCSC_0x129c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_ch3dmaCSC_0x129c58");
#endif

    ctx->pc = 0x129c58u;

    // 0x129c58: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129c5c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x129c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x129c60: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x129c60u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)57360u)));
    // 0x129c64: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x129c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129c68: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x129c68u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129c6c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x129c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129c70: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x129c70u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45088u)));
    // 0x129c74: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x129c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x129c78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x129c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x129c7c: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x129c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x129c80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x129c80u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
    // 0x129c84: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x129C84u;
    {
        const bool branch_taken_0x129c84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x129C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C84u;
            // 0x129c88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c84) {
            ctx->pc = 0x129CA4u;
            goto label_129ca4;
        }
    }
    ctx->pc = 0x129C8Cu;
    // 0x129c8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x129c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x129c90: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x129c90u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45056u)));
    // 0x129c94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x129c94u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x129c98: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x129c98u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)256u)));
    // 0x129c9c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x129C9Cu;
    {
        const bool branch_taken_0x129c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C9Cu;
            // 0x129ca0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129c9c) {
            ctx->pc = 0x129CB8u;
            goto label_129cb8;
        }
    }
    ctx->pc = 0x129CA4u;
label_129ca4:
    // 0x129ca4: 0xad220004  sw          $v0, 0x4($t1)
    ctx->pc = 0x129ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 2));
    // 0x129ca8: 0xf  sync
    ctx->pc = 0x129ca8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x129cac: 0x42000038  ei
    ctx->pc = 0x129cacu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x129cb0: 0x3e00008  jr          $ra
    ctx->pc = 0x129CB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129CB0u;
            // 0x129cb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129CA4u: goto label_129ca4;
            case 0x129CB8u: goto label_129cb8;
            case 0x129D2Cu: goto label_129d2c;
            case 0x129D90u: goto label_129d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129CB8u;
label_129cb8:
    // 0x129cb8: 0x8d230010  lw          $v1, 0x10($t1)
    ctx->pc = 0x129cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x129cbc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x129cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x129cc0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x129cc4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x129cc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x129cc8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x129CC8u;
    {
        const bool branch_taken_0x129cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129CC8u;
            // 0x129ccc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129cc8) {
            ctx->pc = 0x129D2Cu;
            goto label_129d2c;
        }
    }
    ctx->pc = 0x129CD0u;
    // 0x129cd0: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x129cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x129cd4: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x129cd4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)45072u)));
    // 0x129cd8: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x129cd8u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x129cdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x129cdcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129ce0: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x129ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x129ce4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x129ce4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x129ce8: 0xac24b020  sw          $a0, -0x4FE0($at)
    ctx->pc = 0x129ce8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 4)); // MMIO: 0x1000b020
    // 0x129cec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129cf0: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x129cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x129cf4: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x129cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x129cf8: 0xac25b000  sw          $a1, -0x5000($at)
    ctx->pc = 0x129cf8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 5)); // MMIO: 0x1000b000
    // 0x129cfc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x129cfcu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8192u)));
    // 0x129d00: 0x344203ff  ori         $v0, $v0, 0x3FF
    ctx->pc = 0x129d00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1023u)));
    // 0x129d04: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x129d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x129d08: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x129d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
    // 0x129d0c: 0x3484fc00  ori         $a0, $a0, 0xFC00
    ctx->pc = 0x129d0cu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)64512u)));
    // 0x129d10: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x129d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x129d14: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x129d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x129d18: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x129d18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x129d1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x129d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x129d20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x129d20u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x129d24: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x129D24u;
    {
        const bool branch_taken_0x129d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D24u;
            // 0x129d28: 0xad22000c  sw          $v0, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d24) {
            ctx->pc = 0x129D90u;
            goto label_129d90;
        }
    }
    ctx->pc = 0x129D2Cu;
label_129d2c:
    // 0x129d2c: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x129d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x129d30: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x129D30u;
    {
        const bool branch_taken_0x129d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x129D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D30u;
            // 0x129d34: 0x24080100  addiu       $t0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129d30) {
            ctx->pc = 0x129D90u;
            goto label_129d90;
        }
    }
    ctx->pc = 0x129D38u;
    // 0x129d38: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x129d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x129d3c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x129d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129d40: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x129d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x129d44: 0x3484b010  ori         $a0, $a0, 0xB010
    ctx->pc = 0x129d44u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45072u)));
    // 0x129d48: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x129d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x129d4c: 0x8d26000c  lw          $a2, 0xC($t1)
    ctx->pc = 0x129d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x129d50: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x129d50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x129d54: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x129d54u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129d58: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x129d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x129d5c: 0xad230008  sw          $v1, 0x8($t1)
    ctx->pc = 0x129d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 3));
    // 0x129d60: 0x3c077000  lui         $a3, 0x7000
    ctx->pc = 0x129d60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)28672 << 16));
    // 0x129d64: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x129d64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x129d68: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x129d68u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)8192u)));
    // 0x129d6c: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x129d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x129d70: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x129d70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x129d74: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x129d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x129d78: 0xac22b020  sw          $v0, -0x4FE0($at)
    ctx->pc = 0x129d78u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946848), GPR_U32(ctx, 2)); // MMIO: 0x1000b020
    // 0x129d7c: 0x3c011001  lui         $at, 0x1001
    ctx->pc = 0x129d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4097 << 16));
    // 0x129d80: 0xac28b000  sw          $t0, -0x5000($at)
    ctx->pc = 0x129d80u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 4294946816), GPR_U32(ctx, 8)); // MMIO: 0x1000b000
    // 0x129d84: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x129d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x129d88: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x129d88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x129d8c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x129d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_129d90:
    // 0x129d90: 0xf  sync
    ctx->pc = 0x129d90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x129d94: 0x42000038  ei
    ctx->pc = 0x129d94u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x129d98: 0x3e00008  jr          $ra
    ctx->pc = 0x129D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129D98u;
            // 0x129d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129CA4u: goto label_129ca4;
            case 0x129CB8u: goto label_129cb8;
            case 0x129D2Cu: goto label_129d2c;
            case 0x129D90u: goto label_129d90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129DA0u;
}
