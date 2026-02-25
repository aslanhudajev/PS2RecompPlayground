#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: _isOutSizeOK
// Address: 0x129188 - 0x129228
void _isOutSizeOK_0x129188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("_isOutSizeOK_0x129188");
#endif

    ctx->pc = 0x129188u;

    // 0x129188: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x129188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x12918c: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x12918cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x129190: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x129190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x129194: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x129194u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129198: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x129198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x12919c: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x12919cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    // 0x1291a0: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x1291A0u;
    {
        const bool branch_taken_0x1291a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291A0u;
            // 0x1291a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291a0) {
            ctx->pc = 0x1291CCu;
            goto label_1291cc;
        }
    }
    ctx->pc = 0x1291A8u;
    // 0x1291a8: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x1291a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x1291ac: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1291acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1291b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1291b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1291b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1291B4u;
    {
        const bool branch_taken_0x1291b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1291B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291B4u;
            // 0x1291b8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291b4) {
            ctx->pc = 0x1291E4u;
            goto label_1291e4;
        }
    }
    ctx->pc = 0x1291BCu;
    // 0x1291bc: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1291bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1291c0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1291c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1291c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1291C4u;
    {
        const bool branch_taken_0x1291c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1291C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291C4u;
            // 0x1291c8: 0x38510001  xori        $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_VEC(ctx, 17, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291c4) {
            ctx->pc = 0x1291E4u;
            goto label_1291e4;
        }
    }
    ctx->pc = 0x1291CCu;
label_1291cc:
    // 0x1291cc: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1291ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1291d0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1291d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1291d4: 0x8e0200e4  lw          $v0, 0xE4($s0)
    ctx->pc = 0x1291d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
    // 0x1291d8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1291d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x1291dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1291dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1291e0: 0x38510001  xori        $s1, $v0, 0x1
    ctx->pc = 0x1291e0u;
    SET_GPR_VEC(ctx, 17, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)1u)));
label_1291e4:
    // 0x1291e4: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x1291E4u;
    {
        const bool branch_taken_0x1291e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1291E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1291E4u;
            // 0x1291e8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1291e4) {
            ctx->pc = 0x129214u;
            goto label_129214;
        }
    }
    ctx->pc = 0x1291ECu;
    // 0x1291ec: 0x8cc70008  lw          $a3, 0x8($a2)
    ctx->pc = 0x1291ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1291f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1291f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1291f4: 0x8cc60004  lw          $a2, 0x4($a2)
    ctx->pc = 0x1291f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1291f8: 0x24a5f3a0  addiu       $a1, $a1, -0xC60
    ctx->pc = 0x1291f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964128));
    // 0x1291fc: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x1291FCu;
    SET_GPR_U32(ctx, 31, 0x129204u);
    ctx->pc = 0x129200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1291FCu;
            // 0x129200: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129204u; }
        if (ctx->pc != 0x129204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129204u; }
        if (ctx->pc != 0x129204u) { return; }
    }
    ctx->pc = 0x129204u;
    // 0x129204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x129204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129208: 0xc04b01e  jal         func_12C078
    ctx->pc = 0x129208u;
    SET_GPR_U32(ctx, 31, 0x129210u);
    ctx->pc = 0x12920Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129208u;
            // 0x12920c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C078u;
    if (runtime->hasFunction(0x12C078u)) {
        auto targetFn = runtime->lookupFunction(0x12C078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129210u; }
        if (ctx->pc != 0x129210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x12c078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129210u; }
        if (ctx->pc != 0x129210u) { return; }
    }
    ctx->pc = 0x129210u;
    // 0x129210: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x129210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_129214:
    // 0x129214: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x129214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x129218: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x129218u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x12921c: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x12921cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x129220: 0x3e00008  jr          $ra
    ctx->pc = 0x129220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129220u;
            // 0x129224: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1291CCu: goto label_1291cc;
            case 0x1291E4u: goto label_1291e4;
            case 0x129214u: goto label_129214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129228u;
}
