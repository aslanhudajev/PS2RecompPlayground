#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: floorf
// Address: 0x11e208 - 0x11e2ec
void floorf_0x11e208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x11e208u;

    // 0x11e208: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x11e208u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x11e20c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11e20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e210: 0x415c3  sra         $v0, $a0, 23
    ctx->pc = 0x11e210u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 23));
    // 0x11e214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x11e214u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)255u)));
    // 0x11e218: 0x2445ff81  addiu       $a1, $v0, -0x7F
    ctx->pc = 0x11e218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967169));
    // 0x11e21c: 0x28a30017  slti        $v1, $a1, 0x17
    ctx->pc = 0x11e21cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)23) ? 1 : 0);
    // 0x11e220: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x11E220u;
    {
        const bool branch_taken_0x11e220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e220) {
            ctx->pc = 0x11E224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E220u;
            // 0x11e224: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E2D0u;
            goto label_11e2d0;
        }
    }
    ctx->pc = 0x11E228u;
    // 0x11e228: 0x4a30012  bgezl       $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x11E228u;
    {
        const bool branch_taken_0x11e228 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x11e228) {
            ctx->pc = 0x11E22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11E228u;
            // 0x11e22c: 0x3c02007f  lui         $v0, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11E274u;
            goto label_11e274;
        }
    }
    ctx->pc = 0x11E230u;
    // 0x11e230: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e234: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e234u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)62154u)));
    // 0x11e238: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e238u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e23c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11e23cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e240: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e240u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e248: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x11E248u;
    {
        const bool branch_taken_0x11e248 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e248) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E250u;
    // 0x11e250: 0x4800003  bltz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E250u;
    {
        const bool branch_taken_0x11e250 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x11E254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E250u;
            // 0x11e254: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e250) {
            ctx->pc = 0x11E260u;
            goto label_11e260;
        }
    }
    ctx->pc = 0x11E258u;
    // 0x11e258: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x11E258u;
    {
        const bool branch_taken_0x11e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E258u;
            // 0x11e25c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e258) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E260u;
label_11e260:
    // 0x11e260: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x11e260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x11e264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e264u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e268: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x11e268u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x11e26c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x11E26Cu;
    {
        const bool branch_taken_0x11e26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E26Cu;
            // 0x11e270: 0x62200b  movn        $a0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e26c) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E274u;
label_11e274:
    // 0x11e274: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x11e274u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x11e278: 0xa23007  srav        $a2, $v0, $a1
    ctx->pc = 0x11e278u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e27c: 0x861824  and         $v1, $a0, $a2
    ctx->pc = 0x11e27cu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x11e280: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11E280u;
    {
        const bool branch_taken_0x11e280 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e280) {
            ctx->pc = 0x11E290u;
            goto label_11e290;
        }
    }
    ctx->pc = 0x11E288u;
label_11e288:
    // 0x11e288: 0x3e00008  jr          $ra
    ctx->pc = 0x11E288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E288u;
            // 0x11e28c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E260u: goto label_11e260;
            case 0x11E274u: goto label_11e274;
            case 0x11E288u: goto label_11e288;
            case 0x11E290u: goto label_11e290;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E2D0u: goto label_11e2d0;
            case 0x11E2E0u: goto label_11e2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E290u;
label_11e290:
    // 0x11e290: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x11e290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x11e294: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x11e294u;
    SET_GPR_VEC(ctx, 1, PS2_POR(GPR_VEC(ctx, 1), _mm_cvtsi32_si128((int)62154u)));
    // 0x11e298: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11e298u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11e29c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x11e29cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x11e2a0: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x11e2a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x11e2a4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x11e2a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x11e2a8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x11E2A8u;
    {
        const bool branch_taken_0x11e2a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x11e2a8) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E2B0u;
    // 0x11e2b0: 0x4810005  bgez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11E2B0u;
    {
        const bool branch_taken_0x11e2b0 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x11E2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2B0u;
            // 0x11e2b4: 0x61027  nor         $v0, $zero, $a2 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2b0) {
            ctx->pc = 0x11E2C8u;
            goto label_11e2c8;
        }
    }
    ctx->pc = 0x11E2B8u;
    // 0x11e2b8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x11e2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x11e2bc: 0xa21007  srav        $v0, $v0, $a1
    ctx->pc = 0x11e2bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
    // 0x11e2c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x11e2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x11e2c4: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x11e2c4u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 6)));
label_11e2c8:
    // 0x11e2c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11E2C8u;
    {
        const bool branch_taken_0x11e2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E2CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2C8u;
            // 0x11e2cc: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e2c8) {
            ctx->pc = 0x11E2E0u;
            goto label_11e2e0;
        }
    }
    ctx->pc = 0x11E2D0u;
label_11e2d0:
    // 0x11e2d0: 0x14a2ffed  bne         $a1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x11E2D0u;
    {
        const bool branch_taken_0x11e2d0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x11e2d0) {
            ctx->pc = 0x11E288u;
            goto label_11e288;
        }
    }
    ctx->pc = 0x11E2D8u;
    // 0x11e2d8: 0x3e00008  jr          $ra
    ctx->pc = 0x11E2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2D8u;
            // 0x11e2dc: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E260u: goto label_11e260;
            case 0x11E274u: goto label_11e274;
            case 0x11E288u: goto label_11e288;
            case 0x11E290u: goto label_11e290;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E2D0u: goto label_11e2d0;
            case 0x11E2E0u: goto label_11e2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E2E0u;
label_11e2e0:
    // 0x11e2e0: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x11e2e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11e2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x11E2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E2E4u;
            // 0x11e2e8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11E260u: goto label_11e260;
            case 0x11E274u: goto label_11e274;
            case 0x11E288u: goto label_11e288;
            case 0x11E290u: goto label_11e290;
            case 0x11E2C8u: goto label_11e2c8;
            case 0x11E2D0u: goto label_11e2d0;
            case 0x11E2E0u: goto label_11e2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11E2ECu;
}
