#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _setDefaultQM
// Address: 0x12c6a0 - 0x12c780
void _setDefaultQM_0x12c6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_setDefaultQM_0x12c6a0");
#endif

    ctx->pc = 0x12c6a0u;

    // 0x12c6a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x12c6a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x12c6a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x12c6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12c6a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x12c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x12c6ac: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x12c6acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x12c6b0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12c6b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6b4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12c6b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12c6b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c6b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6bc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12c6bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12c6c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x12c6c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12c6c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6c8: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x12c6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x12c6cc: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x12C6CCu;
    SET_GPR_U32(ctx, 31, 0x12C6D4u);
    ctx->pc = 0x12C6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6CCu;
            // 0x12c6d0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6D4u; }
        if (ctx->pc != 0x12C6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6D4u; }
        if (ctx->pc != 0x12C6D4u) { return; }
    }
    ctx->pc = 0x12C6D4u;
    // 0x12c6d4: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C6D4u;
    SET_GPR_U32(ctx, 31, 0x12C6DCu);
    ctx->pc = 0x12C6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6D4u;
            // 0x12c6d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6DCu; }
        if (ctx->pc != 0x12C6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6DCu; }
        if (ctx->pc != 0x12C6DCu) { return; }
    }
    ctx->pc = 0x12C6DCu;
    // 0x12c6dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12c6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12c6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c6e4: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x12c6e4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8192u)));
    // 0x12c6e8: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C6E8u;
    SET_GPR_U32(ctx, 31, 0x12C6F0u);
    ctx->pc = 0x12C6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C6E8u;
            // 0x12c6ec: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6F0u; }
        if (ctx->pc != 0x12C6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6F0u; }
        if (ctx->pc != 0x12C6F0u) { return; }
    }
    ctx->pc = 0x12C6F0u;
    // 0x12c6f0: 0xc04de68  jal         func_1379A0
    ctx->pc = 0x12C6F0u;
    SET_GPR_U32(ctx, 31, 0x12C6F8u);
    ctx->pc = 0x1379A0u;
    if (runtime->hasFunction(0x1379A0u)) {
        auto targetFn = runtime->lookupFunction(0x1379A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6F8u; }
        if (ctx->pc != 0x12C6F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DIntr_0x1379a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C6F8u; }
        if (ctx->pc != 0x12C6F8u) { return; }
    }
    ctx->pc = 0x12C6F8u;
    // 0x12c6f8: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x12c6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x12c6fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12c6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12c700: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x12c700u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x12c704: 0x3484b410  ori         $a0, $a0, 0xB410
    ctx->pc = 0x12c704u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)46096u)));
    // 0x12c708: 0x2038024  and         $s0, $s0, $v1
    ctx->pc = 0x12c708u;
    SET_GPR_VEC(ctx, 16, PS2_PAND(GPR_VEC(ctx, 16), GPR_VEC(ctx, 3)));
    // 0x12c70c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x12c70cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x12c710: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x12c710u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16)); // MMIO: 0x10000000
    // 0x12c714: 0x34a5b420  ori         $a1, $a1, 0xB420
    ctx->pc = 0x12c714u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 5), _mm_cvtsi32_si128((int)46112u)));
    // 0x12c718: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x12c718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x12c71c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x12c71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x12c720: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x12c720u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12c724: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x12c724u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)46080u)));
    // 0x12c728: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x12c728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x12c72c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x12c72cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x12c730: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C730u;
    {
        const bool branch_taken_0x12c730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c730) {
            ctx->pc = 0x12C734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12C730u;
            // 0x12c734: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12C744u;
            goto label_12c744;
        }
    }
    ctx->pc = 0x12C738u;
    // 0x12c738: 0xc04de7a  jal         func_1379E8
    ctx->pc = 0x12C738u;
    SET_GPR_U32(ctx, 31, 0x12C740u);
    ctx->pc = 0x1379E8u;
    if (runtime->hasFunction(0x1379E8u)) {
        auto targetFn = runtime->lookupFunction(0x1379E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C740u; }
        if (ctx->pc != 0x12C740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EIntr_0x1379e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C740u; }
        if (ctx->pc != 0x12C740u) { return; }
    }
    ctx->pc = 0x12C740u;
    // 0x12c740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12c740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12c744:
    // 0x12c744: 0xc049f68  jal         func_127DA0
    ctx->pc = 0x12C744u;
    SET_GPR_U32(ctx, 31, 0x12C74Cu);
    ctx->pc = 0x12C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C744u;
            // 0x12c748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DA0u;
    if (runtime->hasFunction(0x127DA0u)) {
        auto targetFn = runtime->lookupFunction(0x127DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C74Cu; }
        if (ctx->pc != 0x12C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x127da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C74Cu; }
        if (ctx->pc != 0x12C74Cu) { return; }
    }
    ctx->pc = 0x12C74Cu;
    // 0x12c74c: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x12C74Cu;
    SET_GPR_U32(ctx, 31, 0x12C754u);
    ctx->pc = 0x12C750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C74Cu;
            // 0x12c750: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C754u; }
        if (ctx->pc != 0x12C754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C754u; }
        if (ctx->pc != 0x12C754u) { return; }
    }
    ctx->pc = 0x12C754u;
    // 0x12c754: 0x8e240858  lw          $a0, 0x858($s1)
    ctx->pc = 0x12c754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2136)));
    // 0x12c758: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12c758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12c75c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x12c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12c760: 0xc04ae00  jal         func_12B800
    ctx->pc = 0x12C760u;
    SET_GPR_U32(ctx, 31, 0x12C768u);
    ctx->pc = 0x12C764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12C760u;
            // 0x12c764: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B800u;
    if (runtime->hasFunction(0x12B800u)) {
        auto targetFn = runtime->lookupFunction(0x12B800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C768u; }
        if (ctx->pc != 0x12C768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _dispatchMpegCallback_0x12b800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12C768u; }
        if (ctx->pc != 0x12C768u) { return; }
    }
    ctx->pc = 0x12C768u;
    // 0x12c768: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12c768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c76c: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x12c76cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c770: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x12c770u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c774: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12c774u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c778: 0x3e00008  jr          $ra
    ctx->pc = 0x12C778u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12C778u;
            // 0x12c77c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C744u: goto label_12c744;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12C780u;
}
