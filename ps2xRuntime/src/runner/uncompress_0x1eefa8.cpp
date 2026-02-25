#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: uncompress
// Address: 0x1eefa8 - 0x1ef070
void uncompress_0x1eefa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("uncompress_0x1eefa8");
#endif

    ctx->pc = 0x1eefa8u;

    // 0x1eefa8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1eefa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1eefac: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1eefacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1eefb0: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1eefb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1eefb4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1eefb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1eefb8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1eefb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eefbc: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1eefbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x1eefc0: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x1eefc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x1eefc4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1eefc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1eefc8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1eefc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1eefcc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1eefccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eefd0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1eefd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1eefd4: 0x14670021  bne         $v1, $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1EEFD4u;
    {
        const bool branch_taken_0x1eefd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1EEFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFD4u;
            // 0x1eefd8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eefd4) {
            ctx->pc = 0x1EF05Cu;
            goto label_1ef05c;
        }
    }
    ctx->pc = 0x1EEFDCu;
    // 0x1eefdc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1eefdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1eefe0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1eefe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eefe4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x1eefe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x1eefe8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1eefe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1eefec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1eefecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1eeff0: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x1eeff0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1eeff4: 0x5464001a  bnel        $v1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1EEFF4u;
    {
        const bool branch_taken_0x1eeff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1eeff4) {
            ctx->pc = 0x1EEFF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EEFF4u;
            // 0x1eeff8: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF060u;
            goto label_1ef060;
        }
    }
    ctx->pc = 0x1EEFFCu;
    // 0x1eeffc: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x1eeffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
    // 0x1ef000: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1ef000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x1ef004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef008: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1ef008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1ef00c: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x1ef00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
    // 0x1ef010: 0xc07bcbe  jal         func_1EF2F8
    ctx->pc = 0x1EF010u;
    SET_GPR_U32(ctx, 31, 0x1EF018u);
    ctx->pc = 0x1EF014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF010u;
            // 0x1ef014: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2F8u;
    if (runtime->hasFunction(0x1EF2F8u)) {
        auto targetFn = runtime->lookupFunction(0x1EF2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF018u; }
        if (ctx->pc != 0x1EF018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateInit__0x1ef2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF018u; }
        if (ctx->pc != 0x1EF018u) { return; }
    }
    ctx->pc = 0x1EF018u;
    // 0x1ef018: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1EF018u;
    {
        const bool branch_taken_0x1ef018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ef018) {
            ctx->pc = 0x1EF01Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF018u;
            // 0x1ef01c: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF060u;
            goto label_1ef060;
        }
    }
    ctx->pc = 0x1EF020u;
    // 0x1ef020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1ef020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef024: 0xc07bcc8  jal         func_1EF320
    ctx->pc = 0x1EF024u;
    SET_GPR_U32(ctx, 31, 0x1EF02Cu);
    ctx->pc = 0x1EF028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF024u;
            // 0x1ef028: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF320u;
    if (runtime->hasFunction(0x1EF320u)) {
        auto targetFn = runtime->lookupFunction(0x1EF320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF02Cu; }
        if (ctx->pc != 0x1EF02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflate_0x1ef320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF02Cu; }
        if (ctx->pc != 0x1EF02Cu) { return; }
    }
    ctx->pc = 0x1EF02Cu;
    // 0x1ef02c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ef02cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ef030: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ef034: 0x52020006  beql        $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EF034u;
    {
        const bool branch_taken_0x1ef034 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1ef034) {
            ctx->pc = 0x1EF038u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF034u;
            // 0x1ef038: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1EF050u;
            goto label_1ef050;
        }
    }
    ctx->pc = 0x1EF03Cu;
    // 0x1ef03c: 0xc07bc4e  jal         func_1EF138
    ctx->pc = 0x1EF03Cu;
    SET_GPR_U32(ctx, 31, 0x1EF044u);
    ctx->pc = 0x1EF040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF03Cu;
            // 0x1ef040: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF138u;
    if (runtime->hasFunction(0x1EF138u)) {
        auto targetFn = runtime->lookupFunction(0x1EF138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF044u; }
        if (ctx->pc != 0x1EF044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateEnd_0x1ef138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF044u; }
        if (ctx->pc != 0x1EF044u) { return; }
    }
    ctx->pc = 0x1EF044u;
    // 0x1ef044: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x1ef044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1ef048: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EF048u;
    {
        const bool branch_taken_0x1ef048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EF04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF048u;
            // 0x1ef04c: 0x210100b  movn        $v0, $s0, $s0 (Delay Slot)
        if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef048) {
            ctx->pc = 0x1EF05Cu;
            goto label_1ef05c;
        }
    }
    ctx->pc = 0x1EF050u;
label_1ef050:
    // 0x1ef050: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x1ef050u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x1ef054: 0xc07bc4e  jal         func_1EF138
    ctx->pc = 0x1EF054u;
    SET_GPR_U32(ctx, 31, 0x1EF05Cu);
    ctx->pc = 0x1EF058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF054u;
            // 0x1ef058: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EF138u;
    if (runtime->hasFunction(0x1EF138u)) {
        auto targetFn = runtime->lookupFunction(0x1EF138u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF05Cu; }
        if (ctx->pc != 0x1EF05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        inflateEnd_0x1ef138(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EF05Cu; }
        if (ctx->pc != 0x1EF05Cu) { return; }
    }
    ctx->pc = 0x1EF05Cu;
label_1ef05c:
    // 0x1ef05c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1ef05cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1ef060:
    // 0x1ef060: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1ef060u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1ef064: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1ef064u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ef068: 0x3e00008  jr          $ra
    ctx->pc = 0x1EF068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EF068u;
            // 0x1ef06c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1EF050u: goto label_1ef050;
            case 0x1EF05Cu: goto label_1ef05c;
            case 0x1EF060u: goto label_1ef060;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1EF070u;
}
