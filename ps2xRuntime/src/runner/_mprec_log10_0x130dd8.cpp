#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _mprec_log10
// Address: 0x130dd8 - 0x130e44
void _mprec_log10_0x130dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130dd8u;

    // 0x130dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x130dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x130ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130de0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130de0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130de4: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x130de4u;
    SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65472u)));
    // 0x130de8: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x130de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x130dec: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x130decu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x130df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130DF0u;
    {
        const bool branch_taken_0x130df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130DF0u;
            // 0x130df4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130df0) {
            ctx->pc = 0x130E10u;
            goto label_130e10;
        }
    }
    ctx->pc = 0x130DF8u;
    // 0x130df8: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x130df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x130dfc: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x130dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x130e00: 0x244259a0  addiu       $v0, $v0, 0x59A0
    ctx->pc = 0x130e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22944));
    // 0x130e04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x130e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x130e08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x130E08u;
    {
        const bool branch_taken_0x130e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E08u;
            // 0x130e0c: 0xdc620000  ld          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e08) {
            ctx->pc = 0x130E34u;
            goto label_130e34;
        }
    }
    ctx->pc = 0x130E10u;
label_130e10:
    // 0x130e10: 0x1a000008  blez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x130E10u;
    {
        const bool branch_taken_0x130e10 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x130E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E10u;
            // 0x130e14: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e10) {
            ctx->pc = 0x130E34u;
            goto label_130e34;
        }
    }
    ctx->pc = 0x130E18u;
label_130e18:
    // 0x130e18: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x130e18u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32840u)));
    // 0x130e1c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x130e1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x130e20: 0xc04a338  jal         func_128CE0
    ctx->pc = 0x130E20u;
    SET_GPR_U32(ctx, 31, 0x130E28u);
    ctx->pc = 0x130E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130E20u;
            // 0x130e24: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128CE0u;
    if (runtime->hasFunction(0x128CE0u)) {
        auto targetFn = runtime->lookupFunction(0x128CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E28u; }
        if (ctx->pc != 0x130E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dpmul_0x128ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130E28u; }
        if (ctx->pc != 0x130E28u) { return; }
    }
    ctx->pc = 0x130E28u;
    // 0x130e28: 0x1e00fffb  bgtz        $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x130E28u;
    {
        const bool branch_taken_0x130e28 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x130E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E28u;
            // 0x130e2c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130e28) {
            ctx->pc = 0x130E18u;
            goto label_130e18;
        }
    }
    ctx->pc = 0x130E30u;
    // 0x130e30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x130e30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_130e34:
    // 0x130e34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x130e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x130e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130e3c: 0x3e00008  jr          $ra
    ctx->pc = 0x130E3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130E3Cu;
            // 0x130e40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130E10u: goto label_130e10;
            case 0x130E18u: goto label_130e18;
            case 0x130E34u: goto label_130e34;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130E44u;
}
