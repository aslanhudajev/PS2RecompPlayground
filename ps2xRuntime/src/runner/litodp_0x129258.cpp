#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: litodp
// Address: 0x129258 - 0x129310
void litodp_0x129258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129258u;

    // 0x129258: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12925c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x12925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x129260: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x129260u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x129264: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129268: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x129268u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12926c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x12926Cu;
    {
        const bool branch_taken_0x12926c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x129270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12926Cu;
            // 0x129270: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12926c) {
            ctx->pc = 0x129280u;
            goto label_129280;
        }
    }
    ctx->pc = 0x129274u;
    // 0x129274: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x129274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x129278: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x129278u;
    {
        const bool branch_taken_0x129278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12927Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129278u;
            // 0x12927c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129278) {
            ctx->pc = 0x1292FCu;
            goto label_1292fc;
        }
    }
    ctx->pc = 0x129280u;
label_129280:
    // 0x129280: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x129280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x129284: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x129284u;
    {
        const bool branch_taken_0x129284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129284u;
            // 0x129288: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129284) {
            ctx->pc = 0x1292B0u;
            goto label_1292b0;
        }
    }
    ctx->pc = 0x12928Cu;
    // 0x12928c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x12928cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x129290: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129290u;
    {
        const bool branch_taken_0x129290 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x129294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129290u;
            // 0x129294: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129290) {
            ctx->pc = 0x1292A8u;
            goto label_1292a8;
        }
    }
    ctx->pc = 0x129298u;
    // 0x129298: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x129298u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)49632u)));
    // 0x12929c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12929cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1292a0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1292A0u;
    {
        const bool branch_taken_0x1292a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292A0u;
            // 0x1292a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292a0) {
            ctx->pc = 0x129308u;
            goto label_129308;
        }
    }
    ctx->pc = 0x1292A8u;
label_1292a8:
    // 0x1292a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1292A8u;
    {
        const bool branch_taken_0x1292a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1292ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292A8u;
            // 0x1292ac: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292a8) {
            ctx->pc = 0x1292B4u;
            goto label_1292b4;
        }
    }
    ctx->pc = 0x1292B0u;
label_1292b0:
    // 0x1292b0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x1292b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_1292b4:
    // 0x1292b4: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x1292b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1292b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1292b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1292bc: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x1292bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x1292c0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x1292c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x1292c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1292C4u;
    {
        const bool branch_taken_0x1292c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1292C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1292C4u;
            // 0x1292c8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1292c4) {
            ctx->pc = 0x1292FCu;
            goto label_1292fc;
        }
    }
    ctx->pc = 0x1292CCu;
    // 0x1292cc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1292ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1292d0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x1292d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x1292d4: 0x0  nop
    ctx->pc = 0x1292d4u;
    // NOP
label_1292d8:
    // 0x1292d8: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x1292d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x1292dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1292dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1292e0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1292e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1292e4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x1292e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1292e8: 0x0  nop
    ctx->pc = 0x1292e8u;
    // NOP
    // 0x1292ec: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1292ECu;
    {
        const bool branch_taken_0x1292ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1292ec) {
            ctx->pc = 0x1292D8u;
            goto label_1292d8;
        }
    }
    ctx->pc = 0x1292F4u;
    // 0x1292f4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1292f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1292f8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1292f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_1292fc:
    // 0x1292fc: 0xc04a204  jal         func_128810
    ctx->pc = 0x1292FCu;
    SET_GPR_U32(ctx, 31, 0x129304u);
    ctx->pc = 0x129300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1292FCu;
            // 0x129300: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128810u;
    if (runtime->hasFunction(0x128810u)) {
        auto targetFn = runtime->lookupFunction(0x128810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129304u; }
        if (ctx->pc != 0x129304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___pack_d_0x128810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129304u; }
        if (ctx->pc != 0x129304u) { return; }
    }
    ctx->pc = 0x129304u;
    // 0x129304: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_129308:
    // 0x129308: 0x3e00008  jr          $ra
    ctx->pc = 0x129308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12930Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129308u;
            // 0x12930c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129280u: goto label_129280;
            case 0x1292A8u: goto label_1292a8;
            case 0x1292B0u: goto label_1292b0;
            case 0x1292B4u: goto label_1292b4;
            case 0x1292D8u: goto label_1292d8;
            case 0x1292FCu: goto label_1292fc;
            case 0x129308u: goto label_129308;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129310u;
}
