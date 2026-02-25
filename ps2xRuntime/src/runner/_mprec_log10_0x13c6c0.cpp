#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _mprec_log10
// Address: 0x13c6c0 - 0x13c72c
void _mprec_log10_0x13c6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_mprec_log10_0x13c6c0");
#endif

    ctx->pc = 0x13c6c0u;

    // 0x13c6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13c6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13c6c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13c6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13c6c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c6c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c6cc: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x13c6ccu;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x13c6d0: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x13c6d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x13c6d4: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x13c6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x13c6d8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13C6D8u;
    {
        const bool branch_taken_0x13c6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6D8u;
            // 0x13c6dc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6d8) {
            ctx->pc = 0x13C6F8u;
            goto label_13c6f8;
        }
    }
    ctx->pc = 0x13C6E0u;
    // 0x13c6e0: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x13c6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x13c6e4: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x13c6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x13c6e8: 0x2442fb98  addiu       $v0, $v0, -0x468
    ctx->pc = 0x13c6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966168));
    // 0x13c6ec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13c6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c6f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13C6F0u;
    {
        const bool branch_taken_0x13c6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6F0u;
            // 0x13c6f4: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6f0) {
            ctx->pc = 0x13C71Cu;
            goto label_13c71c;
        }
    }
    ctx->pc = 0x13C6F8u;
label_13c6f8:
    // 0x13c6f8: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13C6F8u;
    {
        const bool branch_taken_0x13c6f8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x13C6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C6F8u;
            // 0x13c6fc: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c6f8) {
            ctx->pc = 0x13C71Cu;
            goto label_13c71c;
        }
    }
    ctx->pc = 0x13C700u;
label_13c700:
    // 0x13c700: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x13c700u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x13c704: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x13c704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x13c708: 0xc040880  jal         func_102200
    ctx->pc = 0x13C708u;
    SET_GPR_U32(ctx, 31, 0x13C710u);
    ctx->pc = 0x13C70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13C708u;
            // 0x13c70c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102200u;
    if (runtime->hasFunction(0x102200u)) {
        auto targetFn = runtime->lookupFunction(0x102200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C710u; }
        if (ctx->pc != 0x13C710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x102200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13C710u; }
        if (ctx->pc != 0x13C710u) { return; }
    }
    ctx->pc = 0x13C710u;
    // 0x13c710: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x13C710u;
    {
        const bool branch_taken_0x13c710 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x13C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C710u;
            // 0x13c714: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c710) {
            ctx->pc = 0x13C700u;
            goto label_13c700;
        }
    }
    ctx->pc = 0x13C718u;
    // 0x13c718: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x13c718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_13c71c:
    // 0x13c71c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13c71cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13c720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c724: 0x3e00008  jr          $ra
    ctx->pc = 0x13C724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13C724u;
            // 0x13c728: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13C6F8u: goto label_13c6f8;
            case 0x13C700u: goto label_13c700;
            case 0x13C71Cu: goto label_13c71c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13C72Cu;
}
