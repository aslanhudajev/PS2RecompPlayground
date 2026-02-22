#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: fptosi
// Address: 0x129f18 - 0x129fa4
void fptosi_0x129f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x129f18u;

    // 0x129f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129f1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129f20: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x129f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129f24: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x129f24u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x129f28: 0xc04a586  jal         func_129618
    ctx->pc = 0x129F28u;
    SET_GPR_U32(ctx, 31, 0x129F30u);
    ctx->pc = 0x129F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129F28u;
            // 0x129f2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F30u; }
        if (ctx->pc != 0x129F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129F30u; }
        if (ctx->pc != 0x129F30u) { return; }
    }
    ctx->pc = 0x129F30u;
    // 0x129f30: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129f34: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x129f34u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x129f38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129F38u;
    {
        const bool branch_taken_0x129f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F38u;
            // 0x129f3c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f38) {
            ctx->pc = 0x129F48u;
            goto label_129f48;
        }
    }
    ctx->pc = 0x129F40u;
    // 0x129f40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129F40u;
    {
        const bool branch_taken_0x129f40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F40u;
            // 0x129f44: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f40) {
            ctx->pc = 0x129F50u;
            goto label_129f50;
        }
    }
    ctx->pc = 0x129F48u;
label_129f48:
    // 0x129f48: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x129F48u;
    {
        const bool branch_taken_0x129f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F48u;
            // 0x129f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f48) {
            ctx->pc = 0x129F98u;
            goto label_129f98;
        }
    }
    ctx->pc = 0x129F50u;
label_129f50:
    // 0x129f50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129F50u;
    {
        const bool branch_taken_0x129f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F50u;
            // 0x129f54: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f50) {
            ctx->pc = 0x129F68u;
            goto label_129f68;
        }
    }
    ctx->pc = 0x129F58u;
    // 0x129f58: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x129F58u;
    {
        const bool branch_taken_0x129f58 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x129F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F58u;
            // 0x129f5c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f58) {
            ctx->pc = 0x129F48u;
            goto label_129f48;
        }
    }
    ctx->pc = 0x129F60u;
    // 0x129f60: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x129F60u;
    {
        const bool branch_taken_0x129f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F60u;
            // 0x129f64: 0x2403001e  addiu       $v1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f60) {
            ctx->pc = 0x129F80u;
            goto label_129f80;
        }
    }
    ctx->pc = 0x129F68u;
label_129f68:
    // 0x129f68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x129f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129f6c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x129f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x129f70: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x129f70u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x129f74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x129f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x129f78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x129F78u;
    {
        const bool branch_taken_0x129f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F78u;
            // 0x129f7c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129f78) {
            ctx->pc = 0x129F98u;
            goto label_129f98;
        }
    }
    ctx->pc = 0x129F80u;
label_129f80:
    // 0x129f80: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x129f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x129f84: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x129f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x129f88: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x129f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x129f8c: 0x621006  srlv        $v0, $v0, $v1
    ctx->pc = 0x129f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x129f90: 0x22023  negu        $a0, $v0
    ctx->pc = 0x129f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x129f94: 0x85100b  movn        $v0, $a0, $a1
    ctx->pc = 0x129f94u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_129f98:
    // 0x129f98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x129f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x129f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x129F9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129F9Cu;
            // 0x129fa0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129F48u: goto label_129f48;
            case 0x129F50u: goto label_129f50;
            case 0x129F68u: goto label_129f68;
            case 0x129F80u: goto label_129f80;
            case 0x129F98u: goto label_129f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x129FA4u;
}
