#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: En8_bitC_Shot
// Address: 0x1e4120 - 0x1e4264
void En8_bitC_Shot_0x1e4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("En8_bitC_Shot_0x1e4120");
#endif

    ctx->pc = 0x1e4120u;

    // 0x1e4120: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e4124: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1e4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1e4128: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1e4128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1e412c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1e412cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1e4130: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1e4130u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4134: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1e4134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1e4138: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1e4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1e413c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1e413cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1e4140: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1e4144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e4144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4148: 0xc065d00  jal         func_197400
    ctx->pc = 0x1E4148u;
    SET_GPR_U32(ctx, 31, 0x1E4150u);
    ctx->pc = 0x1E414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4148u;
            // 0x1e414c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4150u; }
        if (ctx->pc != 0x1E4150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4150u; }
        if (ctx->pc != 0x1E4150u) { return; }
    }
    ctx->pc = 0x1E4150u;
    // 0x1e4150: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1e4150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1e4154: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E4154u;
    {
        const bool branch_taken_0x1e4154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e4154) {
            ctx->pc = 0x1E4160u;
            goto label_1e4160;
        }
    }
    ctx->pc = 0x1E415Cu;
    // 0x1e415c: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1e415cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1e4160:
    // 0x1e4160: 0xc065d00  jal         func_197400
    ctx->pc = 0x1E4160u;
    SET_GPR_U32(ctx, 31, 0x1E4168u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4168u; }
        if (ctx->pc != 0x1E4168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4168u; }
        if (ctx->pc != 0x1E4168u) { return; }
    }
    ctx->pc = 0x1E4168u;
    // 0x1e4168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e4168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e416c: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1E416Cu;
    {
        const bool branch_taken_0x1e416c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e416c) {
            ctx->pc = 0x1E4178u;
            goto label_1e4178;
        }
    }
    ctx->pc = 0x1E4174u;
    // 0x1e4174: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x1e4174u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1e4178:
    // 0x1e4178: 0xc065d00  jal         func_197400
    ctx->pc = 0x1E4178u;
    SET_GPR_U32(ctx, 31, 0x1E4180u);
    ctx->pc = 0x197400u;
    if (runtime->hasFunction(0x197400u)) {
        auto targetFn = runtime->lookupFunction(0x197400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4180u; }
        if (ctx->pc != 0x1E4180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDifficulty_0x197400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4180u; }
        if (ctx->pc != 0x1E4180u) { return; }
    }
    ctx->pc = 0x1E4180u;
    // 0x1e4180: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E4180u;
    {
        const bool branch_taken_0x1e4180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4180) {
            ctx->pc = 0x1E4190u;
            goto label_1e4190;
        }
    }
    ctx->pc = 0x1E4188u;
    // 0x1e4188: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1e4188u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e418c: 0x0  nop
    ctx->pc = 0x1e418cu;
    // NOP
label_1e4190:
    // 0x1e4190: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1e4190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
    // 0x1e4194: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1e4194u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4198: 0x3c034234  lui         $v1, 0x4234
    ctx->pc = 0x1e4198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16948 << 16));
    // 0x1e419c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e419cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e41a0: 0x0  nop
    ctx->pc = 0x1e41a0u;
    // NOP
    // 0x1e41a4: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1e41a4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1e41a8: 0x3c034180  lui         $v1, 0x4180
    ctx->pc = 0x1e41a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16768 << 16));
    // 0x1e41ac: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e41acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e41b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e41b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e41b4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1e41b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1e41b8: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e41b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1e41bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e41bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e41c0: 0x0  nop
    ctx->pc = 0x1e41c0u;
    // NOP
    // 0x1e41c4: 0x44120800  mfc1        $s2, $f1
    ctx->pc = 0x1e41c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x1e41c8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1e41c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1e41cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1e41ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1e41d0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x1e41d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x1e41d4: 0x0  nop
    ctx->pc = 0x1e41d4u;
    // NOP
    // 0x1e41d8: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1E41D8u;
    {
        const bool branch_taken_0x1e41d8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1e41d8) {
            ctx->pc = 0x1E41E8u;
            goto label_1e41e8;
        }
    }
    ctx->pc = 0x1E41E0u;
    // 0x1e41e0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1e41e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x1e41e4: 0x0  nop
    ctx->pc = 0x1e41e4u;
    // NOP
label_1e41e8:
    // 0x1e41e8: 0x11082a  slt         $at, $zero, $s1
    ctx->pc = 0x1e41e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e41ec: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1E41ECu;
    {
        const bool branch_taken_0x1e41ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E41F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E41ECu;
            // 0x1e41f0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e41ec) {
            ctx->pc = 0x1E4240u;
            goto label_1e4240;
        }
    }
    ctx->pc = 0x1E41F4u;
    // 0x1e41f4: 0x2682002d  addiu       $v0, $s4, 0x2D
    ctx->pc = 0x1e41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 45));
    // 0x1e41f8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x1e41f8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x1e41fc: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x1e41fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1e4200:
    // 0x1e4200: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1e4200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1e4204: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x1e4204u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e4208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e4208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e420c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1e420cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1e4210: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e4210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4214: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e4214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e4218: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1e4218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e421c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1e421cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1e4220: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1e4220u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1e4224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e4224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e4228: 0xc065480  jal         func_195200
    ctx->pc = 0x1E4228u;
    SET_GPR_U32(ctx, 31, 0x1E4230u);
    ctx->pc = 0x1E422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E4228u;
            // 0x1e422c: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x195200u;
    if (runtime->hasFunction(0x195200u)) {
        auto targetFn = runtime->lookupFunction(0x195200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4230u; }
        if (ctx->pc != 0x1E4230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnemyShotCreate_Houkou_spd_0x195200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E4230u; }
        if (ctx->pc != 0x1E4230u) { return; }
    }
    ctx->pc = 0x1E4230u;
    // 0x1e4230: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1e4230u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1e4234: 0x271182a  slt         $v1, $s3, $s1
    ctx->pc = 0x1e4234u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x1e4238: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1E4238u;
    {
        const bool branch_taken_0x1e4238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4238) {
            ctx->pc = 0x1E4200u;
            goto label_1e4200;
        }
    }
    ctx->pc = 0x1E4240u;
label_1e4240:
    // 0x1e4240: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1e4240u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1e4244: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1e4244u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e4248: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e4248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1e424c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1e424cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4250: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1e4250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4254: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1e4254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4258: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1e4258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e425c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E425Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E425Cu;
            // 0x1e4260: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4160u: goto label_1e4160;
            case 0x1E4178u: goto label_1e4178;
            case 0x1E4190u: goto label_1e4190;
            case 0x1E41E8u: goto label_1e41e8;
            case 0x1E4200u: goto label_1e4200;
            case 0x1E4240u: goto label_1e4240;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E4264u;
}
