#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: dptoul
// Address: 0x1293a8 - 0x129448
void dptoul_0x1293a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x1293a8u;

    // 0x1293a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1293a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1293ac: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1293acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1293b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1293b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1293b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1293b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1293b8: 0xc04a250  jal         func_128940
    ctx->pc = 0x1293B8u;
    SET_GPR_U32(ctx, 31, 0x1293C0u);
    ctx->pc = 0x1293BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1293B8u;
            // 0x1293bc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128940u;
    if (runtime->hasFunction(0x128940u)) {
        auto targetFn = runtime->lookupFunction(0x128940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1293C0u; }
        if (ctx->pc != 0x1293C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_d_0x128940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1293C0u; }
        if (ctx->pc != 0x1293C0u) { return; }
    }
    ctx->pc = 0x1293C0u;
    // 0x1293c0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1293c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1293c4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1293c4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x1293c8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1293C8u;
    {
        const bool branch_taken_0x1293c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293C8u;
            // 0x1293cc: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293c8) {
            ctx->pc = 0x1293D8u;
            goto label_1293d8;
        }
    }
    ctx->pc = 0x1293D0u;
    // 0x1293d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1293D0u;
    {
        const bool branch_taken_0x1293d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293D0u;
            // 0x1293d4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293d0) {
            ctx->pc = 0x1293E0u;
            goto label_1293e0;
        }
    }
    ctx->pc = 0x1293D8u;
label_1293d8:
    // 0x1293d8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1293D8u;
    {
        const bool branch_taken_0x1293d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293D8u;
            // 0x1293dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293d8) {
            ctx->pc = 0x12943Cu;
            goto label_12943c;
        }
    }
    ctx->pc = 0x1293E0u;
label_1293e0:
    // 0x1293e0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1293E0u;
    {
        const bool branch_taken_0x1293e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1293E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293E0u;
            // 0x1293e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293e0) {
            ctx->pc = 0x12943Cu;
            goto label_12943c;
        }
    }
    ctx->pc = 0x1293E8u;
    // 0x1293e8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1293e8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x1293ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1293ECu;
    {
        const bool branch_taken_0x1293ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1293F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293ECu;
            // 0x1293f0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293ec) {
            ctx->pc = 0x129404u;
            goto label_129404;
        }
    }
    ctx->pc = 0x1293F4u;
    // 0x1293f4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1293F4u;
    {
        const bool branch_taken_0x1293f4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1293F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1293F4u;
            // 0x1293f8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1293f4) {
            ctx->pc = 0x1293D8u;
            goto label_1293d8;
        }
    }
    ctx->pc = 0x1293FCu;
    // 0x1293fc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1293FCu;
    {
        const bool branch_taken_0x1293fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1293fc) {
            ctx->pc = 0x129400u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1293FCu;
            // 0x129400: 0x2882003d  slti        $v0, $a0, 0x3D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)61) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x129410u;
            goto label_129410;
        }
    }
    ctx->pc = 0x129404u;
label_129404:
    // 0x129404: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x129404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x129408: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x129408u;
    {
        const bool branch_taken_0x129408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129408u;
            // 0x12940c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129408) {
            ctx->pc = 0x12943Cu;
            goto label_12943c;
        }
    }
    ctx->pc = 0x129410u;
label_129410:
    // 0x129410: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129410u;
    {
        const bool branch_taken_0x129410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129410u;
            // 0x129414: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129410) {
            ctx->pc = 0x129428u;
            goto label_129428;
        }
    }
    ctx->pc = 0x129418u;
    // 0x129418: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x129418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12941c: 0x2483ffc4  addiu       $v1, $a0, -0x3C
    ctx->pc = 0x12941cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967236));
    // 0x129420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x129420u;
    {
        const bool branch_taken_0x129420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129420u;
            // 0x129424: 0x621014  dsllv       $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129420) {
            ctx->pc = 0x129434u;
            goto label_129434;
        }
    }
    ctx->pc = 0x129428u;
label_129428:
    // 0x129428: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x129428u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12942c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x12942cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129430: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x129430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
label_129434:
    // 0x129434: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x129434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x129438: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x129438u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_12943c:
    // 0x12943c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12943cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129440: 0x3e00008  jr          $ra
    ctx->pc = 0x129440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129440u;
            // 0x129444: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1293D8u: goto label_1293d8;
            case 0x1293E0u: goto label_1293e0;
            case 0x129404u: goto label_129404;
            case 0x129410u: goto label_129410;
            case 0x129428u: goto label_129428;
            case 0x129434u: goto label_129434;
            case 0x12943Cu: goto label_12943c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129448u;
}
