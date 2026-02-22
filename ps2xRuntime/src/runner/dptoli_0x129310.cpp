#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptoli
// Address: 0x129310 - 0x1293a4
void dptoli_0x129310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129310u;

    // 0x129310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x129310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x129314: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x129314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x129318: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x129318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12931c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12931cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x129320: 0xc04a250  jal         func_128940
    ctx->pc = 0x129320u;
    SET_GPR_U32(ctx, 31, 0x129328u);
    ctx->pc = 0x129324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129320u;
            // 0x129324: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129328u; }
        if (ctx->pc != 0x129328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129328u; }
        if (ctx->pc != 0x129328u) { return; }
    }
    ctx->pc = 0x129328u;
    // 0x129328: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12932c: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x12932cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x129330: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129330u;
    {
        const bool branch_taken_0x129330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129330u;
            // 0x129334: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129330) {
            ctx->pc = 0x129340u;
            goto label_129340;
        }
    }
    ctx->pc = 0x129338u;
    // 0x129338: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129338u;
    {
        const bool branch_taken_0x129338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129338u;
            // 0x12933c: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129338) {
            ctx->pc = 0x129348u;
            goto label_129348;
        }
    }
    ctx->pc = 0x129340u;
label_129340:
    // 0x129340: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x129340u;
    {
        const bool branch_taken_0x129340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129340u;
            // 0x129344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129340) {
            ctx->pc = 0x129398u;
            goto label_129398;
        }
    }
    ctx->pc = 0x129348u;
label_129348:
    // 0x129348: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129348u;
    {
        const bool branch_taken_0x129348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129348u;
            // 0x12934c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129348) {
            ctx->pc = 0x129360u;
            goto label_129360;
        }
    }
    ctx->pc = 0x129350u;
    // 0x129350: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x129350u;
    {
        const bool branch_taken_0x129350 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x129354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129350u;
            // 0x129354: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129350) {
            ctx->pc = 0x129340u;
            goto label_129340;
        }
    }
    ctx->pc = 0x129358u;
    // 0x129358: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129358u;
    {
        const bool branch_taken_0x129358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12935Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129358u;
            // 0x12935c: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129358) {
            ctx->pc = 0x129378u;
            goto label_129378;
        }
    }
    ctx->pc = 0x129360u;
label_129360:
    // 0x129360: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x129360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129364: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x129364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x129368: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129368u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x12936c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x12936cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x129370: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x129370u;
    {
        const bool branch_taken_0x129370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129370u;
            // 0x129374: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129370) {
            ctx->pc = 0x129398u;
            goto label_129398;
        }
    }
    ctx->pc = 0x129378u;
label_129378:
    // 0x129378: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x129378u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12937c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12937cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129380: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x129380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x129384: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x129384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129388: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12938c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x12938cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x129390: 0x21823  negu        $v1, $v0
    ctx->pc = 0x129390u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x129394: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x129394u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_129398:
    // 0x129398: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x129398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12939c: 0x3e00008  jr          $ra
    ctx->pc = 0x12939Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1293A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12939Cu;
            // 0x1293a0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129340u: goto label_129340;
            case 0x129348u: goto label_129348;
            case 0x129360u: goto label_129360;
            case 0x129378u: goto label_129378;
            case 0x129398u: goto label_129398;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1293A4u;
}
