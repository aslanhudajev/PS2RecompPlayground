#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: SetVoiceAsync
// Address: 0x10bd38 - 0x10bf40
void SetVoiceAsync_0x10bd38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x10bd38u;

    // 0x10bd38: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10bd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
    // 0x10bd3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bd3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bd40: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x10bd40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bd44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bd48: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x10BD48u;
    {
        const bool branch_taken_0x10bd48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD48u;
            // 0x10bd4c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd48) {
            ctx->pc = 0x10BD9Cu;
            goto label_10bd9c;
        }
    }
    ctx->pc = 0x10BD50u;
    // 0x10bd50: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x10bd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x10bd54: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BD54u;
    {
        const bool branch_taken_0x10bd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bd54) {
            ctx->pc = 0x10BD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD54u;
            // 0x10bd58: 0xaf8083f4  sw          $zero, -0x7C0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935540), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10BD68u;
            goto label_10bd68;
        }
    }
    ctx->pc = 0x10BD5Cu;
    // 0x10bd5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bd60: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x10bd60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
    // 0x10bd64: 0xaf8283f4  sw          $v0, -0x7C0C($gp)
    ctx->pc = 0x10bd64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935540), GPR_U32(ctx, 2));
label_10bd68:
    // 0x10bd68: 0x8f8283f4  lw          $v0, -0x7C0C($gp)
    ctx->pc = 0x10bd68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10bd6c: 0x53040  sll         $a2, $a1, 1
    ctx->pc = 0x10bd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bd70: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bd70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bd74: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10bd74u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10bd78: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x10bd78u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x10bd7c: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BD7Cu;
    SET_GPR_U32(ctx, 31, 0x10BD84u);
    ctx->pc = 0x10BD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD7Cu;
            // 0x10bd80: 0x24071eff  addiu       $a3, $zero, 0x1EFF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD84u; }
        if (ctx->pc != 0x10BD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BD84u; }
        if (ctx->pc != 0x10BD84u) { return; }
    }
    ctx->pc = 0x10BD84u;
    // 0x10bd84: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10bd84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bd88: 0x14430063  bne         $v0, $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x10BD88u;
    {
        const bool branch_taken_0x10bd88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD88u;
            // 0x10bd8c: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd88) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BD90u;
    // 0x10bd90: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bd90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bd94: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x10BD94u;
    {
        const bool branch_taken_0x10bd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BD94u;
            // 0x10bd98: 0x24845eb0  addiu       $a0, $a0, 0x5EB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bd94) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BD9Cu;
label_10bd9c:
    // 0x10bd9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bda0: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x10BDA0u;
    {
        const bool branch_taken_0x10bda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDA0u;
            // 0x10bda4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bda0) {
            ctx->pc = 0x10BF38u;
            goto label_10bf38;
        }
    }
    ctx->pc = 0x10BDA8u;
    // 0x10bda8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10bda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10bdac: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10BDACu;
    {
        const bool branch_taken_0x10bdac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDACu;
            // 0x10bdb0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdac) {
            ctx->pc = 0x10BDECu;
            goto label_10bdec;
        }
    }
    ctx->pc = 0x10BDB4u;
    // 0x10bdb4: 0x8f8683f4  lw          $a2, -0x7C0C($gp)
    ctx->pc = 0x10bdb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10bdb8: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10bdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bdbc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bdbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bdc0: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10bdc0u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10bdc4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10bdc4u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10bdc8: 0x24071eff  addiu       $a3, $zero, 0x1EFF
    ctx->pc = 0x10bdc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7935));
    // 0x10bdcc: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BDCCu;
    SET_GPR_U32(ctx, 31, 0x10BDD4u);
    ctx->pc = 0x10BDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDCCu;
            // 0x10bdd0: 0x34c60100  ori         $a2, $a2, 0x100 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BDD4u; }
        if (ctx->pc != 0x10BDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BDD4u; }
        if (ctx->pc != 0x10BDD4u) { return; }
    }
    ctx->pc = 0x10BDD4u;
    // 0x10bdd4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10bdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10bdd8: 0x1443004f  bne         $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x10BDD8u;
    {
        const bool branch_taken_0x10bdd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDD8u;
            // 0x10bddc: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdd8) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BDE0u;
    // 0x10bde0: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bde0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bde4: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x10BDE4u;
    {
        const bool branch_taken_0x10bde4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDE4u;
            // 0x10bde8: 0x24845eb8  addiu       $a0, $a0, 0x5EB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bde4) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BDECu;
label_10bdec:
    // 0x10bdec: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x10BDECu;
    {
        const bool branch_taken_0x10bdec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDECu;
            // 0x10bdf0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdec) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BDF4u;
    // 0x10bdf4: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x10BDF4u;
    {
        const bool branch_taken_0x10bdf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BDF4u;
            // 0x10bdf8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bdf4) {
            ctx->pc = 0x10BE30u;
            goto label_10be30;
        }
    }
    ctx->pc = 0x10BDFCu;
    // 0x10bdfc: 0x8f8683f4  lw          $a2, -0x7C0C($gp)
    ctx->pc = 0x10bdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10be00: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10be00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10be04: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10be04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be08: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10be08u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10be0c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10be0cu;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10be10: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BE10u;
    SET_GPR_U32(ctx, 31, 0x10BE18u);
    ctx->pc = 0x10BE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE10u;
            // 0x10be14: 0x34c60200  ori         $a2, $a2, 0x200 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)512u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE18u; }
        if (ctx->pc != 0x10BE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE18u; }
        if (ctx->pc != 0x10BE18u) { return; }
    }
    ctx->pc = 0x10BE18u;
    // 0x10be18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10be18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10be1c: 0x1443003e  bne         $v0, $v1, . + 4 + (0x3E << 2)
    ctx->pc = 0x10BE1Cu;
    {
        const bool branch_taken_0x10be1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE1Cu;
            // 0x10be20: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be1c) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BE24u;
    // 0x10be24: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10be24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10be28: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x10BE28u;
    {
        const bool branch_taken_0x10be28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE28u;
            // 0x10be2c: 0x24845ec0  addiu       $a0, $a0, 0x5EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be28) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BE30u;
label_10be30:
    // 0x10be30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BE30u;
    {
        const bool branch_taken_0x10be30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE30u;
            // 0x10be34: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be30) {
            ctx->pc = 0x10BE40u;
            goto label_10be40;
        }
    }
    ctx->pc = 0x10BE38u;
label_10be38:
    // 0x10be38: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x10BE38u;
    {
        const bool branch_taken_0x10be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE38u;
            // 0x10be3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be38) {
            ctx->pc = 0x10BF34u;
            goto label_10bf34;
        }
    }
    ctx->pc = 0x10BE40u;
label_10be40:
    // 0x10be40: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10BE40u;
    {
        const bool branch_taken_0x10be40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE40u;
            // 0x10be44: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be40) {
            ctx->pc = 0x10BE80u;
            goto label_10be80;
        }
    }
    ctx->pc = 0x10BE48u;
    // 0x10be48: 0x8f8683f4  lw          $a2, -0x7C0C($gp)
    ctx->pc = 0x10be48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10be4c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10be4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10be50: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x10be50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be54: 0x34058050  ori         $a1, $zero, 0x8050
    ctx->pc = 0x10be54u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32848u)));
    // 0x10be58: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10be58u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10be5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be60: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BE60u;
    SET_GPR_U32(ctx, 31, 0x10BE68u);
    ctx->pc = 0x10BE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE60u;
            // 0x10be64: 0x34c62040  ori         $a2, $a2, 0x2040 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)8256u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE68u; }
        if (ctx->pc != 0x10BE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BE68u; }
        if (ctx->pc != 0x10BE68u) { return; }
    }
    ctx->pc = 0x10BE68u;
    // 0x10be68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10be68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10be6c: 0x1443002a  bne         $v0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x10BE6Cu;
    {
        const bool branch_taken_0x10be6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BE70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE6Cu;
            // 0x10be70: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be6c) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BE74u;
    // 0x10be74: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10be74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10be78: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x10BE78u;
    {
        const bool branch_taken_0x10be78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE78u;
            // 0x10be7c: 0x24845ec8  addiu       $a0, $a0, 0x5EC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be78) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BE80u;
label_10be80:
    // 0x10be80: 0x1062ffed  beq         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x10BE80u;
    {
        const bool branch_taken_0x10be80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BE84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE80u;
            // 0x10be84: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be80) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BE88u;
    // 0x10be88: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10BE88u;
    {
        const bool branch_taken_0x10be88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BE88u;
            // 0x10be8c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be88) {
            ctx->pc = 0x10BEC8u;
            goto label_10bec8;
        }
    }
    ctx->pc = 0x10BE90u;
    // 0x10be90: 0x8f8683f4  lw          $a2, -0x7C0C($gp)
    ctx->pc = 0x10be90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10be94: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10be94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10be98: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10be98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be9c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10be9cu;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10bea0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10bea0u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10bea4: 0x2407000f  addiu       $a3, $zero, 0xF
    ctx->pc = 0x10bea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x10bea8: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BEA8u;
    SET_GPR_U32(ctx, 31, 0x10BEB0u);
    ctx->pc = 0x10BEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEA8u;
            // 0x10beac: 0x34c60300  ori         $a2, $a2, 0x300 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)768u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEB0u; }
        if (ctx->pc != 0x10BEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEB0u; }
        if (ctx->pc != 0x10BEB0u) { return; }
    }
    ctx->pc = 0x10BEB0u;
    // 0x10beb0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10beb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10beb4: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10BEB4u;
    {
        const bool branch_taken_0x10beb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEB4u;
            // 0x10beb8: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10beb4) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BEBCu;
    // 0x10bebc: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bec0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x10BEC0u;
    {
        const bool branch_taken_0x10bec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEC0u;
            // 0x10bec4: 0x24845ed0  addiu       $a0, $a0, 0x5ED0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec0) {
            ctx->pc = 0x10BF0Cu;
            goto label_10bf0c;
        }
    }
    ctx->pc = 0x10BEC8u;
label_10bec8:
    // 0x10bec8: 0x1062ffdb  beq         $v1, $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x10BEC8u;
    {
        const bool branch_taken_0x10bec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEC8u;
            // 0x10becc: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec8) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BED0u;
    // 0x10bed0: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x10BED0u;
    {
        const bool branch_taken_0x10bed0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x10BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BED0u;
            // 0x10bed4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bed0) {
            ctx->pc = 0x10BF28u;
            goto label_10bf28;
        }
    }
    ctx->pc = 0x10BED8u;
    // 0x10bed8: 0x8f8683f4  lw          $a2, -0x7C0C($gp)
    ctx->pc = 0x10bed8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935540)));
    // 0x10bedc: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x10bedcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x10bee0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bee4: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x10bee4u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)32784u)));
    // 0x10bee8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x10bee8u;
    SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x10beec: 0x24071fc0  addiu       $a3, $zero, 0x1FC0
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8128));
    // 0x10bef0: 0xc045c80  jal         func_117200
    ctx->pc = 0x10BEF0u;
    SET_GPR_U32(ctx, 31, 0x10BEF8u);
    ctx->pc = 0x10BEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEF0u;
            // 0x10bef4: 0x34c60400  ori         $a2, $a2, 0x400 (Delay Slot)
        SET_GPR_VEC(ctx, 6, PS2_POR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)1024u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117200u;
    if (runtime->hasFunction(0x117200u)) {
        auto targetFn = runtime->lookupFunction(0x117200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEF8u; }
        if (ctx->pc != 0x10BEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceSdRemote_0x117200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BEF8u; }
        if (ctx->pc != 0x10BEF8u) { return; }
    }
    ctx->pc = 0x10BEF8u;
    // 0x10bef8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x10bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10befc: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BEFCu;
    {
        const bool branch_taken_0x10befc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x10BF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BEFCu;
            // 0x10bf00: 0x8f838390  lw          $v1, -0x7C70($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10befc) {
            ctx->pc = 0x10BF18u;
            goto label_10bf18;
        }
    }
    ctx->pc = 0x10BF04u;
    // 0x10bf04: 0x3c040017  lui         $a0, 0x17
    ctx->pc = 0x10bf04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)23 << 16));
    // 0x10bf08: 0x24845ed8  addiu       $a0, $a0, 0x5ED8
    ctx->pc = 0x10bf08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24280));
label_10bf0c:
    // 0x10bf0c: 0xc04ace4  jal         func_12B390
    ctx->pc = 0x10BF0Cu;
    SET_GPR_U32(ctx, 31, 0x10BF14u);
    ctx->pc = 0x12B390u;
    if (runtime->hasFunction(0x12B390u)) {
        auto targetFn = runtime->lookupFunction(0x12B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF14u; }
        if (ctx->pc != 0x10BF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x12b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10BF14u; }
        if (ctx->pc != 0x10BF14u) { return; }
    }
    ctx->pc = 0x10BF14u;
    // 0x10bf14: 0x8f838390  lw          $v1, -0x7C70($gp)
    ctx->pc = 0x10bf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935440)));
label_10bf18:
    // 0x10bf18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10bf18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10bf1c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x10bf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x10bf20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10BF20u;
    {
        const bool branch_taken_0x10bf20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF20u;
            // 0x10bf24: 0xaf838390  sw          $v1, -0x7C70($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf20) {
            ctx->pc = 0x10BF34u;
            goto label_10bf34;
        }
    }
    ctx->pc = 0x10BF28u;
label_10bf28:
    // 0x10bf28: 0x1062ffc3  beq         $v1, $v0, . + 4 + (-0x3D << 2)
    ctx->pc = 0x10BF28u;
    {
        const bool branch_taken_0x10bf28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF28u;
            // 0x10bf2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf28) {
            ctx->pc = 0x10BE38u;
            goto label_10be38;
        }
    }
    ctx->pc = 0x10BF30u;
    // 0x10bf30: 0xaf808390  sw          $zero, -0x7C70($gp)
    ctx->pc = 0x10bf30u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935440), GPR_U32(ctx, 0));
label_10bf34:
    // 0x10bf34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bf34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10bf38:
    // 0x10bf38: 0x3e00008  jr          $ra
    ctx->pc = 0x10BF38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10BF38u;
            // 0x10bf3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x10BD68u: goto label_10bd68;
            case 0x10BD9Cu: goto label_10bd9c;
            case 0x10BDECu: goto label_10bdec;
            case 0x10BE30u: goto label_10be30;
            case 0x10BE38u: goto label_10be38;
            case 0x10BE40u: goto label_10be40;
            case 0x10BE80u: goto label_10be80;
            case 0x10BEC8u: goto label_10bec8;
            case 0x10BF0Cu: goto label_10bf0c;
            case 0x10BF18u: goto label_10bf18;
            case 0x10BF28u: goto label_10bf28;
            case 0x10BF34u: goto label_10bf34;
            case 0x10BF38u: goto label_10bf38;
            default: break;
        }
        return;
    }
    ctx->pc = 0x10BF40u;
}
