#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: fptoui
// Address: 0x129fa8 - 0x12a040
void fptoui_0x129fa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("fptoui_0x129fa8");
#endif

    ctx->pc = 0x129fa8u;

    // 0x129fa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x129fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x129fac: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x129facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x129fb0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x129fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x129fb4: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x129fb4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x129fb8: 0xc04a586  jal         func_129618
    ctx->pc = 0x129FB8u;
    SET_GPR_U32(ctx, 31, 0x129FC0u);
    ctx->pc = 0x129FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x129FB8u;
            // 0x129fbc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129618u;
    if (runtime->hasFunction(0x129618u)) {
        auto targetFn = runtime->lookupFunction(0x129618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FC0u; }
        if (ctx->pc != 0x129FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___unpack_f_0x129618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129FC0u; }
        if (ctx->pc != 0x129FC0u) { return; }
    }
    ctx->pc = 0x129FC0u;
    // 0x129fc0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x129fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129fc4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x129fc4u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2u)));
    // 0x129fc8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129FC8u;
    {
        const bool branch_taken_0x129fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FC8u;
            // 0x129fcc: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fc8) {
            ctx->pc = 0x129FD8u;
            goto label_129fd8;
        }
    }
    ctx->pc = 0x129FD0u;
    // 0x129fd0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129FD0u;
    {
        const bool branch_taken_0x129fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FD0u;
            // 0x129fd4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fd0) {
            ctx->pc = 0x129FE0u;
            goto label_129fe0;
        }
    }
    ctx->pc = 0x129FD8u;
label_129fd8:
    // 0x129fd8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x129FD8u;
    {
        const bool branch_taken_0x129fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FD8u;
            // 0x129fdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fd8) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x129FE0u;
label_129fe0:
    // 0x129fe0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x129FE0u;
    {
        const bool branch_taken_0x129fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FE0u;
            // 0x129fe4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fe0) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x129FE8u;
    // 0x129fe8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x129fe8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)4u)));
    // 0x129fec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x129FECu;
    {
        const bool branch_taken_0x129fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FECu;
            // 0x129ff0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129fec) {
            ctx->pc = 0x12A004u;
            goto label_12a004;
        }
    }
    ctx->pc = 0x129FF4u;
    // 0x129ff4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x129FF4u;
    {
        const bool branch_taken_0x129ff4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x129FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129FF4u;
            // 0x129ff8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x129ff4) {
            ctx->pc = 0x129FD8u;
            goto label_129fd8;
        }
    }
    ctx->pc = 0x129FFCu;
    // 0x129ffc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129FFCu;
    {
        const bool branch_taken_0x129ffc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129ffc) {
            ctx->pc = 0x12A000u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129FFCu;
            // 0x12a000: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A010u;
            goto label_12a010;
        }
    }
    ctx->pc = 0x12A004u;
label_12a004:
    // 0x12a004: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12a008: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x12A008u;
    {
        const bool branch_taken_0x12a008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A008u;
            // 0x12a00c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a008) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x12A010u;
label_12a010:
    // 0x12a010: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12A010u;
    {
        const bool branch_taken_0x12a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a010) {
            ctx->pc = 0x12A014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A010u;
            // 0x12a014: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A028u;
            goto label_12a028;
        }
    }
    ctx->pc = 0x12A018u;
    // 0x12a018: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x12a018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a01c: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x12a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x12a020: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12A020u;
    {
        const bool branch_taken_0x12a020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A020u;
            // 0x12a024: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a020) {
            ctx->pc = 0x12A034u;
            goto label_12a034;
        }
    }
    ctx->pc = 0x12A028u;
label_12a028:
    // 0x12a028: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x12a028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x12a02c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x12a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12a030: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x12a030u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_12a034:
    // 0x12a034: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12a034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a038: 0x3e00008  jr          $ra
    ctx->pc = 0x12A038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12A03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A038u;
            // 0x12a03c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129FD8u: goto label_129fd8;
            case 0x129FE0u: goto label_129fe0;
            case 0x12A004u: goto label_12a004;
            case 0x12A010u: goto label_12a010;
            case 0x12A028u: goto label_12a028;
            case 0x12A034u: goto label_12a034;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12A040u;
}
