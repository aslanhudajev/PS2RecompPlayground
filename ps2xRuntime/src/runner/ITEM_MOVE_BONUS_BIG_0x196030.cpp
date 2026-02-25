#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: ITEM_MOVE_BONUS_BIG
// Address: 0x196030 - 0x1961cc
void ITEM_MOVE_BONUS_BIG_0x196030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("ITEM_MOVE_BONUS_BIG_0x196030");
#endif

    ctx->pc = 0x196030u;

    // 0x196030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x196030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x196034: 0x3c023bd4  lui         $v0, 0x3BD4
    ctx->pc = 0x196034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15316 << 16));
    // 0x196038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19603c: 0x3442fdf4  ori         $v0, $v0, 0xFDF4
    ctx->pc = 0x19603cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65012u)));
    // 0x196040: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x196040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x196044: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x196044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19604c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x19604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x196050: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x196050u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x196054: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x196054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x196058: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x196058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19605c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x19605cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x196060: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x196060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x196064: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x196064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x196068: 0x10620029  beq         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x196068u;
    {
        const bool branch_taken_0x196068 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19606Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196068u;
            // 0x19606c: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196068) {
            ctx->pc = 0x196110u;
            goto label_196110;
        }
    }
    ctx->pc = 0x196070u;
    // 0x196070: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x196070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x196074: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x196074u;
    {
        const bool branch_taken_0x196074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x196078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196074u;
            // 0x196078: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196074) {
            ctx->pc = 0x196100u;
            goto label_196100;
        }
    }
    ctx->pc = 0x19607Cu;
    // 0x19607c: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x19607Cu;
    {
        const bool branch_taken_0x19607c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19607c) {
            ctx->pc = 0x1960F0u;
            goto label_1960f0;
        }
    }
    ctx->pc = 0x196084u;
    // 0x196084: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x196084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x196088: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x196088u;
    {
        const bool branch_taken_0x196088 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19608Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196088u;
            // 0x19608c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196088) {
            ctx->pc = 0x1960E0u;
            goto label_1960e0;
        }
    }
    ctx->pc = 0x196090u;
    // 0x196090: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x196090u;
    {
        const bool branch_taken_0x196090 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x196090) {
            ctx->pc = 0x1960D0u;
            goto label_1960d0;
        }
    }
    ctx->pc = 0x196098u;
    // 0x196098: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x196098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x19609c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x19609Cu;
    {
        const bool branch_taken_0x19609c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x19609c) {
            ctx->pc = 0x1960C0u;
            goto label_1960c0;
        }
    }
    ctx->pc = 0x1960A4u;
    // 0x1960a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1960A4u;
    {
        const bool branch_taken_0x1960a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960a4) {
            ctx->pc = 0x1960B8u;
            goto label_1960b8;
        }
    }
    ctx->pc = 0x1960ACu;
    // 0x1960ac: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1960ACu;
    {
        const bool branch_taken_0x1960ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1960ac) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x1960B4u;
    // 0x1960b4: 0x0  nop
    ctx->pc = 0x1960b4u;
    // NOP
label_1960b8:
    // 0x1960b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1960B8u;
    {
        const bool branch_taken_0x1960b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960B8u;
            // 0x1960bc: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960b8) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x1960C0u;
label_1960c0:
    // 0x1960c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1960c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1960c4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1960C4u;
    {
        const bool branch_taken_0x1960c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960C4u;
            // 0x1960c8: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960c4) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x1960CCu;
    // 0x1960cc: 0x0  nop
    ctx->pc = 0x1960ccu;
    // NOP
label_1960d0:
    // 0x1960d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1960d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1960d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1960D4u;
    {
        const bool branch_taken_0x1960d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960D4u;
            // 0x1960d8: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960d4) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x1960DCu;
    // 0x1960dc: 0x0  nop
    ctx->pc = 0x1960dcu;
    // NOP
label_1960e0:
    // 0x1960e0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1960e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1960e4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1960E4u;
    {
        const bool branch_taken_0x1960e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960E4u;
            // 0x1960e8: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960e4) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x1960ECu;
    // 0x1960ec: 0x0  nop
    ctx->pc = 0x1960ecu;
    // NOP
label_1960f0:
    // 0x1960f0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1960f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1960f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1960F4u;
    {
        const bool branch_taken_0x1960f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1960F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1960F4u;
            // 0x1960f8: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1960f4) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x1960FCu;
    // 0x1960fc: 0x0  nop
    ctx->pc = 0x1960fcu;
    // NOP
label_196100:
    // 0x196100: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x196100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x196104: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x196104u;
    {
        const bool branch_taken_0x196104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196104u;
            // 0x196108: 0xace20004  sw          $v0, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196104) {
            ctx->pc = 0x196118u;
            goto label_196118;
        }
    }
    ctx->pc = 0x19610Cu;
    // 0x19610c: 0x0  nop
    ctx->pc = 0x19610cu;
    // NOP
label_196110:
    // 0x196110: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x196110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x196114: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x196114u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
label_196118:
    // 0x196118: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x196118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x19611c: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x19611cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
    // 0x196120: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x196120u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x196124: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x196124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x196128: 0xace20038  sw          $v0, 0x38($a3)
    ctx->pc = 0x196128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 2));
    // 0x19612c: 0xc4e10010  lwc1        $f1, 0x10($a3)
    ctx->pc = 0x19612cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x196130: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x196130u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x196134: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x196134u;
    {
        const bool branch_taken_0x196134 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x196138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196134u;
            // 0x196138: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196134) {
            ctx->pc = 0x196150u;
            goto label_196150;
        }
    }
    ctx->pc = 0x19613Cu;
    // 0x19613c: 0xc065c5c  jal         func_197170
    ctx->pc = 0x19613Cu;
    SET_GPR_U32(ctx, 31, 0x196144u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196144u; }
        if (ctx->pc != 0x196144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196144u; }
        if (ctx->pc != 0x196144u) { return; }
    }
    ctx->pc = 0x196144u;
    // 0x196144: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x196144u;
    {
        const bool branch_taken_0x196144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196144) {
            ctx->pc = 0x1961C0u;
            goto label_1961c0;
        }
    }
    ctx->pc = 0x19614Cu;
    // 0x19614c: 0x0  nop
    ctx->pc = 0x19614cu;
    // NOP
label_196150:
    // 0x196150: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x196150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x196154: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x196154u;
    {
        const bool branch_taken_0x196154 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x196158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x196154u;
            // 0x196158: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196154) {
            ctx->pc = 0x196170u;
            goto label_196170;
        }
    }
    ctx->pc = 0x19615Cu;
    // 0x19615c: 0xc065c5c  jal         func_197170
    ctx->pc = 0x19615Cu;
    SET_GPR_U32(ctx, 31, 0x196164u);
    ctx->pc = 0x197170u;
    if (runtime->hasFunction(0x197170u)) {
        auto targetFn = runtime->lookupFunction(0x197170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196164u; }
        if (ctx->pc != 0x196164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ItemFree_0x197170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x196164u; }
        if (ctx->pc != 0x196164u) { return; }
    }
    ctx->pc = 0x196164u;
    // 0x196164: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x196164u;
    {
        const bool branch_taken_0x196164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x196164) {
            ctx->pc = 0x1961C0u;
            goto label_1961c0;
        }
    }
    ctx->pc = 0x19616Cu;
    // 0x19616c: 0x0  nop
    ctx->pc = 0x19616cu;
    // NOP
label_196170:
    // 0x196170: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x196170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x196174: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x196174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x196178: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x196178u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x19617c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x196180: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x196180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x196184: 0x24e5001c  addiu       $a1, $a3, 0x1C
    ctx->pc = 0x196184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 28));
    // 0x196188: 0x24c66e90  addiu       $a2, $a2, 0x6E90
    ctx->pc = 0x196188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28304));
    // 0x19618c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x19618cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x196190: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x196190u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x196194: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x196194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x196198: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x196198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19619c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19619cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1961a0: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x1961a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x1961a4: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1961a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1961a8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1961a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1961ac: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x1961acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
    // 0x1961b0: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x1961b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1961b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1961b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1961b8: 0xc053ca4  jal         func_14F290
    ctx->pc = 0x1961B8u;
    SET_GPR_U32(ctx, 31, 0x1961C0u);
    ctx->pc = 0x1961BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1961B8u;
            // 0x1961bc: 0xe4e00028  swc1        $f0, 0x28($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F290u;
    if (runtime->hasFunction(0x14F290u)) {
        auto targetFn = runtime->lookupFunction(0x14F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961C0u; }
        if (ctx->pc != 0x1961C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionADD_Dist_0x14f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1961C0u; }
        if (ctx->pc != 0x1961C0u) { return; }
    }
    ctx->pc = 0x1961C0u;
label_1961c0:
    // 0x1961c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1961c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1961c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1961C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1961C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1961C4u;
            // 0x1961c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1960B8u: goto label_1960b8;
            case 0x1960C0u: goto label_1960c0;
            case 0x1960D0u: goto label_1960d0;
            case 0x1960E0u: goto label_1960e0;
            case 0x1960F0u: goto label_1960f0;
            case 0x196100u: goto label_196100;
            case 0x196110u: goto label_196110;
            case 0x196118u: goto label_196118;
            case 0x196150u: goto label_196150;
            case 0x196170u: goto label_196170;
            case 0x1961C0u: goto label_1961c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1961CCu;
}
