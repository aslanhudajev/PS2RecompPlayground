#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: SetDebugHandler
// Address: 0x137178 - 0x1371fc
void SetDebugHandler_0x137178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("SetDebugHandler_0x137178");
#endif

    ctx->pc = 0x137178u;

    // 0x137178: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x137178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13717c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13717cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x137180: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x137180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x137184: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x137184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x137188: 0x2c82000d  sltiu       $v0, $a0, 0xD
    ctx->pc = 0x137188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x13718c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13718Cu;
    {
        const bool branch_taken_0x13718c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13718Cu;
            // 0x137190: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13718c) {
            ctx->pc = 0x1371A0u;
            goto label_1371a0;
        }
    }
    ctx->pc = 0x137194u;
    // 0x137194: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x137194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x137198: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x137198u;
    {
        const bool branch_taken_0x137198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13719Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x137198u;
            // 0x13719c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137198) {
            ctx->pc = 0x1371ECu;
            goto label_1371ec;
        }
    }
    ctx->pc = 0x1371A0u;
label_1371a0:
    // 0x1371a0: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x1371a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x1371a4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1371a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1371a8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x1371a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x1371ac: 0x2c840003  sltiu       $a0, $a0, 0x3
    ctx->pc = 0x1371acu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1371b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1371b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1371b4: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x1371b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1371b8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1371B8u;
    {
        const bool branch_taken_0x1371b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371B8u;
            // 0x1371bc: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371b8) {
            ctx->pc = 0x1371D8u;
            goto label_1371d8;
        }
    }
    ctx->pc = 0x1371C0u;
    // 0x1371c0: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1371c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1371c4: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1371c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371c8: 0xc04ba44  jal         func_12E910
    ctx->pc = 0x1371C8u;
    SET_GPR_U32(ctx, 31, 0x1371D0u);
    ctx->pc = 0x1371CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1371C8u;
            // 0x1371cc: 0x24a57880  addiu       $a1, $a1, 0x7880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E910u;
    if (runtime->hasFunction(0x12E910u)) {
        auto targetFn = runtime->lookupFunction(0x12E910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1371D0u; }
        if (ctx->pc != 0x1371D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVTLBRefillHandler_0x12e910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1371D0u; }
        if (ctx->pc != 0x1371D0u) { return; }
    }
    ctx->pc = 0x1371D0u;
    // 0x1371d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1371D0u;
    {
        const bool branch_taken_0x1371d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1371D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371D0u;
            // 0x1371d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1371d0) {
            ctx->pc = 0x1371ECu;
            goto label_1371ec;
        }
    }
    ctx->pc = 0x1371D8u;
label_1371d8:
    // 0x1371d8: 0x3c050013  lui         $a1, 0x13
    ctx->pc = 0x1371d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)19 << 16));
    // 0x1371dc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1371dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1371e0: 0xc04ba48  jal         func_12E920
    ctx->pc = 0x1371E0u;
    SET_GPR_U32(ctx, 31, 0x1371E8u);
    ctx->pc = 0x1371E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1371E0u;
            // 0x1371e4: 0x24a57880  addiu       $a1, $a1, 0x7880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E920u;
    if (runtime->hasFunction(0x12E920u)) {
        auto targetFn = runtime->lookupFunction(0x12E920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1371E8u; }
        if (ctx->pc != 0x1371E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVCommonHandler_0x12e920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1371E8u; }
        if (ctx->pc != 0x1371E8u) { return; }
    }
    ctx->pc = 0x1371E8u;
    // 0x1371e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1371e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1371ec:
    // 0x1371ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1371ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1371f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1371f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1371f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1371F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1371F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1371F4u;
            // 0x1371f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1371A0u: goto label_1371a0;
            case 0x1371D8u: goto label_1371d8;
            case 0x1371ECu: goto label_1371ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1371FCu;
}
