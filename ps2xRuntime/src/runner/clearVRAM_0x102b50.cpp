#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: clearVRAM
// Address: 0x102b50 - 0x102cb4
void clearVRAM_0x102b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("clearVRAM_0x102b50");
#endif

    ctx->pc = 0x102b50u;

    // 0x102b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x102b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x102b54: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x102b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b58: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x102b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x102b5c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x102b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x102b60: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x102b60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x102b64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x102b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x102b68: 0x36524006  ori         $s2, $s2, 0x4006
    ctx->pc = 0x102b68u;
    SET_GPR_VEC(ctx, 18, PS2_POR(GPR_VEC(ctx, 18), _mm_cvtsi32_si128((int)16390u)));
    // 0x102b6c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x102b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x102b70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x102b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b74: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102b78: 0x3c130800  lui         $s3, 0x800
    ctx->pc = 0x102b78u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2048 << 16));
    // 0x102b7c: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x102b7cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x102b80: 0x3673c000  ori         $s3, $s3, 0xC000
    ctx->pc = 0x102b80u;
    SET_GPR_VEC(ctx, 19, PS2_POR(GPR_VEC(ctx, 19), _mm_cvtsi32_si128((int)49152u)));
    // 0x102b84: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x102b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
label_102b88:
    // 0x102b88: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x102b88u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32768u)));
    // 0x102b8c: 0x318fc  dsll32      $v1, $v1, 3
    ctx->pc = 0x102b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 3));
    // 0x102b90: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x102b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x102b94: 0x836025  or          $t4, $a0, $v1
    ctx->pc = 0x102b94u;
    SET_GPR_VEC(ctx, 12, PS2_POR(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x102b98: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x102b98u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x102b9c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x102b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x102ba0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x102ba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x102ba4: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x102ba4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)4u)));
    // 0x102ba8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x102ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x102bac: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x102bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x102bb0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x102bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x102bb4: 0x24070051  addiu       $a3, $zero, 0x51
    ctx->pc = 0x102bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x102bb8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x102bbc: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x102bbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x102bc0: 0x35080100  ori         $t0, $t0, 0x100
    ctx->pc = 0x102bc0u;
    SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 8), _mm_cvtsi32_si128((int)256u)));
    // 0x102bc4: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x102bc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x102bc8: 0x240a0053  addiu       $t2, $zero, 0x53
    ctx->pc = 0x102bc8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x102bcc: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x102bccu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x102bd0: 0xfc430018  sd          $v1, 0x18($v0)
    ctx->pc = 0x102bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
    // 0x102bd4: 0x26100400  addiu       $s0, $s0, 0x400
    ctx->pc = 0x102bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1024));
    // 0x102bd8: 0xfc4c0020  sd          $t4, 0x20($v0)
    ctx->pc = 0x102bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 12));
    // 0x102bdc: 0x25710001  addiu       $s1, $t3, 0x1
    ctx->pc = 0x102bdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x102be0: 0xfc460028  sd          $a2, 0x28($v0)
    ctx->pc = 0x102be0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 6));
    // 0x102be4: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x102be4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x102be8: 0xfc470038  sd          $a3, 0x38($v0)
    ctx->pc = 0x102be8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 7));
    // 0x102bec: 0x24043fff  addiu       $a0, $zero, 0x3FFF
    ctx->pc = 0x102becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
    // 0x102bf0: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x102bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x102bf4: 0xfc490048  sd          $t1, 0x48($v0)
    ctx->pc = 0x102bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 9));
    // 0x102bf8: 0xfc4a0058  sd          $t2, 0x58($v0)
    ctx->pc = 0x102bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 88), GPR_U64(ctx, 10));
    // 0x102bfc: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x102bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x102c00: 0xfc400030  sd          $zero, 0x30($v0)
    ctx->pc = 0x102c00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 0));
    // 0x102c04: 0xfc400050  sd          $zero, 0x50($v0)
    ctx->pc = 0x102c04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 0));
    // 0x102c08: 0xfc530060  sd          $s3, 0x60($v0)
    ctx->pc = 0x102c08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 96), GPR_U64(ctx, 19));
    // 0x102c0c: 0xfc400068  sd          $zero, 0x68($v0)
    ctx->pc = 0x102c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 104), GPR_U64(ctx, 0));
label_102c10:
    // 0x102c10: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x102c10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x102c14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x102c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x102c18: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x102c18u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x102c1c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x102c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x102c20: 0x0  nop
    ctx->pc = 0x102c20u;
    // NOP
    // 0x102c24: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102C24u;
    {
        const bool branch_taken_0x102c24 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x102c24) {
            ctx->pc = 0x102C10u;
            goto label_102c10;
        }
    }
    ctx->pc = 0x102C2Cu;
    // 0x102c2c: 0xc043948  jal         func_10E520
    ctx->pc = 0x102C2Cu;
    SET_GPR_U32(ctx, 31, 0x102C34u);
    ctx->pc = 0x102C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102C2Cu;
            // 0x102c30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C34u; }
        if (ctx->pc != 0x102C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C34u; }
        if (ctx->pc != 0x102C34u) { return; }
    }
    ctx->pc = 0x102C34u;
    // 0x102c34: 0x8f8282b8  lw          $v0, -0x7D48($gp)
    ctx->pc = 0x102c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935224)));
    // 0x102c38: 0x3c050fff  lui         $a1, 0xFFF
    ctx->pc = 0x102c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4095 << 16));
    // 0x102c3c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x102c3cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)65535u)));
    // 0x102c40: 0x8f848490  lw          $a0, -0x7B70($gp)
    ctx->pc = 0x102c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x102c44: 0xc0435d6  jal         func_10D758
    ctx->pc = 0x102C44u;
    SET_GPR_U32(ctx, 31, 0x102C4Cu);
    ctx->pc = 0x102C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102C44u;
            // 0x102c48: 0x452824  and         $a1, $v0, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D758u;
    if (runtime->hasFunction(0x10D758u)) {
        auto targetFn = runtime->lookupFunction(0x10D758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C4Cu; }
        if (ctx->pc != 0x102C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceDmaSend_0x10d758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C4Cu; }
        if (ctx->pc != 0x102C4Cu) { return; }
    }
    ctx->pc = 0x102C4Cu;
    // 0x102c4c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x102c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x102c50: 0x3463a000  ori         $v1, $v1, 0xA000
    ctx->pc = 0x102c50u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)40960u)));
    // 0x102c54: 0x0  nop
    ctx->pc = 0x102c54u;
    // NOP
label_102c58:
    // 0x102c58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x102c58u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x102c5c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x102c5cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)256u)));
    // 0x102c60: 0x0  nop
    ctx->pc = 0x102c60u;
    // NOP
    // 0x102c64: 0x0  nop
    ctx->pc = 0x102c64u;
    // NOP
    // 0x102c68: 0x0  nop
    ctx->pc = 0x102c68u;
    // NOP
    // 0x102c6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x102C6Cu;
    {
        const bool branch_taken_0x102c6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c6c) {
            ctx->pc = 0x102C58u;
            goto label_102c58;
        }
    }
    ctx->pc = 0x102C74u;
    // 0x102c74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x102c74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c78: 0xc043322  jal         func_10CC88
    ctx->pc = 0x102C78u;
    SET_GPR_U32(ctx, 31, 0x102C80u);
    ctx->pc = 0x102C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102C78u;
            // 0x102c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC88u;
    if (runtime->hasFunction(0x10CC88u)) {
        auto targetFn = runtime->lookupFunction(0x10CC88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C80u; }
        if (ctx->pc != 0x102C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGsSyncPath_0x10cc88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C80u; }
        if (ctx->pc != 0x102C80u) { return; }
    }
    ctx->pc = 0x102C80u;
    // 0x102c80: 0xc043948  jal         func_10E520
    ctx->pc = 0x102C80u;
    SET_GPR_U32(ctx, 31, 0x102C88u);
    ctx->pc = 0x102C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102C80u;
            // 0x102c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E520u;
    if (runtime->hasFunction(0x10E520u)) {
        auto targetFn = runtime->lookupFunction(0x10E520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C88u; }
        if (ctx->pc != 0x102C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FlushCache_0x10e520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102C88u; }
        if (ctx->pc != 0x102C88u) { return; }
    }
    ctx->pc = 0x102C88u;
    // 0x102c88: 0x220582d  daddu       $t3, $s1, $zero
    ctx->pc = 0x102c88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102c8c: 0x29620010  slti        $v0, $t3, 0x10
    ctx->pc = 0x102c8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x102c90: 0x5440ffbd  bnel        $v0, $zero, . + 4 + (-0x43 << 2)
    ctx->pc = 0x102C90u;
    {
        const bool branch_taken_0x102c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102c90) {
            ctx->pc = 0x102C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x102C90u;
            // 0x102c94: 0x10203c  dsll32      $a0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x102B88u;
            goto label_102b88;
        }
    }
    ctx->pc = 0x102C98u;
    // 0x102c98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x102c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x102c9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x102c9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102ca0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x102ca0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102ca4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102ca4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102ca8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102ca8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102cac: 0x3e00008  jr          $ra
    ctx->pc = 0x102CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102CACu;
            // 0x102cb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x102B88u: goto label_102b88;
            case 0x102C10u: goto label_102c10;
            case 0x102C58u: goto label_102c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102CB4u;
}
