#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _doCSC
// Address: 0x129b30 - 0x129c58
void _doCSC_0x129b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_doCSC_0x129b30");
#endif

    ctx->pc = 0x129b30u;

    // 0x129b30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x129b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x129b34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129b38: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x129b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x129b3c: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x129b3cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x129b40: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x129b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x129b44: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x129b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b48: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x129b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x129b4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x129b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129b50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x129b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x129b54: 0x138980  sll         $s1, $s3, 6
    ctx->pc = 0x129b54u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x129b58: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x129b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x129b5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x129b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_129b60:
    // 0x129b60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x129b64: 0x0  nop
    ctx->pc = 0x129b64u;
    // NOP
    // 0x129b68: 0x0  nop
    ctx->pc = 0x129b68u;
    // NOP
    // 0x129b6c: 0x0  nop
    ctx->pc = 0x129b6cu;
    // NOP
    // 0x129b70: 0x0  nop
    ctx->pc = 0x129b70u;
    // NOP
    // 0x129b74: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129B74u;
    {
        const bool branch_taken_0x129b74 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129b74) {
            ctx->pc = 0x129B60u;
            goto label_129b60;
        }
    }
    ctx->pc = 0x129B7Cu;
    // 0x129b7c: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x129B7Cu;
    SET_GPR_U32(ctx, 31, 0x129B84u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B84u; }
        if (ctx->pc != 0x129B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129B84u; }
        if (ctx->pc != 0x129B84u) { return; }
    }
    ctx->pc = 0x129B84u;
    // 0x129b84: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x129b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x129b88: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x129b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x129b8c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x129b8cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x129b90: 0x34a5b010  ori         $a1, $a1, 0xB010
    ctx->pc = 0x129b90u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)45072u)));
    // 0x129b94: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x129b94u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x129b98: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x129b98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x129b9c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x129b9cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x129ba0: 0x3484b020  ori         $a0, $a0, 0xB020
    ctx->pc = 0x129ba0u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)45088u)));
    // 0x129ba4: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x129ba4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17)); // MMIO: 0x10000000
    // 0x129ba8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129bac: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x129bacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45056u)));
    // 0x129bb0: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x129bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x129bb4: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x129bb4u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x129bb8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129BB8u;
    {
        const bool branch_taken_0x129bb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x129bb8) {
            ctx->pc = 0x129BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129BB8u;
            // 0x129bbc: 0x3c057000  lui         $a1, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129BCCu;
            goto label_129bcc;
        }
    }
    ctx->pc = 0x129BC0u;
    // 0x129bc0: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x129BC0u;
    SET_GPR_U32(ctx, 31, 0x129BC8u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BC8u; }
        if (ctx->pc != 0x129BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BC8u; }
        if (ctx->pc != 0x129BC8u) { return; }
    }
    ctx->pc = 0x129BC8u;
    // 0x129bc8: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x129bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
label_129bcc:
    // 0x129bcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x129bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129bd0: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x129BD0u;
    SET_GPR_U32(ctx, 31, 0x129BD8u);
    ctx->pc = 0x129BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129BD0u;
            // 0x129bd4: 0x2652825  or          $a1, $s3, $a1 (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 19), GPR_VEC(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BD8u; }
        if (ctx->pc != 0x129BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BD8u; }
        if (ctx->pc != 0x129BD8u) { return; }
    }
    ctx->pc = 0x129BD8u;
    // 0x129bd8: 0x8e440858  lw          $a0, 0x858($s2)
    ctx->pc = 0x129bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2136)));
    // 0x129bdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x129bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x129be0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x129be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x129be4: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x129BE4u;
    SET_GPR_U32(ctx, 31, 0x129BECu);
    ctx->pc = 0x129BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129BE4u;
            // 0x129be8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BECu; }
        if (ctx->pc != 0x129BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129BECu; }
        if (ctx->pc != 0x129BECu) { return; }
    }
    ctx->pc = 0x129BECu;
    // 0x129bec: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129bf0: 0x3463b000  ori         $v1, $v1, 0xB000
    ctx->pc = 0x129bf0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)45056u)));
    // 0x129bf4: 0x0  nop
    ctx->pc = 0x129bf4u;
    // NOP
label_129bf8:
    // 0x129bf8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x129bfc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x129bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x129c00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x129c00u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
    // 0x129c04: 0x0  nop
    ctx->pc = 0x129c04u;
    // NOP
    // 0x129c08: 0x0  nop
    ctx->pc = 0x129c08u;
    // NOP
    // 0x129c0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129C0Cu;
    {
        const bool branch_taken_0x129c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129c0c) {
            ctx->pc = 0x129BF8u;
            goto label_129bf8;
        }
    }
    ctx->pc = 0x129C14u;
    // 0x129c14: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x129c14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x129c18: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x129c18u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)8208u)));
    // 0x129c1c: 0x0  nop
    ctx->pc = 0x129c1cu;
    // NOP
label_129c20:
    // 0x129c20: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x129c20u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
    // 0x129c24: 0x0  nop
    ctx->pc = 0x129c24u;
    // NOP
    // 0x129c28: 0x0  nop
    ctx->pc = 0x129c28u;
    // NOP
    // 0x129c2c: 0x0  nop
    ctx->pc = 0x129c2cu;
    // NOP
    // 0x129c30: 0x0  nop
    ctx->pc = 0x129c30u;
    // NOP
    // 0x129c34: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x129C34u;
    {
        const bool branch_taken_0x129c34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x129c34) {
            ctx->pc = 0x129C20u;
            goto label_129c20;
        }
    }
    ctx->pc = 0x129C3Cu;
    // 0x129c3c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x129c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x129c40: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x129c40u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x129c44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x129c44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x129c48: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x129c48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129c4c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x129c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129c50: 0x3e00008  jr          $ra
    ctx->pc = 0x129C50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129C50u;
            // 0x129c54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129B60u: goto label_129b60;
            case 0x129BCCu: goto label_129bcc;
            case 0x129BF8u: goto label_129bf8;
            case 0x129C20u: goto label_129c20;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129C58u;
}
