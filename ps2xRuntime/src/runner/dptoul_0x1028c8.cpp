#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: dptoul
// Address: 0x1028c8 - 0x102968
void dptoul_0x1028c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("dptoul_0x1028c8");
#endif

    ctx->pc = 0x1028c8u;

    // 0x1028c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1028c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1028cc: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1028ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1028d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1028d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1028d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1028d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1028d8: 0xc040798  jal         func_101E60
    ctx->pc = 0x1028D8u;
    SET_GPR_U32(ctx, 31, 0x1028E0u);
    ctx->pc = 0x1028DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1028D8u;
            // 0x1028dc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101E60u;
    if (runtime->hasFunction(0x101E60u)) {
        auto targetFn = runtime->lookupFunction(0x101E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1028E0u; }
        if (ctx->pc != 0x1028E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x101e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1028E0u; }
        if (ctx->pc != 0x1028E0u) { return; }
    }
    ctx->pc = 0x1028E0u;
    // 0x1028e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1028e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1028e4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1028e4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x1028e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1028E8u;
    {
        const bool branch_taken_0x1028e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028E8u;
            // 0x1028ec: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028e8) {
            ctx->pc = 0x1028F8u;
            goto label_1028f8;
        }
    }
    ctx->pc = 0x1028F0u;
    // 0x1028f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1028F0u;
    {
        const bool branch_taken_0x1028f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028F0u;
            // 0x1028f4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f0) {
            ctx->pc = 0x102900u;
            goto label_102900;
        }
    }
    ctx->pc = 0x1028F8u;
label_1028f8:
    // 0x1028f8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1028F8u;
    {
        const bool branch_taken_0x1028f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1028FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1028F8u;
            // 0x1028fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1028f8) {
            ctx->pc = 0x10295Cu;
            goto label_10295c;
        }
    }
    ctx->pc = 0x102900u;
label_102900:
    // 0x102900: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x102900u;
    {
        const bool branch_taken_0x102900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102900u;
            // 0x102904: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102900) {
            ctx->pc = 0x10295Cu;
            goto label_10295c;
        }
    }
    ctx->pc = 0x102908u;
    // 0x102908: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x102908u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x10290c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10290Cu;
    {
        const bool branch_taken_0x10290c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x102910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10290Cu;
            // 0x102910: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10290c) {
            ctx->pc = 0x102924u;
            goto label_102924;
        }
    }
    ctx->pc = 0x102914u;
    // 0x102914: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x102914u;
    {
        const bool branch_taken_0x102914 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x102918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102914u;
            // 0x102918: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x102914) {
            ctx->pc = 0x1028F8u;
            goto label_1028f8;
        }
    }
    ctx->pc = 0x10291Cu;
    // 0x10291c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10291Cu;
    {
        const bool branch_taken_0x10291c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10291c) {
            ctx->pc = 0x102920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10291Cu;
            // 0x102920: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x102930u;
            goto label_102930;
        }
    }
    ctx->pc = 0x102924u;
label_102924:
    // 0x102924: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x102924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x102928: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x102928u;
    {
        const bool branch_taken_0x102928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10292Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102928u;
            // 0x10292c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102928) {
            ctx->pc = 0x10295Cu;
            goto label_10295c;
        }
    }
    ctx->pc = 0x102930u;
label_102930:
    // 0x102930: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x102930u;
    {
        const bool branch_taken_0x102930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x102934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102930u;
            // 0x102934: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102930) {
            ctx->pc = 0x102948u;
            goto label_102948;
        }
    }
    ctx->pc = 0x102938u;
    // 0x102938: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x102938u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10293c: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x10293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x102940: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x102940u;
    {
        const bool branch_taken_0x102940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x102944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102940u;
            // 0x102944: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102940) {
            ctx->pc = 0x102954u;
            goto label_102954;
        }
    }
    ctx->pc = 0x102948u;
label_102948:
    // 0x102948: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x102948u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10294c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10294cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x102950: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x102950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_102954:
    // 0x102954: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x102954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x102958: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x102958u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_10295c:
    // 0x10295c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x102960: 0x3e00008  jr          $ra
    ctx->pc = 0x102960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102960u;
            // 0x102964: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1028F8u: goto label_1028f8;
            case 0x102900u: goto label_102900;
            case 0x102924u: goto label_102924;
            case 0x102930u: goto label_102930;
            case 0x102948u: goto label_102948;
            case 0x102954u: goto label_102954;
            case 0x10295Cu: goto label_10295c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x102968u;
}
