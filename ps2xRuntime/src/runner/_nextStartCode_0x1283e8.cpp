#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _nextStartCode
// Address: 0x1283e8 - 0x128464
void _nextStartCode_0x1283e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_nextStartCode_0x1283e8");
#endif

    ctx->pc = 0x1283e8u;

    // 0x1283e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1283e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1283ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1283ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1283f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1283f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1283f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1283f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1283f8: 0xc049f74  jal         func_127DD0
    ctx->pc = 0x1283F8u;
    SET_GPR_U32(ctx, 31, 0x128400u);
    ctx->pc = 0x1283FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1283F8u;
            // 0x1283fc: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127DD0u;
    if (runtime->hasFunction(0x127DD0u)) {
        auto targetFn = runtime->lookupFunction(0x127DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128400u; }
        if (ctx->pc != 0x128400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x127dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128400u; }
        if (ctx->pc != 0x128400u) { return; }
    }
    ctx->pc = 0x128400u;
    // 0x128400: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x128400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x128404: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x128404u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)8224u)));
    // 0x128408: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x128408u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
    // 0x12840c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x12840cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x128410: 0x31823  negu        $v1, $v1
    ctx->pc = 0x128410u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x128414: 0x30650007  andi        $a1, $v1, 0x7
    ctx->pc = 0x128414u;
    SET_GPR_VEC(ctx, 5, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)7u)));
    // 0x128418: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x128418u;
    {
        const bool branch_taken_0x128418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128418u;
            // 0x12841c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128418) {
            ctx->pc = 0x128438u;
            goto label_128438;
        }
    }
    ctx->pc = 0x128420u;
    // 0x128420: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x128420u;
    SET_GPR_U32(ctx, 31, 0x128428u);
    ctx->pc = 0x128424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x128420u;
            // 0x128424: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128428u; }
        if (ctx->pc != 0x128428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128428u; }
        if (ctx->pc != 0x128428u) { return; }
    }
    ctx->pc = 0x128428u;
    // 0x128428: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x128428u;
    {
        const bool branch_taken_0x128428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12842Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128428u;
            // 0x12842c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128428) {
            ctx->pc = 0x128438u;
            goto label_128438;
        }
    }
    ctx->pc = 0x128430u;
label_128430:
    // 0x128430: 0xc04a06a  jal         func_1281A8
    ctx->pc = 0x128430u;
    SET_GPR_U32(ctx, 31, 0x128438u);
    ctx->pc = 0x1281A8u;
    if (runtime->hasFunction(0x1281A8u)) {
        auto targetFn = runtime->lookupFunction(0x1281A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128438u; }
        if (ctx->pc != 0x128438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _flushBuf_0x1281a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128438u; }
        if (ctx->pc != 0x128438u) { return; }
    }
    ctx->pc = 0x128438u;
label_128438:
    // 0x128438: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12843c: 0xc04a028  jal         func_1280A0
    ctx->pc = 0x12843Cu;
    SET_GPR_U32(ctx, 31, 0x128444u);
    ctx->pc = 0x128440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12843Cu;
            // 0x128440: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1280A0u;
    if (runtime->hasFunction(0x1280A0u)) {
        auto targetFn = runtime->lookupFunction(0x1280A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128444u; }
        if (ctx->pc != 0x128444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        _peepBit_0x1280a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x128444u; }
        if (ctx->pc != 0x128444u) { return; }
    }
    ctx->pc = 0x128444u;
    // 0x128444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x128444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128448: 0x1451fff9  bne         $v0, $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x128448u;
    {
        const bool branch_taken_0x128448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x12844Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x128448u;
            // 0x12844c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128448) {
            ctx->pc = 0x128430u;
            goto label_128430;
        }
    }
    ctx->pc = 0x128450u;
    // 0x128450: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x128450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x128454: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x128454u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12845c: 0x3e00008  jr          $ra
    ctx->pc = 0x12845Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12845Cu;
            // 0x128460: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x128430u: goto label_128430;
            case 0x128438u: goto label_128438;
            default: break;
        }
        return;
    }
    ctx->pc = 0x128464u;
}
