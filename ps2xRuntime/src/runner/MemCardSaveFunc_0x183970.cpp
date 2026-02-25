#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: MemCardSaveFunc
// Address: 0x183970 - 0x185068
void MemCardSaveFunc_0x183970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("MemCardSaveFunc_0x183970");
#endif

    ctx->pc = 0x183970u;

    // 0x183970: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x183974: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x183974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x183978: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x183978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18397c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x183980: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x183980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183984: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x183984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x183988: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x183988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18398c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x183990: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x183990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x183994: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x183994u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x183998: 0xc0619e4  jal         func_186790
    ctx->pc = 0x183998u;
    SET_GPR_U32(ctx, 31, 0x1839A0u);
    ctx->pc = 0x18399Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183998u;
            // 0x18399c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186790u;
    if (runtime->hasFunction(0x186790u)) {
        auto targetFn = runtime->lookupFunction(0x186790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839A0u; }
        if (ctx->pc != 0x1839A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgCacheClear_0x186790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839A0u; }
        if (ctx->pc != 0x1839A0u) { return; }
    }
    ctx->pc = 0x1839A0u;
    // 0x1839a0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1839a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1839a4: 0x0  nop
    ctx->pc = 0x1839a4u;
    // NOP
label_1839a8:
    // 0x1839a8: 0xc050af4  jal         func_142BD0
    ctx->pc = 0x1839A8u;
    SET_GPR_U32(ctx, 31, 0x1839B0u);
    ctx->pc = 0x142BD0u;
    if (runtime->hasFunction(0x142BD0u)) {
        auto targetFn = runtime->lookupFunction(0x142BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839B0u; }
        if (ctx->pc != 0x1839B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        wrsLeaveTask_0x142bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1839B0u; }
        if (ctx->pc != 0x1839B0u) { return; }
    }
    ctx->pc = 0x1839B0u;
    // 0x1839b0: 0x2402015e  addiu       $v0, $zero, 0x15E
    ctx->pc = 0x1839b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x1839b4: 0x1242027c  beq         $s2, $v0, . + 4 + (0x27C << 2)
    ctx->pc = 0x1839B4u;
    {
        const bool branch_taken_0x1839b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1839B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839B4u;
            // 0x1839b8: 0x24020154  addiu       $v0, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839b4) {
            ctx->pc = 0x1843A8u;
            goto label_1843a8;
        }
    }
    ctx->pc = 0x1839BCu;
    // 0x1839bc: 0x1242026e  beq         $s2, $v0, . + 4 + (0x26E << 2)
    ctx->pc = 0x1839BCu;
    {
        const bool branch_taken_0x1839bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1839bc) {
            ctx->pc = 0x184378u;
            goto label_184378;
        }
    }
    ctx->pc = 0x1839C4u;
    // 0x1839c4: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x1839c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x1839c8: 0x12420267  beq         $s2, $v0, . + 4 + (0x267 << 2)
    ctx->pc = 0x1839C8u;
    {
        const bool branch_taken_0x1839c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1839CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839C8u;
            // 0x1839cc: 0x24020140  addiu       $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839c8) {
            ctx->pc = 0x184368u;
            goto label_184368;
        }
    }
    ctx->pc = 0x1839D0u;
    // 0x1839d0: 0x12420221  beq         $s2, $v0, . + 4 + (0x221 << 2)
    ctx->pc = 0x1839D0u;
    {
        const bool branch_taken_0x1839d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1839d0) {
            ctx->pc = 0x184258u;
            goto label_184258;
        }
    }
    ctx->pc = 0x1839D8u;
    // 0x1839d8: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x1839d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x1839dc: 0x124201da  beq         $s2, $v0, . + 4 + (0x1DA << 2)
    ctx->pc = 0x1839DCu;
    {
        const bool branch_taken_0x1839dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1839E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839DCu;
            // 0x1839e0: 0x24020136  addiu       $v0, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839dc) {
            ctx->pc = 0x184148u;
            goto label_184148;
        }
    }
    ctx->pc = 0x1839E4u;
    // 0x1839e4: 0x124201ca  beq         $s2, $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1839E4u;
    {
        const bool branch_taken_0x1839e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1839e4) {
            ctx->pc = 0x184110u;
            goto label_184110;
        }
    }
    ctx->pc = 0x1839ECu;
    // 0x1839ec: 0x24020122  addiu       $v0, $zero, 0x122
    ctx->pc = 0x1839ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
    // 0x1839f0: 0x124201b9  beq         $s2, $v0, . + 4 + (0x1B9 << 2)
    ctx->pc = 0x1839F0u;
    {
        const bool branch_taken_0x1839f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1839F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1839F0u;
            // 0x1839f4: 0x240200fa  addiu       $v0, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1839f0) {
            ctx->pc = 0x1840D8u;
            goto label_1840d8;
        }
    }
    ctx->pc = 0x1839F8u;
    // 0x1839f8: 0x124201a5  beq         $s2, $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x1839F8u;
    {
        const bool branch_taken_0x1839f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1839f8) {
            ctx->pc = 0x184090u;
            goto label_184090;
        }
    }
    ctx->pc = 0x183A00u;
    // 0x183a00: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x183a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x183a04: 0x1242015c  beq         $s2, $v0, . + 4 + (0x15C << 2)
    ctx->pc = 0x183A04u;
    {
        const bool branch_taken_0x183a04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A04u;
            // 0x183a08: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a04) {
            ctx->pc = 0x183F78u;
            goto label_183f78;
        }
    }
    ctx->pc = 0x183A0Cu;
    // 0x183a0c: 0x12420114  beq         $s2, $v0, . + 4 + (0x114 << 2)
    ctx->pc = 0x183A0Cu;
    {
        const bool branch_taken_0x183a0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a0c) {
            ctx->pc = 0x183E60u;
            goto label_183e60;
        }
    }
    ctx->pc = 0x183A14u;
    // 0x183a14: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x183a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x183a18: 0x124200cd  beq         $s2, $v0, . + 4 + (0xCD << 2)
    ctx->pc = 0x183A18u;
    {
        const bool branch_taken_0x183a18 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A18u;
            // 0x183a1c: 0x240200dc  addiu       $v0, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a18) {
            ctx->pc = 0x183D50u;
            goto label_183d50;
        }
    }
    ctx->pc = 0x183A20u;
    // 0x183a20: 0x124200bf  beq         $s2, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x183A20u;
    {
        const bool branch_taken_0x183a20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a20) {
            ctx->pc = 0x183D20u;
            goto label_183d20;
        }
    }
    ctx->pc = 0x183A28u;
    // 0x183a28: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x183a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x183a2c: 0x124200b8  beq         $s2, $v0, . + 4 + (0xB8 << 2)
    ctx->pc = 0x183A2Cu;
    {
        const bool branch_taken_0x183a2c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A2Cu;
            // 0x183a30: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a2c) {
            ctx->pc = 0x183D10u;
            goto label_183d10;
        }
    }
    ctx->pc = 0x183A34u;
    // 0x183a34: 0x12420094  beq         $s2, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x183A34u;
    {
        const bool branch_taken_0x183a34 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a34) {
            ctx->pc = 0x183C88u;
            goto label_183c88;
        }
    }
    ctx->pc = 0x183A3Cu;
    // 0x183a3c: 0x240200ca  addiu       $v0, $zero, 0xCA
    ctx->pc = 0x183a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
    // 0x183a40: 0x1242008d  beq         $s2, $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x183A40u;
    {
        const bool branch_taken_0x183a40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A40u;
            // 0x183a44: 0x240200c9  addiu       $v0, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a40) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A48u;
    // 0x183a48: 0x1242008b  beq         $s2, $v0, . + 4 + (0x8B << 2)
    ctx->pc = 0x183A48u;
    {
        const bool branch_taken_0x183a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a48) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A50u;
    // 0x183a50: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x183a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x183a54: 0x12420088  beq         $s2, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x183A54u;
    {
        const bool branch_taken_0x183a54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A54u;
            // 0x183a58: 0x240200c0  addiu       $v0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a54) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A5Cu;
    // 0x183a5c: 0x12420086  beq         $s2, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x183A5Cu;
    {
        const bool branch_taken_0x183a5c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a5c) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A64u;
    // 0x183a64: 0x240200bf  addiu       $v0, $zero, 0xBF
    ctx->pc = 0x183a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x183a68: 0x12420083  beq         $s2, $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x183A68u;
    {
        const bool branch_taken_0x183a68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A68u;
            // 0x183a6c: 0x240200be  addiu       $v0, $zero, 0xBE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a68) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A70u;
    // 0x183a70: 0x12420081  beq         $s2, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x183A70u;
    {
        const bool branch_taken_0x183a70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a70) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A78u;
    // 0x183a78: 0x240200b5  addiu       $v0, $zero, 0xB5
    ctx->pc = 0x183a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
    // 0x183a7c: 0x1242007e  beq         $s2, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x183A7Cu;
    {
        const bool branch_taken_0x183a7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A7Cu;
            // 0x183a80: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a7c) {
            ctx->pc = 0x183C78u;
            goto label_183c78;
        }
    }
    ctx->pc = 0x183A84u;
    // 0x183a84: 0x1242006a  beq         $s2, $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x183A84u;
    {
        const bool branch_taken_0x183a84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a84) {
            ctx->pc = 0x183C30u;
            goto label_183c30;
        }
    }
    ctx->pc = 0x183A8Cu;
    // 0x183a8c: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x183a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x183a90: 0x12420045  beq         $s2, $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x183A90u;
    {
        const bool branch_taken_0x183a90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183A90u;
            // 0x183a94: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183a90) {
            ctx->pc = 0x183BA8u;
            goto label_183ba8;
        }
    }
    ctx->pc = 0x183A98u;
    // 0x183a98: 0x12420031  beq         $s2, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x183A98u;
    {
        const bool branch_taken_0x183a98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183a98) {
            ctx->pc = 0x183B60u;
            goto label_183b60;
        }
    }
    ctx->pc = 0x183AA0u;
    // 0x183aa0: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x183aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x183aa4: 0x12420010  beq         $s2, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x183AA4u;
    {
        const bool branch_taken_0x183aa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AA4u;
            // 0x183aa8: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183aa4) {
            ctx->pc = 0x183AE8u;
            goto label_183ae8;
        }
    }
    ctx->pc = 0x183AACu;
    // 0x183aac: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183AACu;
    {
        const bool branch_taken_0x183aac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183aac) {
            ctx->pc = 0x183AD8u;
            goto label_183ad8;
        }
    }
    ctx->pc = 0x183AB4u;
    // 0x183ab4: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x183ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x183ab8: 0x12420007  beq         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x183AB8u;
    {
        const bool branch_taken_0x183ab8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x183ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183AB8u;
            // 0x183abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ab8) {
            ctx->pc = 0x183AD8u;
            goto label_183ad8;
        }
    }
    ctx->pc = 0x183AC0u;
    // 0x183ac0: 0x12420005  beq         $s2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183AC0u;
    {
        const bool branch_taken_0x183ac0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x183ac0) {
            ctx->pc = 0x183AD8u;
            goto label_183ad8;
        }
    }
    ctx->pc = 0x183AC8u;
    // 0x183ac8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x183AC8u;
    {
        const bool branch_taken_0x183ac8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ac8) {
            ctx->pc = 0x183AD8u;
            goto label_183ad8;
        }
    }
    ctx->pc = 0x183AD0u;
    // 0x183ad0: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x183AD0u;
    {
        const bool branch_taken_0x183ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ad0) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183AD8u;
label_183ad8:
    // 0x183ad8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183AD8u;
    SET_GPR_U32(ctx, 31, 0x183AE0u);
    ctx->pc = 0x183ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183AD8u;
            // 0x183adc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AE0u; }
        if (ctx->pc != 0x183AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AE0u; }
        if (ctx->pc != 0x183AE0u) { return; }
    }
    ctx->pc = 0x183AE0u;
    // 0x183ae0: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x183AE0u;
    {
        const bool branch_taken_0x183ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183ae0) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183AE8u;
label_183ae8:
    // 0x183ae8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183AE8u;
    SET_GPR_U32(ctx, 31, 0x183AF0u);
    ctx->pc = 0x183AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183AE8u;
            // 0x183aec: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AF0u; }
        if (ctx->pc != 0x183AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183AF0u; }
        if (ctx->pc != 0x183AF0u) { return; }
    }
    ctx->pc = 0x183AF0u;
    // 0x183af0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183af0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183af4: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x183af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x183af8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183afc: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x183afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x183b00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183b00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183b04: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183B04u;
    {
        const bool branch_taken_0x183b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B04u;
            // 0x183b08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b04) {
            ctx->pc = 0x183B30u;
            goto label_183b30;
        }
    }
    ctx->pc = 0x183B0Cu;
    // 0x183b0c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183b10: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183b10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183b14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183b18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b1c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183B1Cu;
    SET_GPR_U32(ctx, 31, 0x183B24u);
    ctx->pc = 0x183B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B1Cu;
            // 0x183b20: 0x24120190  addiu       $s2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B24u; }
        if (ctx->pc != 0x183B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B24u; }
        if (ctx->pc != 0x183B24u) { return; }
    }
    ctx->pc = 0x183B24u;
    // 0x183b24: 0x1000022a  b           . + 4 + (0x22A << 2)
    ctx->pc = 0x183B24u;
    {
        const bool branch_taken_0x183b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b24) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183B2Cu;
    // 0x183b2c: 0x0  nop
    ctx->pc = 0x183b2cu;
    // NOP
label_183b30:
    // 0x183b30: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183b30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183b34: 0x8c232400  lw          $v1, 0x2400($at)
    ctx->pc = 0x183b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x183b38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183b3c: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x183b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x183b40: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183b40u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183b44: 0x10400222  beqz        $v0, . + 4 + (0x222 << 2)
    ctx->pc = 0x183B44u;
    {
        const bool branch_taken_0x183b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B44u;
            // 0x183b48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b44) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183B4Cu;
    // 0x183b4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b50: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183B50u;
    SET_GPR_U32(ctx, 31, 0x183B58u);
    ctx->pc = 0x183B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B50u;
            // 0x183b54: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B58u; }
        if (ctx->pc != 0x183B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B58u; }
        if (ctx->pc != 0x183B58u) { return; }
    }
    ctx->pc = 0x183B58u;
    // 0x183b58: 0x1000021d  b           . + 4 + (0x21D << 2)
    ctx->pc = 0x183B58u;
    {
        const bool branch_taken_0x183b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b58) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183B60u;
label_183b60:
    // 0x183b60: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183B60u;
    SET_GPR_U32(ctx, 31, 0x183B68u);
    ctx->pc = 0x183B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B60u;
            // 0x183b64: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B68u; }
        if (ctx->pc != 0x183B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B68u; }
        if (ctx->pc != 0x183B68u) { return; }
    }
    ctx->pc = 0x183B68u;
    // 0x183b68: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183b68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183b6c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x183b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x183b70: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183b70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183b74: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x183b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x183b78: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183b78u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183b7c: 0x10400214  beqz        $v0, . + 4 + (0x214 << 2)
    ctx->pc = 0x183B7Cu;
    {
        const bool branch_taken_0x183b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183B7Cu;
            // 0x183b80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183b7c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183B84u;
    // 0x183b84: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183b84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183b88: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183b88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183b8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183b94: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183B94u;
    SET_GPR_U32(ctx, 31, 0x183B9Cu);
    ctx->pc = 0x183B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183B94u;
            // 0x183b98: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B9Cu; }
        if (ctx->pc != 0x183B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183B9Cu; }
        if (ctx->pc != 0x183B9Cu) { return; }
    }
    ctx->pc = 0x183B9Cu;
    // 0x183b9c: 0x1000020c  b           . + 4 + (0x20C << 2)
    ctx->pc = 0x183B9Cu;
    {
        const bool branch_taken_0x183b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183b9c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183BA4u;
    // 0x183ba4: 0x0  nop
    ctx->pc = 0x183ba4u;
    // NOP
label_183ba8:
    // 0x183ba8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183BA8u;
    SET_GPR_U32(ctx, 31, 0x183BB0u);
    ctx->pc = 0x183BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183BA8u;
            // 0x183bac: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BB0u; }
        if (ctx->pc != 0x183BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BB0u; }
        if (ctx->pc != 0x183BB0u) { return; }
    }
    ctx->pc = 0x183BB0u;
    // 0x183bb0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183bb4: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x183bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x183bb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183bb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183bbc: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x183bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x183bc0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183bc0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183bc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183BC4u;
    {
        const bool branch_taken_0x183bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183BC4u;
            // 0x183bc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183bc4) {
            ctx->pc = 0x183BF0u;
            goto label_183bf0;
        }
    }
    ctx->pc = 0x183BCCu;
    // 0x183bcc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183bd0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183bd4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183bdc: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183BDCu;
    SET_GPR_U32(ctx, 31, 0x183BE4u);
    ctx->pc = 0x183BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183BDCu;
            // 0x183be0: 0x24120190  addiu       $s2, $zero, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BE4u; }
        if (ctx->pc != 0x183BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183BE4u; }
        if (ctx->pc != 0x183BE4u) { return; }
    }
    ctx->pc = 0x183BE4u;
    // 0x183be4: 0x100001fa  b           . + 4 + (0x1FA << 2)
    ctx->pc = 0x183BE4u;
    {
        const bool branch_taken_0x183be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183be4) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183BECu;
    // 0x183bec: 0x0  nop
    ctx->pc = 0x183becu;
    // NOP
label_183bf0:
    // 0x183bf0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183bf4: 0x8c232400  lw          $v1, 0x2400($at)
    ctx->pc = 0x183bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x183bf8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183bf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183bfc: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x183bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x183c00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183c00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183c04: 0x104001f2  beqz        $v0, . + 4 + (0x1F2 << 2)
    ctx->pc = 0x183C04u;
    {
        const bool branch_taken_0x183c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C04u;
            // 0x183c08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c04) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183C0Cu;
    // 0x183c0c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183c0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183c10: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183c10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183c14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c1c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183C1Cu;
    SET_GPR_U32(ctx, 31, 0x183C24u);
    ctx->pc = 0x183C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183C1Cu;
            // 0x183c20: 0x241200b4  addiu       $s2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C24u; }
        if (ctx->pc != 0x183C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C24u; }
        if (ctx->pc != 0x183C24u) { return; }
    }
    ctx->pc = 0x183C24u;
    // 0x183c24: 0x100001ea  b           . + 4 + (0x1EA << 2)
    ctx->pc = 0x183C24u;
    {
        const bool branch_taken_0x183c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c24) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183C2Cu;
    // 0x183c2c: 0x0  nop
    ctx->pc = 0x183c2cu;
    // NOP
label_183c30:
    // 0x183c30: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183C30u;
    SET_GPR_U32(ctx, 31, 0x183C38u);
    ctx->pc = 0x183C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183C30u;
            // 0x183c34: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C38u; }
        if (ctx->pc != 0x183C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C38u; }
        if (ctx->pc != 0x183C38u) { return; }
    }
    ctx->pc = 0x183C38u;
    // 0x183c38: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183c38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183c3c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x183c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x183c40: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183c44: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x183c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x183c48: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183c48u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183c4c: 0x104001e0  beqz        $v0, . + 4 + (0x1E0 << 2)
    ctx->pc = 0x183C4Cu;
    {
        const bool branch_taken_0x183c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183C4Cu;
            // 0x183c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183c4c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183C54u;
    // 0x183c54: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183c58: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183c58u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183c5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183c64: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183C64u;
    SET_GPR_U32(ctx, 31, 0x183C6Cu);
    ctx->pc = 0x183C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183C64u;
            // 0x183c68: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C6Cu; }
        if (ctx->pc != 0x183C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C6Cu; }
        if (ctx->pc != 0x183C6Cu) { return; }
    }
    ctx->pc = 0x183C6Cu;
    // 0x183c6c: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x183C6Cu;
    {
        const bool branch_taken_0x183c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c6c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183C74u;
    // 0x183c74: 0x0  nop
    ctx->pc = 0x183c74u;
    // NOP
label_183c78:
    // 0x183c78: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183C78u;
    SET_GPR_U32(ctx, 31, 0x183C80u);
    ctx->pc = 0x183C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183C78u;
            // 0x183c7c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C80u; }
        if (ctx->pc != 0x183C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C80u; }
        if (ctx->pc != 0x183C80u) { return; }
    }
    ctx->pc = 0x183C80u;
    // 0x183c80: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x183C80u;
    {
        const bool branch_taken_0x183c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183c80) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183C88u;
label_183c88:
    // 0x183c88: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183C88u;
    SET_GPR_U32(ctx, 31, 0x183C90u);
    ctx->pc = 0x183C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183C88u;
            // 0x183c8c: 0x24040015  addiu       $a0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C90u; }
        if (ctx->pc != 0x183C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183C90u; }
        if (ctx->pc != 0x183C90u) { return; }
    }
    ctx->pc = 0x183C90u;
    // 0x183c90: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183c94: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x183c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x183c98: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183c9c: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x183c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x183ca0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183ca0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183ca4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x183CA4u;
    {
        const bool branch_taken_0x183ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CA4u;
            // 0x183ca8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ca4) {
            ctx->pc = 0x183CD0u;
            goto label_183cd0;
        }
    }
    ctx->pc = 0x183CACu;
    // 0x183cac: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183cb0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183cb4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cbc: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183CBCu;
    SET_GPR_U32(ctx, 31, 0x183CC4u);
    ctx->pc = 0x183CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183CBCu;
            // 0x183cc0: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CC4u; }
        if (ctx->pc != 0x183CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183CC4u; }
        if (ctx->pc != 0x183CC4u) { return; }
    }
    ctx->pc = 0x183CC4u;
    // 0x183cc4: 0x100001c2  b           . + 4 + (0x1C2 << 2)
    ctx->pc = 0x183CC4u;
    {
        const bool branch_taken_0x183cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183cc4) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183CCCu;
    // 0x183ccc: 0x0  nop
    ctx->pc = 0x183cccu;
    // NOP
label_183cd0:
    // 0x183cd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183cd4: 0x8c232400  lw          $v1, 0x2400($at)
    ctx->pc = 0x183cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9216)));
    // 0x183cd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183cd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183cdc: 0x8c222390  lw          $v0, 0x2390($at)
    ctx->pc = 0x183cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9104)));
    // 0x183ce0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183ce0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183ce4: 0x104001ba  beqz        $v0, . + 4 + (0x1BA << 2)
    ctx->pc = 0x183CE4u;
    {
        const bool branch_taken_0x183ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183CE4u;
            // 0x183ce8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ce4) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183CECu;
    // 0x183cec: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183cecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183cf0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183cf4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183cf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183cfc: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183CFCu;
    SET_GPR_U32(ctx, 31, 0x183D04u);
    ctx->pc = 0x183D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183CFCu;
            // 0x183d00: 0x24120118  addiu       $s2, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D04u; }
        if (ctx->pc != 0x183D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D04u; }
        if (ctx->pc != 0x183D04u) { return; }
    }
    ctx->pc = 0x183D04u;
    // 0x183d04: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x183D04u;
    {
        const bool branch_taken_0x183d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d04) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183D0Cu;
    // 0x183d0c: 0x0  nop
    ctx->pc = 0x183d0cu;
    // NOP
label_183d10:
    // 0x183d10: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183D10u;
    SET_GPR_U32(ctx, 31, 0x183D18u);
    ctx->pc = 0x183D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D10u;
            // 0x183d14: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D18u; }
        if (ctx->pc != 0x183D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D18u; }
        if (ctx->pc != 0x183D18u) { return; }
    }
    ctx->pc = 0x183D18u;
    // 0x183d18: 0x100001ad  b           . + 4 + (0x1AD << 2)
    ctx->pc = 0x183D18u;
    {
        const bool branch_taken_0x183d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d18) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183D20u;
label_183d20:
    // 0x183d20: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183D20u;
    SET_GPR_U32(ctx, 31, 0x183D28u);
    ctx->pc = 0x183D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D20u;
            // 0x183d24: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D28u; }
        if (ctx->pc != 0x183D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D28u; }
        if (ctx->pc != 0x183D28u) { return; }
    }
    ctx->pc = 0x183D28u;
    // 0x183d28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x183d28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d2c: 0x44101a8  bgez        $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x183D2Cu;
    {
        const bool branch_taken_0x183d2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x183D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D2Cu;
            // 0x183d30: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d2c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183D34u;
    // 0x183d34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x183d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183d3c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183D3Cu;
    SET_GPR_U32(ctx, 31, 0x183D44u);
    ctx->pc = 0x183D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D3Cu;
            // 0x183d40: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D44u; }
        if (ctx->pc != 0x183D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D44u; }
        if (ctx->pc != 0x183D44u) { return; }
    }
    ctx->pc = 0x183D44u;
    // 0x183d44: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x183D44u;
    {
        const bool branch_taken_0x183d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183d44) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183D4Cu;
    // 0x183d4c: 0x0  nop
    ctx->pc = 0x183d4cu;
    // NOP
label_183d50:
    // 0x183d50: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183D50u;
    SET_GPR_U32(ctx, 31, 0x183D58u);
    ctx->pc = 0x183D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D50u;
            // 0x183d54: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D58u; }
        if (ctx->pc != 0x183D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D58u; }
        if (ctx->pc != 0x183D58u) { return; }
    }
    ctx->pc = 0x183D58u;
    // 0x183d58: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183d58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183d5c: 0xc061930  jal         func_1864C0
    ctx->pc = 0x183D5Cu;
    SET_GPR_U32(ctx, 31, 0x183D64u);
    ctx->pc = 0x183D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183D5Cu;
            // 0x183d60: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D64u; }
        if (ctx->pc != 0x183D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183D64u; }
        if (ctx->pc != 0x183D64u) { return; }
    }
    ctx->pc = 0x183D64u;
    // 0x183d64: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183d68: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x183d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x183d6c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183d70: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x183d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x183d74: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183d74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183d78: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183D78u;
    {
        const bool branch_taken_0x183d78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D78u;
            // 0x183d7c: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d78) {
            ctx->pc = 0x183DA8u;
            goto label_183da8;
        }
    }
    ctx->pc = 0x183D80u;
    // 0x183d80: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183d84: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183d88: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183d8c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183d90: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183d90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183d94: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183d98: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183D98u;
    {
        const bool branch_taken_0x183d98 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x183D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183D98u;
            // 0x183d9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183d98) {
            ctx->pc = 0x183DA8u;
            goto label_183da8;
        }
    }
    ctx->pc = 0x183DA0u;
    // 0x183da0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183da0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183da4: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183da4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_183da8:
    // 0x183da8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183dac: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x183dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x183db0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183db4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x183db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x183db8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183db8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183dbc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183DBCu;
    {
        const bool branch_taken_0x183dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183DBCu;
            // 0x183dc0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183dbc) {
            ctx->pc = 0x183DF0u;
            goto label_183df0;
        }
    }
    ctx->pc = 0x183DC4u;
    // 0x183dc4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183dc8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x183dcc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183dd0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183dd4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183dd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183dd8: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183ddc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x183ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x183de0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x183DE0u;
    {
        const bool branch_taken_0x183de0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x183de0) {
            ctx->pc = 0x183DF0u;
            goto label_183df0;
        }
    }
    ctx->pc = 0x183DE8u;
    // 0x183de8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183dec: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x183decu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_183df0:
    // 0x183df0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183df0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183df4: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x183df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x183df8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183dfc: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x183dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x183e00: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183e00u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183e04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183E04u;
    {
        const bool branch_taken_0x183e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E04u;
            // 0x183e08: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e04) {
            ctx->pc = 0x183E28u;
            goto label_183e28;
        }
    }
    ctx->pc = 0x183E0Cu;
    // 0x183e0c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x183e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x183e10: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183e10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183e14: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x183e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x183e18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183e18u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183e1c: 0x1040016c  beqz        $v0, . + 4 + (0x16C << 2)
    ctx->pc = 0x183E1Cu;
    {
        const bool branch_taken_0x183e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183e1c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183E24u;
    // 0x183e24: 0x0  nop
    ctx->pc = 0x183e24u;
    // NOP
label_183e28:
    // 0x183e28: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183e2c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183e30: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183E30u;
    {
        const bool branch_taken_0x183e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E30u;
            // 0x183e34: 0x241200b5  addiu       $s2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e30) {
            ctx->pc = 0x183E40u;
            goto label_183e40;
        }
    }
    ctx->pc = 0x183E38u;
    // 0x183e38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183E38u;
    {
        const bool branch_taken_0x183e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183e38) {
            ctx->pc = 0x183E48u;
            goto label_183e48;
        }
    }
    ctx->pc = 0x183E40u;
label_183e40:
    // 0x183e40: 0x24120096  addiu       $s2, $zero, 0x96
    ctx->pc = 0x183e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x183e44: 0x0  nop
    ctx->pc = 0x183e44u;
    // NOP
label_183e48:
    // 0x183e48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183e4c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183E4Cu;
    SET_GPR_U32(ctx, 31, 0x183E54u);
    ctx->pc = 0x183E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E4Cu;
            // 0x183e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E54u; }
        if (ctx->pc != 0x183E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E54u; }
        if (ctx->pc != 0x183E54u) { return; }
    }
    ctx->pc = 0x183E54u;
    // 0x183e54: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x183E54u;
    {
        const bool branch_taken_0x183e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183e54) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183E5Cu;
    // 0x183e5c: 0x0  nop
    ctx->pc = 0x183e5cu;
    // NOP
label_183e60:
    // 0x183e60: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183E60u;
    SET_GPR_U32(ctx, 31, 0x183E68u);
    ctx->pc = 0x183E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E60u;
            // 0x183e64: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E68u; }
        if (ctx->pc != 0x183E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E68u; }
        if (ctx->pc != 0x183E68u) { return; }
    }
    ctx->pc = 0x183E68u;
    // 0x183e68: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183e6c: 0xc061930  jal         func_1864C0
    ctx->pc = 0x183E6Cu;
    SET_GPR_U32(ctx, 31, 0x183E74u);
    ctx->pc = 0x183E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183E6Cu;
            // 0x183e70: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E74u; }
        if (ctx->pc != 0x183E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183E74u; }
        if (ctx->pc != 0x183E74u) { return; }
    }
    ctx->pc = 0x183E74u;
    // 0x183e74: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183e74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183e78: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x183e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x183e7c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183e80: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x183e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x183e84: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183e84u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183e88: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183E88u;
    {
        const bool branch_taken_0x183e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183E88u;
            // 0x183e8c: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183e88) {
            ctx->pc = 0x183EB8u;
            goto label_183eb8;
        }
    }
    ctx->pc = 0x183E90u;
    // 0x183e90: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183e94: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183e98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183e9c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183ea0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183ea4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183ea8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183EA8u;
    {
        const bool branch_taken_0x183ea8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x183EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183EA8u;
            // 0x183eac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ea8) {
            ctx->pc = 0x183EB8u;
            goto label_183eb8;
        }
    }
    ctx->pc = 0x183EB0u;
    // 0x183eb0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183eb4: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_183eb8:
    // 0x183eb8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183eb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183ebc: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x183ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x183ec0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183ec4: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x183ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x183ec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183ec8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183ecc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183ECCu;
    {
        const bool branch_taken_0x183ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183ECCu;
            // 0x183ed0: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183ecc) {
            ctx->pc = 0x183F00u;
            goto label_183f00;
        }
    }
    ctx->pc = 0x183ED4u;
    // 0x183ed4: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x183edc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183ee0: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183ee4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183ee8: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183eec: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x183eecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x183ef0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x183EF0u;
    {
        const bool branch_taken_0x183ef0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x183ef0) {
            ctx->pc = 0x183F00u;
            goto label_183f00;
        }
    }
    ctx->pc = 0x183EF8u;
    // 0x183ef8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183ef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183efc: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x183efcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_183f00:
    // 0x183f00: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183f04: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x183f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x183f08: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183f0c: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x183f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x183f10: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183f10u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183f14: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x183F14u;
    {
        const bool branch_taken_0x183f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F14u;
            // 0x183f18: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f14) {
            ctx->pc = 0x183F38u;
            goto label_183f38;
        }
    }
    ctx->pc = 0x183F1Cu;
    // 0x183f1c: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x183f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x183f20: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183f24: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x183f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x183f28: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183f28u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183f2c: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
    ctx->pc = 0x183F2Cu;
    {
        const bool branch_taken_0x183f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183f2c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183F34u;
    // 0x183f34: 0x0  nop
    ctx->pc = 0x183f34u;
    // NOP
label_183f38:
    // 0x183f38: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183f3c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183f40: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x183F40u;
    {
        const bool branch_taken_0x183f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F40u;
            // 0x183f44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f40) {
            ctx->pc = 0x183F58u;
            goto label_183f58;
        }
    }
    ctx->pc = 0x183F48u;
    // 0x183f48: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x183F48u;
    SET_GPR_U32(ctx, 31, 0x183F50u);
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F50u; }
        if (ctx->pc != 0x183F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F50u; }
        if (ctx->pc != 0x183F50u) { return; }
    }
    ctx->pc = 0x183F50u;
    // 0x183f50: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x183F50u;
    {
        const bool branch_taken_0x183f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183F50u;
            // 0x183f54: 0x2412015e  addiu       $s2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183f50) {
            ctx->pc = 0x183F60u;
            goto label_183f60;
        }
    }
    ctx->pc = 0x183F58u;
label_183f58:
    // 0x183f58: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x183f58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f5c: 0x0  nop
    ctx->pc = 0x183f5cu;
    // NOP
label_183f60:
    // 0x183f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x183f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183f64: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x183F64u;
    SET_GPR_U32(ctx, 31, 0x183F6Cu);
    ctx->pc = 0x183F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183F64u;
            // 0x183f68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F6Cu; }
        if (ctx->pc != 0x183F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F6Cu; }
        if (ctx->pc != 0x183F6Cu) { return; }
    }
    ctx->pc = 0x183F6Cu;
    // 0x183f6c: 0x10000118  b           . + 4 + (0x118 << 2)
    ctx->pc = 0x183F6Cu;
    {
        const bool branch_taken_0x183f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x183f6c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x183F74u;
    // 0x183f74: 0x0  nop
    ctx->pc = 0x183f74u;
    // NOP
label_183f78:
    // 0x183f78: 0xc0619c0  jal         func_186700
    ctx->pc = 0x183F78u;
    SET_GPR_U32(ctx, 31, 0x183F80u);
    ctx->pc = 0x183F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183F78u;
            // 0x183f7c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F80u; }
        if (ctx->pc != 0x183F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F80u; }
        if (ctx->pc != 0x183F80u) { return; }
    }
    ctx->pc = 0x183F80u;
    // 0x183f80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183f84: 0xc061930  jal         func_1864C0
    ctx->pc = 0x183F84u;
    SET_GPR_U32(ctx, 31, 0x183F8Cu);
    ctx->pc = 0x183F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183F84u;
            // 0x183f88: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F8Cu; }
        if (ctx->pc != 0x183F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183F8Cu; }
        if (ctx->pc != 0x183F8Cu) { return; }
    }
    ctx->pc = 0x183F8Cu;
    // 0x183f8c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183f90: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x183f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x183f94: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183f98: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x183f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x183f9c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183f9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183fa0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x183FA0u;
    {
        const bool branch_taken_0x183fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FA0u;
            // 0x183fa4: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fa0) {
            ctx->pc = 0x183FD0u;
            goto label_183fd0;
        }
    }
    ctx->pc = 0x183FA8u;
    // 0x183fa8: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183fac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183fb0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183fb4: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183fb8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183fb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183fbc: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183fc0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183FC0u;
    {
        const bool branch_taken_0x183fc0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x183FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FC0u;
            // 0x183fc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fc0) {
            ctx->pc = 0x183FD0u;
            goto label_183fd0;
        }
    }
    ctx->pc = 0x183FC8u;
    // 0x183fc8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183fc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183fcc: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183fccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_183fd0:
    // 0x183fd0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183fd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183fd4: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x183fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x183fd8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x183fd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x183fdc: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x183fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x183fe0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x183fe0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x183fe4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x183FE4u;
    {
        const bool branch_taken_0x183fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x183FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183FE4u;
            // 0x183fe8: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183fe4) {
            ctx->pc = 0x184018u;
            goto label_184018;
        }
    }
    ctx->pc = 0x183FECu;
    // 0x183fec: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x183fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x183ff0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x183ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x183ff4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183ff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x183ff8: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x183ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x183ffc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x183ffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184000: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x184000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x184004: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x184004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x184008: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x184008u;
    {
        const bool branch_taken_0x184008 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x184008) {
            ctx->pc = 0x184018u;
            goto label_184018;
        }
    }
    ctx->pc = 0x184010u;
    // 0x184010: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184014: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x184014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_184018:
    // 0x184018: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184018u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18401c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x18401cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x184020: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184024: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x184024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x184028: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184028u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18402c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18402Cu;
    {
        const bool branch_taken_0x18402c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18402Cu;
            // 0x184030: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18402c) {
            ctx->pc = 0x184050u;
            goto label_184050;
        }
    }
    ctx->pc = 0x184034u;
    // 0x184034: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x184034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x184038: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18403c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x18403cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x184040: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184040u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184044: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x184044u;
    {
        const bool branch_taken_0x184044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184044) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x18404Cu;
    // 0x18404c: 0x0  nop
    ctx->pc = 0x18404cu;
    // NOP
label_184050:
    // 0x184050: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184054: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x184054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x184058: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x184058u;
    {
        const bool branch_taken_0x184058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184058u;
            // 0x18405c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184058) {
            ctx->pc = 0x184070u;
            goto label_184070;
        }
    }
    ctx->pc = 0x184060u;
    // 0x184060: 0xc065cfc  jal         func_1973F0
    ctx->pc = 0x184060u;
    SET_GPR_U32(ctx, 31, 0x184068u);
    ctx->pc = 0x1973F0u;
    if (runtime->hasFunction(0x1973F0u)) {
        auto targetFn = runtime->lookupFunction(0x1973F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184068u; }
        if (ctx->pc != 0x184068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoSave_0x1973f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184068u; }
        if (ctx->pc != 0x184068u) { return; }
    }
    ctx->pc = 0x184068u;
    // 0x184068: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184068u;
    {
        const bool branch_taken_0x184068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18406Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184068u;
            // 0x18406c: 0x2412015e  addiu       $s2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184068) {
            ctx->pc = 0x184078u;
            goto label_184078;
        }
    }
    ctx->pc = 0x184070u;
label_184070:
    // 0x184070: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x184070u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184074: 0x0  nop
    ctx->pc = 0x184074u;
    // NOP
label_184078:
    // 0x184078: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18407c: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x18407Cu;
    SET_GPR_U32(ctx, 31, 0x184084u);
    ctx->pc = 0x184080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18407Cu;
            // 0x184080: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184084u; }
        if (ctx->pc != 0x184084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184084u; }
        if (ctx->pc != 0x184084u) { return; }
    }
    ctx->pc = 0x184084u;
    // 0x184084: 0x100000d2  b           . + 4 + (0xD2 << 2)
    ctx->pc = 0x184084u;
    {
        const bool branch_taken_0x184084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184084) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x18408Cu;
    // 0x18408c: 0x0  nop
    ctx->pc = 0x18408cu;
    // NOP
label_184090:
    // 0x184090: 0xc0619c0  jal         func_186700
    ctx->pc = 0x184090u;
    SET_GPR_U32(ctx, 31, 0x184098u);
    ctx->pc = 0x184094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184090u;
            // 0x184094: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184098u; }
        if (ctx->pc != 0x184098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184098u; }
        if (ctx->pc != 0x184098u) { return; }
    }
    ctx->pc = 0x184098u;
    // 0x184098: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184098u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18409c: 0x8c2323b0  lw          $v1, 0x23B0($at)
    ctx->pc = 0x18409cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9136)));
    // 0x1840a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1840a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1840a4: 0x8c222340  lw          $v0, 0x2340($at)
    ctx->pc = 0x1840a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9024)));
    // 0x1840a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1840a8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1840ac: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x1840ACu;
    {
        const bool branch_taken_0x1840ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840ACu;
            // 0x1840b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840ac) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x1840B4u;
    // 0x1840b4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1840b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1840b8: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1840b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1840bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1840bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1840c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1840c4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1840C4u;
    SET_GPR_U32(ctx, 31, 0x1840CCu);
    ctx->pc = 0x1840C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1840C4u;
            // 0x1840c8: 0x241200e6  addiu       $s2, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840CCu; }
        if (ctx->pc != 0x1840CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840CCu; }
        if (ctx->pc != 0x1840CCu) { return; }
    }
    ctx->pc = 0x1840CCu;
    // 0x1840cc: 0x100000c0  b           . + 4 + (0xC0 << 2)
    ctx->pc = 0x1840CCu;
    {
        const bool branch_taken_0x1840cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1840cc) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x1840D4u;
    // 0x1840d4: 0x0  nop
    ctx->pc = 0x1840d4u;
    // NOP
label_1840d8:
    // 0x1840d8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1840D8u;
    SET_GPR_U32(ctx, 31, 0x1840E0u);
    ctx->pc = 0x1840DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1840D8u;
            // 0x1840dc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840E0u; }
        if (ctx->pc != 0x1840E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1840E0u; }
        if (ctx->pc != 0x1840E0u) { return; }
    }
    ctx->pc = 0x1840E0u;
    // 0x1840e0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1840e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1840e4: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1840e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1840e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1840e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1840ec: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1840ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1840f0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1840f0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1840f4: 0x104000b6  beqz        $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x1840F4u;
    {
        const bool branch_taken_0x1840f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1840F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1840F4u;
            // 0x1840f8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1840f4) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x1840FCu;
    // 0x1840fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1840fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184100: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x184100u;
    SET_GPR_U32(ctx, 31, 0x184108u);
    ctx->pc = 0x184104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184100u;
            // 0x184104: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184108u; }
        if (ctx->pc != 0x184108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184108u; }
        if (ctx->pc != 0x184108u) { return; }
    }
    ctx->pc = 0x184108u;
    // 0x184108: 0x100000b1  b           . + 4 + (0xB1 << 2)
    ctx->pc = 0x184108u;
    {
        const bool branch_taken_0x184108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184108) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x184110u;
label_184110:
    // 0x184110: 0xc0619c0  jal         func_186700
    ctx->pc = 0x184110u;
    SET_GPR_U32(ctx, 31, 0x184118u);
    ctx->pc = 0x184114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184110u;
            // 0x184114: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184118u; }
        if (ctx->pc != 0x184118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184118u; }
        if (ctx->pc != 0x184118u) { return; }
    }
    ctx->pc = 0x184118u;
    // 0x184118: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18411c: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x18411cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x184120: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184124: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x184124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x184128: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184128u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18412c: 0x104000a8  beqz        $v0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x18412Cu;
    {
        const bool branch_taken_0x18412c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18412Cu;
            // 0x184130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18412c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x184134u;
    // 0x184134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184138: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x184138u;
    SET_GPR_U32(ctx, 31, 0x184140u);
    ctx->pc = 0x18413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184138u;
            // 0x18413c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184140u; }
        if (ctx->pc != 0x184140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184140u; }
        if (ctx->pc != 0x184140u) { return; }
    }
    ctx->pc = 0x184140u;
    // 0x184140: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x184140u;
    {
        const bool branch_taken_0x184140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184140) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x184148u;
label_184148:
    // 0x184148: 0xc0619c0  jal         func_186700
    ctx->pc = 0x184148u;
    SET_GPR_U32(ctx, 31, 0x184150u);
    ctx->pc = 0x18414Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184148u;
            // 0x18414c: 0x24040017  addiu       $a0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184150u; }
        if (ctx->pc != 0x184150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184150u; }
        if (ctx->pc != 0x184150u) { return; }
    }
    ctx->pc = 0x184150u;
    // 0x184150: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184154: 0xc061930  jal         func_1864C0
    ctx->pc = 0x184154u;
    SET_GPR_U32(ctx, 31, 0x18415Cu);
    ctx->pc = 0x184158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184154u;
            // 0x184158: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18415Cu; }
        if (ctx->pc != 0x18415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18415Cu; }
        if (ctx->pc != 0x18415Cu) { return; }
    }
    ctx->pc = 0x18415Cu;
    // 0x18415c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18415cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184160: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x184160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x184164: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184168: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x184168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x18416c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18416cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184170: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x184170u;
    {
        const bool branch_taken_0x184170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184170u;
            // 0x184174: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184170) {
            ctx->pc = 0x1841A0u;
            goto label_1841a0;
        }
    }
    ctx->pc = 0x184178u;
    // 0x184178: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x184178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x18417c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x184180: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184184: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x184184u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x184188: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18418c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x184190: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184190u;
    {
        const bool branch_taken_0x184190 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184190u;
            // 0x184194: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184190) {
            ctx->pc = 0x1841A0u;
            goto label_1841a0;
        }
    }
    ctx->pc = 0x184198u;
    // 0x184198: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18419c: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x18419cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_1841a0:
    // 0x1841a0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1841a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1841a4: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x1841a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1841a8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1841a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1841ac: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x1841acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x1841b0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1841b0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1841b4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1841B4u;
    {
        const bool branch_taken_0x1841b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1841B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1841B4u;
            // 0x1841b8: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841b4) {
            ctx->pc = 0x1841E8u;
            goto label_1841e8;
        }
    }
    ctx->pc = 0x1841BCu;
    // 0x1841bc: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1841bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1841c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1841c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1841c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1841c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1841c8: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1841c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1841cc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1841ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1841d0: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1841d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1841d4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1841d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1841d8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1841D8u;
    {
        const bool branch_taken_0x1841d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1841d8) {
            ctx->pc = 0x1841E8u;
            goto label_1841e8;
        }
    }
    ctx->pc = 0x1841E0u;
    // 0x1841e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1841e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1841e4: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x1841e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_1841e8:
    // 0x1841e8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1841e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1841ec: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1841ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x1841f0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1841f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1841f4: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x1841f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x1841f8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1841f8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1841fc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1841FCu;
    {
        const bool branch_taken_0x1841fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1841FCu;
            // 0x184200: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1841fc) {
            ctx->pc = 0x184220u;
            goto label_184220;
        }
    }
    ctx->pc = 0x184204u;
    // 0x184204: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x184204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x184208: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184208u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18420c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x18420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x184210: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184210u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184214: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x184214u;
    {
        const bool branch_taken_0x184214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184214) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x18421Cu;
    // 0x18421c: 0x0  nop
    ctx->pc = 0x18421cu;
    // NOP
label_184220:
    // 0x184220: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184224: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x184224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x184228: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184228u;
    {
        const bool branch_taken_0x184228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184228u;
            // 0x18422c: 0x2412003c  addiu       $s2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184228) {
            ctx->pc = 0x184238u;
            goto label_184238;
        }
    }
    ctx->pc = 0x184230u;
    // 0x184230: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184230u;
    {
        const bool branch_taken_0x184230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184230) {
            ctx->pc = 0x184240u;
            goto label_184240;
        }
    }
    ctx->pc = 0x184238u;
label_184238:
    // 0x184238: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x184238u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18423c: 0x0  nop
    ctx->pc = 0x18423cu;
    // NOP
label_184240:
    // 0x184240: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184244: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x184244u;
    SET_GPR_U32(ctx, 31, 0x18424Cu);
    ctx->pc = 0x184248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184244u;
            // 0x184248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18424Cu; }
        if (ctx->pc != 0x18424Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18424Cu; }
        if (ctx->pc != 0x18424Cu) { return; }
    }
    ctx->pc = 0x18424Cu;
    // 0x18424c: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x18424Cu;
    {
        const bool branch_taken_0x18424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18424c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x184254u;
    // 0x184254: 0x0  nop
    ctx->pc = 0x184254u;
    // NOP
label_184258:
    // 0x184258: 0xc0619c0  jal         func_186700
    ctx->pc = 0x184258u;
    SET_GPR_U32(ctx, 31, 0x184260u);
    ctx->pc = 0x18425Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184258u;
            // 0x18425c: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184260u; }
        if (ctx->pc != 0x184260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184260u; }
        if (ctx->pc != 0x184260u) { return; }
    }
    ctx->pc = 0x184260u;
    // 0x184260: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184260u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184264: 0xc061930  jal         func_1864C0
    ctx->pc = 0x184264u;
    SET_GPR_U32(ctx, 31, 0x18426Cu);
    ctx->pc = 0x184268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184264u;
            // 0x184268: 0x8c24b730  lw          $a0, -0x48D0($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1864C0u;
    if (runtime->hasFunction(0x1864C0u)) {
        auto targetFn = runtime->lookupFunction(0x1864C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18426Cu; }
        if (ctx->pc != 0x18426Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        selectbarDraw_0x1864c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18426Cu; }
        if (ctx->pc != 0x18426Cu) { return; }
    }
    ctx->pc = 0x18426Cu;
    // 0x18426c: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x18426cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184270: 0x8c2323f8  lw          $v1, 0x23F8($at)
    ctx->pc = 0x184270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9208)));
    // 0x184274: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184274u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184278: 0x8c222388  lw          $v0, 0x2388($at)
    ctx->pc = 0x184278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9096)));
    // 0x18427c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x18427cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184280: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x184280u;
    {
        const bool branch_taken_0x184280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184280u;
            // 0x184284: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184280) {
            ctx->pc = 0x1842B0u;
            goto label_1842b0;
        }
    }
    ctx->pc = 0x184288u;
    // 0x184288: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x184288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x18428c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18428cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x184290: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184294: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x184294u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x184298: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18429c: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x18429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1842a0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1842A0u;
    {
        const bool branch_taken_0x1842a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1842A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842A0u;
            // 0x1842a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842a0) {
            ctx->pc = 0x1842B0u;
            goto label_1842b0;
        }
    }
    ctx->pc = 0x1842A8u;
    // 0x1842a8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1842a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1842ac: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1842acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
label_1842b0:
    // 0x1842b0: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1842b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1842b4: 0x8c2323f0  lw          $v1, 0x23F0($at)
    ctx->pc = 0x1842b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9200)));
    // 0x1842b8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1842b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1842bc: 0x8c222380  lw          $v0, 0x2380($at)
    ctx->pc = 0x1842bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9088)));
    // 0x1842c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1842c0u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x1842c4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1842C4u;
    {
        const bool branch_taken_0x1842c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1842C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1842C4u;
            // 0x1842c8: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1842c4) {
            ctx->pc = 0x1842F8u;
            goto label_1842f8;
        }
    }
    ctx->pc = 0x1842CCu;
    // 0x1842cc: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1842ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1842d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1842d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1842d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1842d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1842d8: 0xac22b730  sw          $v0, -0x48D0($at)
    ctx->pc = 0x1842d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 2));
    // 0x1842dc: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1842dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1842e0: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x1842e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x1842e4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1842e4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1842e8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1842E8u;
    {
        const bool branch_taken_0x1842e8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1842e8) {
            ctx->pc = 0x1842F8u;
            goto label_1842f8;
        }
    }
    ctx->pc = 0x1842F0u;
    // 0x1842f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1842f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1842f4: 0xac20b730  sw          $zero, -0x48D0($at)
    ctx->pc = 0x1842f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948656), GPR_U32(ctx, 0));
label_1842f8:
    // 0x1842f8: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1842f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x1842fc: 0x8c232418  lw          $v1, 0x2418($at)
    ctx->pc = 0x1842fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9240)));
    // 0x184300: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x184304: 0x8c2223a8  lw          $v0, 0x23A8($at)
    ctx->pc = 0x184304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9128)));
    // 0x184308: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184308u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x18430c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18430Cu;
    {
        const bool branch_taken_0x18430c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18430Cu;
            // 0x184310: 0x3c010030  lui         $at, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18430c) {
            ctx->pc = 0x184330u;
            goto label_184330;
        }
    }
    ctx->pc = 0x184314u;
    // 0x184314: 0x8c232408  lw          $v1, 0x2408($at)
    ctx->pc = 0x184314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9224)));
    // 0x184318: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x184318u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
    // 0x18431c: 0x8c222398  lw          $v0, 0x2398($at)
    ctx->pc = 0x18431cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 9112)));
    // 0x184320: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x184320u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x184324: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x184324u;
    {
        const bool branch_taken_0x184324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184324) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x18432Cu;
    // 0x18432c: 0x0  nop
    ctx->pc = 0x18432cu;
    // NOP
label_184330:
    // 0x184330: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184334: 0x8c22b730  lw          $v0, -0x48D0($at)
    ctx->pc = 0x184334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294948656)));
    // 0x184338: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184338u;
    {
        const bool branch_taken_0x184338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184338u;
            // 0x18433c: 0x2412014a  addiu       $s2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184338) {
            ctx->pc = 0x184348u;
            goto label_184348;
        }
    }
    ctx->pc = 0x184340u;
    // 0x184340: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x184340u;
    {
        const bool branch_taken_0x184340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184340) {
            ctx->pc = 0x184350u;
            goto label_184350;
        }
    }
    ctx->pc = 0x184348u;
label_184348:
    // 0x184348: 0x2412015e  addiu       $s2, $zero, 0x15E
    ctx->pc = 0x184348u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
    // 0x18434c: 0x0  nop
    ctx->pc = 0x18434cu;
    // NOP
label_184350:
    // 0x184350: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x184350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184354: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x184354u;
    SET_GPR_U32(ctx, 31, 0x18435Cu);
    ctx->pc = 0x184358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184354u;
            // 0x184358: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18435Cu; }
        if (ctx->pc != 0x18435Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18435Cu; }
        if (ctx->pc != 0x18435Cu) { return; }
    }
    ctx->pc = 0x18435Cu;
    // 0x18435c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x18435Cu;
    {
        const bool branch_taken_0x18435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18435c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x184364u;
    // 0x184364: 0x0  nop
    ctx->pc = 0x184364u;
    // NOP
label_184368:
    // 0x184368: 0xc0619c0  jal         func_186700
    ctx->pc = 0x184368u;
    SET_GPR_U32(ctx, 31, 0x184370u);
    ctx->pc = 0x18436Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184368u;
            // 0x18436c: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184370u; }
        if (ctx->pc != 0x184370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184370u; }
        if (ctx->pc != 0x184370u) { return; }
    }
    ctx->pc = 0x184370u;
    // 0x184370: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x184370u;
    {
        const bool branch_taken_0x184370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184370) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x184378u;
label_184378:
    // 0x184378: 0xc0619c0  jal         func_186700
    ctx->pc = 0x184378u;
    SET_GPR_U32(ctx, 31, 0x184380u);
    ctx->pc = 0x18437Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184378u;
            // 0x18437c: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184380u; }
        if (ctx->pc != 0x184380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184380u; }
        if (ctx->pc != 0x184380u) { return; }
    }
    ctx->pc = 0x184380u;
    // 0x184380: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x184380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184384: 0x4410012  bgez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x184384u;
    {
        const bool branch_taken_0x184384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184384u;
            // 0x184388: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184384) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x18438Cu;
    // 0x18438c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x18438cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184390: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184394: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x184394u;
    SET_GPR_U32(ctx, 31, 0x18439Cu);
    ctx->pc = 0x184398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184394u;
            // 0x184398: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18439Cu; }
        if (ctx->pc != 0x18439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18439Cu; }
        if (ctx->pc != 0x18439Cu) { return; }
    }
    ctx->pc = 0x18439Cu;
    // 0x18439c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18439Cu;
    {
        const bool branch_taken_0x18439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18439c) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x1843A4u;
    // 0x1843a4: 0x0  nop
    ctx->pc = 0x1843a4u;
    // NOP
label_1843a8:
    // 0x1843a8: 0xc0619c0  jal         func_186700
    ctx->pc = 0x1843A8u;
    SET_GPR_U32(ctx, 31, 0x1843B0u);
    ctx->pc = 0x1843ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843A8u;
            // 0x1843ac: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186700u;
    if (runtime->hasFunction(0x186700u)) {
        auto targetFn = runtime->lookupFunction(0x186700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843B0u; }
        if (ctx->pc != 0x1843B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgDisp_0x186700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843B0u; }
        if (ctx->pc != 0x1843B0u) { return; }
    }
    ctx->pc = 0x1843B0u;
    // 0x1843b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1843b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843b4: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1843B4u;
    {
        const bool branch_taken_0x1843b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1843B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1843B4u;
            // 0x1843b8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843b4) {
            ctx->pc = 0x1843D0u;
            goto label_1843d0;
        }
    }
    ctx->pc = 0x1843BCu;
    // 0x1843bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1843bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1843c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1843c4: 0xc0478f6  jal         func_11E3D8
    ctx->pc = 0x1843C4u;
    SET_GPR_U32(ctx, 31, 0x1843CCu);
    ctx->pc = 0x1843C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843C4u;
            // 0x1843c8: 0x24120082  addiu       $s2, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D8u;
    if (runtime->hasFunction(0x11E3D8u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843CCu; }
        if (ctx->pc != 0x1843CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Sync_0x11e3d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843CCu; }
        if (ctx->pc != 0x1843CCu) { return; }
    }
    ctx->pc = 0x1843CCu;
    // 0x1843cc: 0x0  nop
    ctx->pc = 0x1843ccu;
    // NOP
label_1843d0:
    // 0x1843d0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1843d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1843d4: 0xc0478ec  jal         func_11E3B0
    ctx->pc = 0x1843D4u;
    SET_GPR_U32(ctx, 31, 0x1843DCu);
    ctx->pc = 0x1843D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1843D4u;
            // 0x1843d8: 0x27a50068  addiu       $a1, $sp, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3B0u;
    if (runtime->hasFunction(0x11E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843DCu; }
        if (ctx->pc != 0x1843DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CheckAsync_0x11e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1843DCu; }
        if (ctx->pc != 0x1843DCu) { return; }
    }
    ctx->pc = 0x1843DCu;
    // 0x1843dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1843dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1843e0: 0x104401c9  beq         $v0, $a0, . + 4 + (0x1C9 << 2)
    ctx->pc = 0x1843E0u;
    {
        const bool branch_taken_0x1843e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1843e0) {
            ctx->pc = 0x184B08u;
            goto label_184b08;
        }
    }
    ctx->pc = 0x1843E8u;
    // 0x1843e8: 0x10400313  beqz        $v0, . + 4 + (0x313 << 2)
    ctx->pc = 0x1843E8u;
    {
        const bool branch_taken_0x1843e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1843ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1843E8u;
            // 0x1843ec: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1843e8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1843F0u;
    // 0x1843f0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1843F0u;
    {
        const bool branch_taken_0x1843f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1843f0) {
            ctx->pc = 0x184400u;
            goto label_184400;
        }
    }
    ctx->pc = 0x1843F8u;
    // 0x1843f8: 0x1000030f  b           . + 4 + (0x30F << 2)
    ctx->pc = 0x1843F8u;
    {
        const bool branch_taken_0x1843f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1843f8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184400u;
label_184400:
    // 0x184400: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x184400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x184404: 0x124201b6  beq         $s2, $v0, . + 4 + (0x1B6 << 2)
    ctx->pc = 0x184404u;
    {
        const bool branch_taken_0x184404 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184404u;
            // 0x184408: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184404) {
            ctx->pc = 0x184AE0u;
            goto label_184ae0;
        }
    }
    ctx->pc = 0x18440Cu;
    // 0x18440c: 0x124201a8  beq         $s2, $v0, . + 4 + (0x1A8 << 2)
    ctx->pc = 0x18440Cu;
    {
        const bool branch_taken_0x18440c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18440c) {
            ctx->pc = 0x184AB0u;
            goto label_184ab0;
        }
    }
    ctx->pc = 0x184414u;
    // 0x184414: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x184414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x184418: 0x12420199  beq         $s2, $v0, . + 4 + (0x199 << 2)
    ctx->pc = 0x184418u;
    {
        const bool branch_taken_0x184418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18441Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184418u;
            // 0x18441c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184418) {
            ctx->pc = 0x184A80u;
            goto label_184a80;
        }
    }
    ctx->pc = 0x184420u;
    // 0x184420: 0x1242018f  beq         $s2, $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x184420u;
    {
        const bool branch_taken_0x184420 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184420) {
            ctx->pc = 0x184A60u;
            goto label_184a60;
        }
    }
    ctx->pc = 0x184428u;
    // 0x184428: 0x2402014a  addiu       $v0, $zero, 0x14A
    ctx->pc = 0x184428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x18442c: 0x12420170  beq         $s2, $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x18442Cu;
    {
        const bool branch_taken_0x18442c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18442Cu;
            // 0x184430: 0x240200ca  addiu       $v0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18442c) {
            ctx->pc = 0x1849F0u;
            goto label_1849f0;
        }
    }
    ctx->pc = 0x184434u;
    // 0x184434: 0x1242015e  beq         $s2, $v0, . + 4 + (0x15E << 2)
    ctx->pc = 0x184434u;
    {
        const bool branch_taken_0x184434 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184434) {
            ctx->pc = 0x1849B0u;
            goto label_1849b0;
        }
    }
    ctx->pc = 0x18443Cu;
    // 0x18443c: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x18443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
    // 0x184440: 0x1242014b  beq         $s2, $v0, . + 4 + (0x14B << 2)
    ctx->pc = 0x184440u;
    {
        const bool branch_taken_0x184440 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184440u;
            // 0x184444: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184440) {
            ctx->pc = 0x184970u;
            goto label_184970;
        }
    }
    ctx->pc = 0x184448u;
    // 0x184448: 0x12420133  beq         $s2, $v0, . + 4 + (0x133 << 2)
    ctx->pc = 0x184448u;
    {
        const bool branch_taken_0x184448 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184448) {
            ctx->pc = 0x184918u;
            goto label_184918;
        }
    }
    ctx->pc = 0x184450u;
    // 0x184450: 0x240200c0  addiu       $v0, $zero, 0xC0
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    // 0x184454: 0x12420124  beq         $s2, $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x184454u;
    {
        const bool branch_taken_0x184454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184454u;
            // 0x184458: 0x240200bf  addiu       $v0, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184454) {
            ctx->pc = 0x1848E8u;
            goto label_1848e8;
        }
    }
    ctx->pc = 0x18445Cu;
    // 0x18445c: 0x12420116  beq         $s2, $v0, . + 4 + (0x116 << 2)
    ctx->pc = 0x18445Cu;
    {
        const bool branch_taken_0x18445c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x18445c) {
            ctx->pc = 0x1848B8u;
            goto label_1848b8;
        }
    }
    ctx->pc = 0x184464u;
    // 0x184464: 0x240200be  addiu       $v0, $zero, 0xBE
    ctx->pc = 0x184464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x184468: 0x124200ff  beq         $s2, $v0, . + 4 + (0xFF << 2)
    ctx->pc = 0x184468u;
    {
        const bool branch_taken_0x184468 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x18446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184468u;
            // 0x18446c: 0x240200b5  addiu       $v0, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184468) {
            ctx->pc = 0x184868u;
            goto label_184868;
        }
    }
    ctx->pc = 0x184470u;
    // 0x184470: 0x124200e9  beq         $s2, $v0, . + 4 + (0xE9 << 2)
    ctx->pc = 0x184470u;
    {
        const bool branch_taken_0x184470 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184470) {
            ctx->pc = 0x184818u;
            goto label_184818;
        }
    }
    ctx->pc = 0x184478u;
    // 0x184478: 0x240200aa  addiu       $v0, $zero, 0xAA
    ctx->pc = 0x184478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x18447c: 0x124200cc  beq         $s2, $v0, . + 4 + (0xCC << 2)
    ctx->pc = 0x18447Cu;
    {
        const bool branch_taken_0x18447c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18447Cu;
            // 0x184480: 0x240200a0  addiu       $v0, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18447c) {
            ctx->pc = 0x1847B0u;
            goto label_1847b0;
        }
    }
    ctx->pc = 0x184484u;
    // 0x184484: 0x124200b6  beq         $s2, $v0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x184484u;
    {
        const bool branch_taken_0x184484 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184484) {
            ctx->pc = 0x184760u;
            goto label_184760;
        }
    }
    ctx->pc = 0x18448Cu;
    // 0x18448c: 0x24020136  addiu       $v0, $zero, 0x136
    ctx->pc = 0x18448cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
    // 0x184490: 0x124200a7  beq         $s2, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x184490u;
    {
        const bool branch_taken_0x184490 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184490u;
            // 0x184494: 0x24020122  addiu       $v0, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184490) {
            ctx->pc = 0x184730u;
            goto label_184730;
        }
    }
    ctx->pc = 0x184498u;
    // 0x184498: 0x12420099  beq         $s2, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x184498u;
    {
        const bool branch_taken_0x184498 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184498) {
            ctx->pc = 0x184700u;
            goto label_184700;
        }
    }
    ctx->pc = 0x1844A0u;
    // 0x1844a0: 0x1244008b  beq         $s2, $a0, . + 4 + (0x8B << 2)
    ctx->pc = 0x1844A0u;
    {
        const bool branch_taken_0x1844a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x1844A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1844A0u;
            // 0x1844a4: 0x24020140  addiu       $v0, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844a0) {
            ctx->pc = 0x1846D0u;
            goto label_1846d0;
        }
    }
    ctx->pc = 0x1844A8u;
    // 0x1844a8: 0x1242007d  beq         $s2, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x1844A8u;
    {
        const bool branch_taken_0x1844a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1844a8) {
            ctx->pc = 0x1846A0u;
            goto label_1846a0;
        }
    }
    ctx->pc = 0x1844B0u;
    // 0x1844b0: 0x240200fa  addiu       $v0, $zero, 0xFA
    ctx->pc = 0x1844b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x1844b4: 0x1242006e  beq         $s2, $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1844B4u;
    {
        const bool branch_taken_0x1844b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1844B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1844B4u;
            // 0x1844b8: 0x240200e6  addiu       $v0, $zero, 0xE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844b4) {
            ctx->pc = 0x184670u;
            goto label_184670;
        }
    }
    ctx->pc = 0x1844BCu;
    // 0x1844bc: 0x12420060  beq         $s2, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x1844BCu;
    {
        const bool branch_taken_0x1844bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1844bc) {
            ctx->pc = 0x184640u;
            goto label_184640;
        }
    }
    ctx->pc = 0x1844C4u;
    // 0x1844c4: 0x240200b4  addiu       $v0, $zero, 0xB4
    ctx->pc = 0x1844c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x1844c8: 0x12420051  beq         $s2, $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1844C8u;
    {
        const bool branch_taken_0x1844c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1844CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1844C8u;
            // 0x1844cc: 0x240200d2  addiu       $v0, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844c8) {
            ctx->pc = 0x184610u;
            goto label_184610;
        }
    }
    ctx->pc = 0x1844D0u;
    // 0x1844d0: 0x12420043  beq         $s2, $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x1844D0u;
    {
        const bool branch_taken_0x1844d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1844d0) {
            ctx->pc = 0x1845E0u;
            goto label_1845e0;
        }
    }
    ctx->pc = 0x1844D8u;
    // 0x1844d8: 0x24020096  addiu       $v0, $zero, 0x96
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x1844dc: 0x12420034  beq         $s2, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1844DCu;
    {
        const bool branch_taken_0x1844dc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1844E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1844DCu;
            // 0x1844e0: 0x2402008c  addiu       $v0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1844dc) {
            ctx->pc = 0x1845B0u;
            goto label_1845b0;
        }
    }
    ctx->pc = 0x1844E4u;
    // 0x1844e4: 0x12420026  beq         $s2, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1844E4u;
    {
        const bool branch_taken_0x1844e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1844e4) {
            ctx->pc = 0x184580u;
            goto label_184580;
        }
    }
    ctx->pc = 0x1844ECu;
    // 0x1844ec: 0x24020168  addiu       $v0, $zero, 0x168
    ctx->pc = 0x1844ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x1844f0: 0x12420017  beq         $s2, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1844F0u;
    {
        const bool branch_taken_0x1844f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1844f0) {
            ctx->pc = 0x184550u;
            goto label_184550;
        }
    }
    ctx->pc = 0x1844F8u;
    // 0x1844f8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1844F8u;
    {
        const bool branch_taken_0x1844f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1844f8) {
            ctx->pc = 0x184508u;
            goto label_184508;
        }
    }
    ctx->pc = 0x184500u;
    // 0x184500: 0x100002cd  b           . + 4 + (0x2CD << 2)
    ctx->pc = 0x184500u;
    {
        const bool branch_taken_0x184500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184500) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184508u;
label_184508:
    // 0x184508: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184508u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18450c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184510: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184514: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x184514u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x184518: 0x24a52128  addiu       $a1, $a1, 0x2128
    ctx->pc = 0x184518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8488));
    // 0x18451c: 0xc047990  jal         func_11E640
    ctx->pc = 0x18451Cu;
    SET_GPR_U32(ctx, 31, 0x184524u);
    ctx->pc = 0x184520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18451Cu;
            // 0x184520: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184524u; }
        if (ctx->pc != 0x184524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184524u; }
        if (ctx->pc != 0x184524u) { return; }
    }
    ctx->pc = 0x184524u;
    // 0x184524: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184528: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x18452c: 0xc04755e  jal         func_11D578
    ctx->pc = 0x18452Cu;
    SET_GPR_U32(ctx, 31, 0x184534u);
    ctx->pc = 0x184530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18452Cu;
            // 0x184530: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184534u; }
        if (ctx->pc != 0x184534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184534u; }
        if (ctx->pc != 0x184534u) { return; }
    }
    ctx->pc = 0x184534u;
    // 0x184534: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184538: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18453c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184540: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184540u;
    SET_GPR_U32(ctx, 31, 0x184548u);
    ctx->pc = 0x184544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184540u;
            // 0x184544: 0x24a52130  addiu       $a1, $a1, 0x2130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184548u; }
        if (ctx->pc != 0x184548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184548u; }
        if (ctx->pc != 0x184548u) { return; }
    }
    ctx->pc = 0x184548u;
    // 0x184548: 0x100002bb  b           . + 4 + (0x2BB << 2)
    ctx->pc = 0x184548u;
    {
        const bool branch_taken_0x184548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184548) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184550u;
label_184550:
    // 0x184550: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184550u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184554: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184558: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184558u;
    SET_GPR_U32(ctx, 31, 0x184560u);
    ctx->pc = 0x18455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184558u;
            // 0x18455c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184560u; }
        if (ctx->pc != 0x184560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184560u; }
        if (ctx->pc != 0x184560u) { return; }
    }
    ctx->pc = 0x184560u;
    // 0x184560: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184564: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184568: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18456c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18456Cu;
    SET_GPR_U32(ctx, 31, 0x184574u);
    ctx->pc = 0x184570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18456Cu;
            // 0x184570: 0x24a52240  addiu       $a1, $a1, 0x2240 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184574u; }
        if (ctx->pc != 0x184574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184574u; }
        if (ctx->pc != 0x184574u) { return; }
    }
    ctx->pc = 0x184574u;
    // 0x184574: 0x100002b0  b           . + 4 + (0x2B0 << 2)
    ctx->pc = 0x184574u;
    {
        const bool branch_taken_0x184574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184574) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18457Cu;
    // 0x18457c: 0x0  nop
    ctx->pc = 0x18457cu;
    // NOP
label_184580:
    // 0x184580: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184584: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184588: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184588u;
    SET_GPR_U32(ctx, 31, 0x184590u);
    ctx->pc = 0x18458Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184588u;
            // 0x18458c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184590u; }
        if (ctx->pc != 0x184590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184590u; }
        if (ctx->pc != 0x184590u) { return; }
    }
    ctx->pc = 0x184590u;
    // 0x184590: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184594: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184594u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184598: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18459c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18459Cu;
    SET_GPR_U32(ctx, 31, 0x1845A4u);
    ctx->pc = 0x1845A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18459Cu;
            // 0x1845a0: 0x24a52140  addiu       $a1, $a1, 0x2140 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845A4u; }
        if (ctx->pc != 0x1845A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845A4u; }
        if (ctx->pc != 0x1845A4u) { return; }
    }
    ctx->pc = 0x1845A4u;
    // 0x1845a4: 0x100002a4  b           . + 4 + (0x2A4 << 2)
    ctx->pc = 0x1845A4u;
    {
        const bool branch_taken_0x1845a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845a4) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1845ACu;
    // 0x1845ac: 0x0  nop
    ctx->pc = 0x1845acu;
    // NOP
label_1845b0:
    // 0x1845b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1845b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1845b4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1845b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1845b8: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1845B8u;
    SET_GPR_U32(ctx, 31, 0x1845C0u);
    ctx->pc = 0x1845BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1845B8u;
            // 0x1845bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845C0u; }
        if (ctx->pc != 0x1845C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845C0u; }
        if (ctx->pc != 0x1845C0u) { return; }
    }
    ctx->pc = 0x1845C0u;
    // 0x1845c0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1845c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1845c4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1845c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1845c8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1845c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1845cc: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1845CCu;
    SET_GPR_U32(ctx, 31, 0x1845D4u);
    ctx->pc = 0x1845D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1845CCu;
            // 0x1845d0: 0x24a52160  addiu       $a1, $a1, 0x2160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845D4u; }
        if (ctx->pc != 0x1845D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845D4u; }
        if (ctx->pc != 0x1845D4u) { return; }
    }
    ctx->pc = 0x1845D4u;
    // 0x1845d4: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x1845D4u;
    {
        const bool branch_taken_0x1845d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845d4) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1845DCu;
    // 0x1845dc: 0x0  nop
    ctx->pc = 0x1845dcu;
    // NOP
label_1845e0:
    // 0x1845e0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1845e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1845e4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1845e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1845e8: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1845E8u;
    SET_GPR_U32(ctx, 31, 0x1845F0u);
    ctx->pc = 0x1845ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1845E8u;
            // 0x1845ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845F0u; }
        if (ctx->pc != 0x1845F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845F0u; }
        if (ctx->pc != 0x1845F0u) { return; }
    }
    ctx->pc = 0x1845F0u;
    // 0x1845f0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1845f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1845f4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1845f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1845f8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1845f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1845fc: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1845FCu;
    SET_GPR_U32(ctx, 31, 0x184604u);
    ctx->pc = 0x184600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1845FCu;
            // 0x184600: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184604u; }
        if (ctx->pc != 0x184604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184604u; }
        if (ctx->pc != 0x184604u) { return; }
    }
    ctx->pc = 0x184604u;
    // 0x184604: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x184604u;
    {
        const bool branch_taken_0x184604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184604) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18460Cu;
    // 0x18460c: 0x0  nop
    ctx->pc = 0x18460cu;
    // NOP
label_184610:
    // 0x184610: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184614: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184618: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184618u;
    SET_GPR_U32(ctx, 31, 0x184620u);
    ctx->pc = 0x18461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184618u;
            // 0x18461c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184620u; }
        if (ctx->pc != 0x184620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184620u; }
        if (ctx->pc != 0x184620u) { return; }
    }
    ctx->pc = 0x184620u;
    // 0x184620: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184620u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184624: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184628: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18462c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18462Cu;
    SET_GPR_U32(ctx, 31, 0x184634u);
    ctx->pc = 0x184630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18462Cu;
            // 0x184630: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184634u; }
        if (ctx->pc != 0x184634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184634u; }
        if (ctx->pc != 0x184634u) { return; }
    }
    ctx->pc = 0x184634u;
    // 0x184634: 0x10000280  b           . + 4 + (0x280 << 2)
    ctx->pc = 0x184634u;
    {
        const bool branch_taken_0x184634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184634) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18463Cu;
    // 0x18463c: 0x0  nop
    ctx->pc = 0x18463cu;
    // NOP
label_184640:
    // 0x184640: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184644: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184648: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184648u;
    SET_GPR_U32(ctx, 31, 0x184650u);
    ctx->pc = 0x18464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184648u;
            // 0x18464c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184650u; }
        if (ctx->pc != 0x184650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184650u; }
        if (ctx->pc != 0x184650u) { return; }
    }
    ctx->pc = 0x184650u;
    // 0x184650: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184654: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184658: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18465c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18465Cu;
    SET_GPR_U32(ctx, 31, 0x184664u);
    ctx->pc = 0x184660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18465Cu;
            // 0x184660: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184664u; }
        if (ctx->pc != 0x184664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184664u; }
        if (ctx->pc != 0x184664u) { return; }
    }
    ctx->pc = 0x184664u;
    // 0x184664: 0x10000274  b           . + 4 + (0x274 << 2)
    ctx->pc = 0x184664u;
    {
        const bool branch_taken_0x184664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184664) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18466Cu;
    // 0x18466c: 0x0  nop
    ctx->pc = 0x18466cu;
    // NOP
label_184670:
    // 0x184670: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184670u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184674: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184678: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184678u;
    SET_GPR_U32(ctx, 31, 0x184680u);
    ctx->pc = 0x18467Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184678u;
            // 0x18467c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184680u; }
        if (ctx->pc != 0x184680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184680u; }
        if (ctx->pc != 0x184680u) { return; }
    }
    ctx->pc = 0x184680u;
    // 0x184680: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184684: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184688: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18468c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18468Cu;
    SET_GPR_U32(ctx, 31, 0x184694u);
    ctx->pc = 0x184690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18468Cu;
            // 0x184690: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184694u; }
        if (ctx->pc != 0x184694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184694u; }
        if (ctx->pc != 0x184694u) { return; }
    }
    ctx->pc = 0x184694u;
    // 0x184694: 0x10000268  b           . + 4 + (0x268 << 2)
    ctx->pc = 0x184694u;
    {
        const bool branch_taken_0x184694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184694) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18469Cu;
    // 0x18469c: 0x0  nop
    ctx->pc = 0x18469cu;
    // NOP
label_1846a0:
    // 0x1846a0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1846a4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1846a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1846a8: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1846A8u;
    SET_GPR_U32(ctx, 31, 0x1846B0u);
    ctx->pc = 0x1846ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1846A8u;
            // 0x1846ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846B0u; }
        if (ctx->pc != 0x1846B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846B0u; }
        if (ctx->pc != 0x1846B0u) { return; }
    }
    ctx->pc = 0x1846B0u;
    // 0x1846b0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1846b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1846b4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1846b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1846b8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1846b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1846bc: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1846BCu;
    SET_GPR_U32(ctx, 31, 0x1846C4u);
    ctx->pc = 0x1846C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1846BCu;
            // 0x1846c0: 0x24a52180  addiu       $a1, $a1, 0x2180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846C4u; }
        if (ctx->pc != 0x1846C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846C4u; }
        if (ctx->pc != 0x1846C4u) { return; }
    }
    ctx->pc = 0x1846C4u;
    // 0x1846c4: 0x1000025c  b           . + 4 + (0x25C << 2)
    ctx->pc = 0x1846C4u;
    {
        const bool branch_taken_0x1846c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846c4) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1846CCu;
    // 0x1846cc: 0x0  nop
    ctx->pc = 0x1846ccu;
    // NOP
label_1846d0:
    // 0x1846d0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1846d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1846d4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1846d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1846d8: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x1846d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x1846dc: 0xc04755e  jal         func_11D578
    ctx->pc = 0x1846DCu;
    SET_GPR_U32(ctx, 31, 0x1846E4u);
    ctx->pc = 0x1846E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1846DCu;
            // 0x1846e0: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846E4u; }
        if (ctx->pc != 0x1846E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846E4u; }
        if (ctx->pc != 0x1846E4u) { return; }
    }
    ctx->pc = 0x1846E4u;
    // 0x1846e4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1846e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1846e8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1846e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1846ec: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1846ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1846f0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1846F0u;
    SET_GPR_U32(ctx, 31, 0x1846F8u);
    ctx->pc = 0x1846F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1846F0u;
            // 0x1846f4: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846F8u; }
        if (ctx->pc != 0x1846F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1846F8u; }
        if (ctx->pc != 0x1846F8u) { return; }
    }
    ctx->pc = 0x1846F8u;
    // 0x1846f8: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x1846F8u;
    {
        const bool branch_taken_0x1846f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1846f8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184700u;
label_184700:
    // 0x184700: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184704: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184708: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x184708u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x18470c: 0xc04755e  jal         func_11D578
    ctx->pc = 0x18470Cu;
    SET_GPR_U32(ctx, 31, 0x184714u);
    ctx->pc = 0x184710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18470Cu;
            // 0x184710: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184714u; }
        if (ctx->pc != 0x184714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184714u; }
        if (ctx->pc != 0x184714u) { return; }
    }
    ctx->pc = 0x184714u;
    // 0x184714: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184718: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18471c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18471cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184720: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184720u;
    SET_GPR_U32(ctx, 31, 0x184728u);
    ctx->pc = 0x184724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184720u;
            // 0x184724: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184728u; }
        if (ctx->pc != 0x184728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184728u; }
        if (ctx->pc != 0x184728u) { return; }
    }
    ctx->pc = 0x184728u;
    // 0x184728: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x184728u;
    {
        const bool branch_taken_0x184728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184728) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184730u;
label_184730:
    // 0x184730: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184734: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184738: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x184738u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
    // 0x18473c: 0xc04755e  jal         func_11D578
    ctx->pc = 0x18473Cu;
    SET_GPR_U32(ctx, 31, 0x184744u);
    ctx->pc = 0x184740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18473Cu;
            // 0x184740: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184744u; }
        if (ctx->pc != 0x184744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184744u; }
        if (ctx->pc != 0x184744u) { return; }
    }
    ctx->pc = 0x184744u;
    // 0x184744: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184748: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18474c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184750: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184750u;
    SET_GPR_U32(ctx, 31, 0x184758u);
    ctx->pc = 0x184754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184750u;
            // 0x184754: 0x24a52198  addiu       $a1, $a1, 0x2198 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184758u; }
        if (ctx->pc != 0x184758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184758u; }
        if (ctx->pc != 0x184758u) { return; }
    }
    ctx->pc = 0x184758u;
    // 0x184758: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x184758u;
    {
        const bool branch_taken_0x184758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184758) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184760u;
label_184760:
    // 0x184760: 0xc061aa0  jal         func_186A80
    ctx->pc = 0x184760u;
    SET_GPR_U32(ctx, 31, 0x184768u);
    ctx->pc = 0x186A80u;
    if (runtime->hasFunction(0x186A80u)) {
        auto targetFn = runtime->lookupFunction(0x186A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184768u; }
        if (ctx->pc != 0x184768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FileInfoClean_0x186a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184768u; }
        if (ctx->pc != 0x184768u) { return; }
    }
    ctx->pc = 0x184768u;
    // 0x184768: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18476c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18476cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184770: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184774: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x184774u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x184778: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x184778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x18477c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x18477cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184780: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x184780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184784: 0x2508bcc0  addiu       $t0, $t0, -0x4340
    ctx->pc = 0x184784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294950080));
    // 0x184788: 0xc04769e  jal         func_11DA78
    ctx->pc = 0x184788u;
    SET_GPR_U32(ctx, 31, 0x184790u);
    ctx->pc = 0x18478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184788u;
            // 0x18478c: 0x27a90064  addiu       $t1, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA78u;
    if (runtime->hasFunction(0x11DA78u)) {
        auto targetFn = runtime->lookupFunction(0x11DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184790u; }
        if (ctx->pc != 0x184790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetDirAsync_0x11da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184790u; }
        if (ctx->pc != 0x184790u) { return; }
    }
    ctx->pc = 0x184790u;
    // 0x184790: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184794: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184798: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18479c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18479Cu;
    SET_GPR_U32(ctx, 31, 0x1847A4u);
    ctx->pc = 0x1847A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18479Cu;
            // 0x1847a0: 0x24a521b0  addiu       $a1, $a1, 0x21B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847A4u; }
        if (ctx->pc != 0x1847A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847A4u; }
        if (ctx->pc != 0x1847A4u) { return; }
    }
    ctx->pc = 0x1847A4u;
    // 0x1847a4: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x1847A4u;
    {
        const bool branch_taken_0x1847a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1847a4) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1847ACu;
    // 0x1847ac: 0x0  nop
    ctx->pc = 0x1847acu;
    // NOP
label_1847b0:
    // 0x1847b0: 0xc061aa0  jal         func_186A80
    ctx->pc = 0x1847B0u;
    SET_GPR_U32(ctx, 31, 0x1847B8u);
    ctx->pc = 0x186A80u;
    if (runtime->hasFunction(0x186A80u)) {
        auto targetFn = runtime->lookupFunction(0x186A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847B8u; }
        if (ctx->pc != 0x1847B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FileInfoClean_0x186a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847B8u; }
        if (ctx->pc != 0x1847B8u) { return; }
    }
    ctx->pc = 0x1847B8u;
    // 0x1847b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1847b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1847bc: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1847bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1847c0: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1847c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1847c4: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1847c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x1847c8: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x1847c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x1847cc: 0xc047990  jal         func_11E640
    ctx->pc = 0x1847CCu;
    SET_GPR_U32(ctx, 31, 0x1847D4u);
    ctx->pc = 0x1847D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1847CCu;
            // 0x1847d0: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847D4u; }
        if (ctx->pc != 0x1847D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847D4u; }
        if (ctx->pc != 0x1847D4u) { return; }
    }
    ctx->pc = 0x1847D4u;
    // 0x1847d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1847d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1847d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1847d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1847dc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1847dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1847e0: 0x3c08003b  lui         $t0, 0x3B
    ctx->pc = 0x1847e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
    // 0x1847e4: 0x24a521b8  addiu       $a1, $a1, 0x21B8
    ctx->pc = 0x1847e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8632));
    // 0x1847e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1847e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1847ec: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x1847ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1847f0: 0x2508bb70  addiu       $t0, $t0, -0x4490
    ctx->pc = 0x1847f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294949744));
    // 0x1847f4: 0xc04769e  jal         func_11DA78
    ctx->pc = 0x1847F4u;
    SET_GPR_U32(ctx, 31, 0x1847FCu);
    ctx->pc = 0x1847F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1847F4u;
            // 0x1847f8: 0x27a90064  addiu       $t1, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DA78u;
    if (runtime->hasFunction(0x11DA78u)) {
        auto targetFn = runtime->lookupFunction(0x11DA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847FCu; }
        if (ctx->pc != 0x1847FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetDirAsync_0x11da78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1847FCu; }
        if (ctx->pc != 0x1847FCu) { return; }
    }
    ctx->pc = 0x1847FCu;
    // 0x1847fc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1847fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184800: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184804: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184808: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184808u;
    SET_GPR_U32(ctx, 31, 0x184810u);
    ctx->pc = 0x18480Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184808u;
            // 0x18480c: 0x24a521c0  addiu       $a1, $a1, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184810u; }
        if (ctx->pc != 0x184810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184810u; }
        if (ctx->pc != 0x184810u) { return; }
    }
    ctx->pc = 0x184810u;
    // 0x184810: 0x10000209  b           . + 4 + (0x209 << 2)
    ctx->pc = 0x184810u;
    {
        const bool branch_taken_0x184810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184810) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184818u;
label_184818:
    // 0x184818: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18481c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184820: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184820u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184824: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x184824u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x184828: 0x24a52128  addiu       $a1, $a1, 0x2128
    ctx->pc = 0x184828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8488));
    // 0x18482c: 0xc047990  jal         func_11E640
    ctx->pc = 0x18482Cu;
    SET_GPR_U32(ctx, 31, 0x184834u);
    ctx->pc = 0x184830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18482Cu;
            // 0x184830: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184834u; }
        if (ctx->pc != 0x184834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184834u; }
        if (ctx->pc != 0x184834u) { return; }
    }
    ctx->pc = 0x184834u;
    // 0x184834: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184838: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18483c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184840: 0xc0476da  jal         func_11DB68
    ctx->pc = 0x184840u;
    SET_GPR_U32(ctx, 31, 0x184848u);
    ctx->pc = 0x184844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184840u;
            // 0x184844: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DB68u;
    if (runtime->hasFunction(0x11DB68u)) {
        auto targetFn = runtime->lookupFunction(0x11DB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184848u; }
        if (ctx->pc != 0x184848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2MkdirAsync_0x11db68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184848u; }
        if (ctx->pc != 0x184848u) { return; }
    }
    ctx->pc = 0x184848u;
    // 0x184848: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184848u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18484c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18484cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184850: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184854: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184854u;
    SET_GPR_U32(ctx, 31, 0x18485Cu);
    ctx->pc = 0x184858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184854u;
            // 0x184858: 0x24a52258  addiu       $a1, $a1, 0x2258 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18485Cu; }
        if (ctx->pc != 0x18485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18485Cu; }
        if (ctx->pc != 0x18485Cu) { return; }
    }
    ctx->pc = 0x18485Cu;
    // 0x18485c: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x18485Cu;
    {
        const bool branch_taken_0x18485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18485c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184864u;
    // 0x184864: 0x0  nop
    ctx->pc = 0x184864u;
    // NOP
label_184868:
    // 0x184868: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x18486c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184870: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184874: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x184874u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x184878: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x184878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x18487c: 0xc047990  jal         func_11E640
    ctx->pc = 0x18487Cu;
    SET_GPR_U32(ctx, 31, 0x184884u);
    ctx->pc = 0x184880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18487Cu;
            // 0x184880: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184884u; }
        if (ctx->pc != 0x184884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184884u; }
        if (ctx->pc != 0x184884u) { return; }
    }
    ctx->pc = 0x184884u;
    // 0x184884: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184888: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18488c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18488cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184890: 0xc047642  jal         func_11D908
    ctx->pc = 0x184890u;
    SET_GPR_U32(ctx, 31, 0x184898u);
    ctx->pc = 0x184894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184890u;
            // 0x184894: 0x24a521a0  addiu       $a1, $a1, 0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D908u;
    if (runtime->hasFunction(0x11D908u)) {
        auto targetFn = runtime->lookupFunction(0x11D908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184898u; }
        if (ctx->pc != 0x184898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateFileAsync_0x11d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184898u; }
        if (ctx->pc != 0x184898u) { return; }
    }
    ctx->pc = 0x184898u;
    // 0x184898: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184898u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x18489c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x18489cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1848a0: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1848a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1848a4: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1848A4u;
    SET_GPR_U32(ctx, 31, 0x1848ACu);
    ctx->pc = 0x1848A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848A4u;
            // 0x1848a8: 0x24a52260  addiu       $a1, $a1, 0x2260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848ACu; }
        if (ctx->pc != 0x1848ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848ACu; }
        if (ctx->pc != 0x1848ACu) { return; }
    }
    ctx->pc = 0x1848ACu;
    // 0x1848ac: 0x100001e2  b           . + 4 + (0x1E2 << 2)
    ctx->pc = 0x1848ACu;
    {
        const bool branch_taken_0x1848ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1848ac) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1848B4u;
    // 0x1848b4: 0x0  nop
    ctx->pc = 0x1848b4u;
    // NOP
label_1848b8:
    // 0x1848b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1848b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1848bc: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1848bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1848c0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1848c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1848c4: 0xc047642  jal         func_11D908
    ctx->pc = 0x1848C4u;
    SET_GPR_U32(ctx, 31, 0x1848CCu);
    ctx->pc = 0x1848C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848C4u;
            // 0x1848c8: 0x24a52270  addiu       $a1, $a1, 0x2270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D908u;
    if (runtime->hasFunction(0x11D908u)) {
        auto targetFn = runtime->lookupFunction(0x11D908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848CCu; }
        if (ctx->pc != 0x1848CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateFileAsync_0x11d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848CCu; }
        if (ctx->pc != 0x1848CCu) { return; }
    }
    ctx->pc = 0x1848CCu;
    // 0x1848cc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1848ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1848d0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1848d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1848d4: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1848d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1848d8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1848D8u;
    SET_GPR_U32(ctx, 31, 0x1848E0u);
    ctx->pc = 0x1848DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848D8u;
            // 0x1848dc: 0x24a52280  addiu       $a1, $a1, 0x2280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848E0u; }
        if (ctx->pc != 0x1848E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848E0u; }
        if (ctx->pc != 0x1848E0u) { return; }
    }
    ctx->pc = 0x1848E0u;
    // 0x1848e0: 0x100001d5  b           . + 4 + (0x1D5 << 2)
    ctx->pc = 0x1848E0u;
    {
        const bool branch_taken_0x1848e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1848e0) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1848E8u;
label_1848e8:
    // 0x1848e8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1848e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1848ec: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1848ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1848f0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1848f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1848f4: 0xc047642  jal         func_11D908
    ctx->pc = 0x1848F4u;
    SET_GPR_U32(ctx, 31, 0x1848FCu);
    ctx->pc = 0x1848F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1848F4u;
            // 0x1848f8: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D908u;
    if (runtime->hasFunction(0x11D908u)) {
        auto targetFn = runtime->lookupFunction(0x11D908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848FCu; }
        if (ctx->pc != 0x1848FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2CreateFileAsync_0x11d908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1848FCu; }
        if (ctx->pc != 0x1848FCu) { return; }
    }
    ctx->pc = 0x1848FCu;
    // 0x1848fc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1848fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184900: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184904: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184908: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184908u;
    SET_GPR_U32(ctx, 31, 0x184910u);
    ctx->pc = 0x18490Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184908u;
            // 0x18490c: 0x24a522a0  addiu       $a1, $a1, 0x22A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184910u; }
        if (ctx->pc != 0x184910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184910u; }
        if (ctx->pc != 0x184910u) { return; }
    }
    ctx->pc = 0x184910u;
    // 0x184910: 0x100001c9  b           . + 4 + (0x1C9 << 2)
    ctx->pc = 0x184910u;
    {
        const bool branch_taken_0x184910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184910) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184918u;
label_184918:
    // 0x184918: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x184918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x18491c: 0xc065cc8  jal         func_197320
    ctx->pc = 0x18491Cu;
    SET_GPR_U32(ctx, 31, 0x184924u);
    ctx->pc = 0x184920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18491Cu;
            // 0x184920: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197320u;
    if (runtime->hasFunction(0x197320u)) {
        auto targetFn = runtime->lookupFunction(0x197320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184924u; }
        if (ctx->pc != 0x184924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCheckSum_0x197320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184924u; }
        if (ctx->pc != 0x184924u) { return; }
    }
    ctx->pc = 0x184924u;
    // 0x184924: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x184924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x184928: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184928u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18492c: 0xac2218ec  sw          $v0, 0x18EC($at)
    ctx->pc = 0x18492cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6380), GPR_U32(ctx, 2));
    // 0x184930: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x184930u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x184934: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184938: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x184938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x18493c: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x18493cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184940: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x184940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x184944: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184944u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184948: 0xc04760a  jal         func_11D828
    ctx->pc = 0x184948u;
    SET_GPR_U32(ctx, 31, 0x184950u);
    ctx->pc = 0x18494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184948u;
            // 0x18494c: 0x240802e0  addiu       $t0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184950u; }
        if (ctx->pc != 0x184950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184950u; }
        if (ctx->pc != 0x184950u) { return; }
    }
    ctx->pc = 0x184950u;
    // 0x184950: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184954: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184958: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x18495c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x18495Cu;
    SET_GPR_U32(ctx, 31, 0x184964u);
    ctx->pc = 0x184960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18495Cu;
            // 0x184960: 0x24a522b0  addiu       $a1, $a1, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184964u; }
        if (ctx->pc != 0x184964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184964u; }
        if (ctx->pc != 0x184964u) { return; }
    }
    ctx->pc = 0x184964u;
    // 0x184964: 0x100001b4  b           . + 4 + (0x1B4 << 2)
    ctx->pc = 0x184964u;
    {
        const bool branch_taken_0x184964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184964) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18496Cu;
    // 0x18496c: 0x0  nop
    ctx->pc = 0x18496cu;
    // NOP
label_184970:
    // 0x184970: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184974: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184978: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18497c: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x18497cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x184980: 0x24a52270  addiu       $a1, $a1, 0x2270
    ctx->pc = 0x184980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8816));
    // 0x184984: 0x24c6bef0  addiu       $a2, $a2, -0x4110
    ctx->pc = 0x184984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950640));
    // 0x184988: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18498c: 0xc04760a  jal         func_11D828
    ctx->pc = 0x18498Cu;
    SET_GPR_U32(ctx, 31, 0x184994u);
    ctx->pc = 0x184990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18498Cu;
            // 0x184990: 0x240803c4  addiu       $t0, $zero, 0x3C4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184994u; }
        if (ctx->pc != 0x184994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184994u; }
        if (ctx->pc != 0x184994u) { return; }
    }
    ctx->pc = 0x184994u;
    // 0x184994: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184998: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x18499c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x18499cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1849a0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1849A0u;
    SET_GPR_U32(ctx, 31, 0x1849A8u);
    ctx->pc = 0x1849A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1849A0u;
            // 0x1849a4: 0x24a522c0  addiu       $a1, $a1, 0x22C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1849A8u; }
        if (ctx->pc != 0x1849A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1849A8u; }
        if (ctx->pc != 0x1849A8u) { return; }
    }
    ctx->pc = 0x1849A8u;
    // 0x1849a8: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x1849A8u;
    {
        const bool branch_taken_0x1849a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849a8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1849B0u;
label_1849b0:
    // 0x1849b0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1849b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1849b4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1849b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1849b8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1849b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1849bc: 0x24a52290  addiu       $a1, $a1, 0x2290
    ctx->pc = 0x1849bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
    // 0x1849c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1849c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1849c4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1849c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1849c8: 0x8c26bee0  lw          $a2, -0x4120($at)
    ctx->pc = 0x1849c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950624)));
    // 0x1849cc: 0xc04760a  jal         func_11D828
    ctx->pc = 0x1849CCu;
    SET_GPR_U32(ctx, 31, 0x1849D4u);
    ctx->pc = 0x1849D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1849CCu;
            // 0x1849d0: 0x3408880e  ori         $t0, $zero, 0x880E (Delay Slot)
        SET_GPR_VEC(ctx, 8, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)34830u)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1849D4u; }
        if (ctx->pc != 0x1849D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1849D4u; }
        if (ctx->pc != 0x1849D4u) { return; }
    }
    ctx->pc = 0x1849D4u;
    // 0x1849d4: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x1849d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x1849d8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1849d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1849dc: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x1849dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x1849e0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x1849E0u;
    SET_GPR_U32(ctx, 31, 0x1849E8u);
    ctx->pc = 0x1849E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1849E0u;
            // 0x1849e4: 0x24a522d0  addiu       $a1, $a1, 0x22D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1849E8u; }
        if (ctx->pc != 0x1849E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1849E8u; }
        if (ctx->pc != 0x1849E8u) { return; }
    }
    ctx->pc = 0x1849E8u;
    // 0x1849e8: 0x10000193  b           . + 4 + (0x193 << 2)
    ctx->pc = 0x1849E8u;
    {
        const bool branch_taken_0x1849e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1849e8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x1849F0u;
label_1849f0:
    // 0x1849f0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1849f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1849f4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x1849f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x1849f8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x1849f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x1849fc: 0x3c06003b  lui         $a2, 0x3B
    ctx->pc = 0x1849fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)59 << 16));
    // 0x184a00: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x184a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x184a04: 0xc047990  jal         func_11E640
    ctx->pc = 0x184A04u;
    SET_GPR_U32(ctx, 31, 0x184A0Cu);
    ctx->pc = 0x184A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A04u;
            // 0x184a08: 0x24c6bd00  addiu       $a2, $a2, -0x4300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E640u;
    if (runtime->hasFunction(0x11E640u)) {
        auto targetFn = runtime->lookupFunction(0x11E640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A0Cu; }
        if (ctx->pc != 0x184A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2Chdir_0x11e640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A0Cu; }
        if (ctx->pc != 0x184A0Cu) { return; }
    }
    ctx->pc = 0x184A0Cu;
    // 0x184a0c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x184a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x184a10: 0xc065cc8  jal         func_197320
    ctx->pc = 0x184A10u;
    SET_GPR_U32(ctx, 31, 0x184A18u);
    ctx->pc = 0x184A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A10u;
            // 0x184a14: 0x24841610  addiu       $a0, $a0, 0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197320u;
    if (runtime->hasFunction(0x197320u)) {
        auto targetFn = runtime->lookupFunction(0x197320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A18u; }
        if (ctx->pc != 0x184A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCheckSum_0x197320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A18u; }
        if (ctx->pc != 0x184A18u) { return; }
    }
    ctx->pc = 0x184A18u;
    // 0x184a18: 0x3c010043  lui         $at, 0x43
    ctx->pc = 0x184a18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)67 << 16));
    // 0x184a1c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184a20: 0xac2218ec  sw          $v0, 0x18EC($at)
    ctx->pc = 0x184a20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6380), GPR_U32(ctx, 2));
    // 0x184a24: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x184a24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x184a28: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184a28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184a2c: 0x24a521a0  addiu       $a1, $a1, 0x21A0
    ctx->pc = 0x184a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8608));
    // 0x184a30: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184a34: 0x24c61610  addiu       $a2, $a2, 0x1610
    ctx->pc = 0x184a34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5648));
    // 0x184a38: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x184a38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184a3c: 0xc04760a  jal         func_11D828
    ctx->pc = 0x184A3Cu;
    SET_GPR_U32(ctx, 31, 0x184A44u);
    ctx->pc = 0x184A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A3Cu;
            // 0x184a40: 0x240802e0  addiu       $t0, $zero, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D828u;
    if (runtime->hasFunction(0x11D828u)) {
        auto targetFn = runtime->lookupFunction(0x11D828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A44u; }
        if (ctx->pc != 0x184A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2WriteFileAsync_0x11d828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A44u; }
        if (ctx->pc != 0x184A44u) { return; }
    }
    ctx->pc = 0x184A44u;
    // 0x184a44: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184a44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184a48: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184a4c: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184a50: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184A50u;
    SET_GPR_U32(ctx, 31, 0x184A58u);
    ctx->pc = 0x184A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A50u;
            // 0x184a54: 0x24a522b0  addiu       $a1, $a1, 0x22B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A58u; }
        if (ctx->pc != 0x184A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A58u; }
        if (ctx->pc != 0x184A58u) { return; }
    }
    ctx->pc = 0x184A58u;
    // 0x184a58: 0x10000177  b           . + 4 + (0x177 << 2)
    ctx->pc = 0x184A58u;
    {
        const bool branch_taken_0x184a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184a58) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184A60u;
label_184a60:
    // 0x184a60: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184a60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184a64: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184a68: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184a6c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184A6Cu;
    SET_GPR_U32(ctx, 31, 0x184A74u);
    ctx->pc = 0x184A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A6Cu;
            // 0x184a70: 0x24a521d8  addiu       $a1, $a1, 0x21D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A74u; }
        if (ctx->pc != 0x184A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A74u; }
        if (ctx->pc != 0x184A74u) { return; }
    }
    ctx->pc = 0x184A74u;
    // 0x184a74: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x184A74u;
    {
        const bool branch_taken_0x184a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184A74u;
            // 0x184a78: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184a74) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184A7Cu;
    // 0x184a7c: 0x0  nop
    ctx->pc = 0x184a7cu;
    // NOP
label_184a80:
    // 0x184a80: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184a84: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184a88: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184A88u;
    SET_GPR_U32(ctx, 31, 0x184A90u);
    ctx->pc = 0x184A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A88u;
            // 0x184a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A90u; }
        if (ctx->pc != 0x184A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184A90u; }
        if (ctx->pc != 0x184A90u) { return; }
    }
    ctx->pc = 0x184A90u;
    // 0x184a90: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184a90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184a94: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184a98: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184a9c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184A9Cu;
    SET_GPR_U32(ctx, 31, 0x184AA4u);
    ctx->pc = 0x184AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184A9Cu;
            // 0x184aa0: 0x24a521e0  addiu       $a1, $a1, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AA4u; }
        if (ctx->pc != 0x184AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AA4u; }
        if (ctx->pc != 0x184AA4u) { return; }
    }
    ctx->pc = 0x184AA4u;
    // 0x184aa4: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x184AA4u;
    {
        const bool branch_taken_0x184aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184aa4) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184AACu;
    // 0x184aac: 0x0  nop
    ctx->pc = 0x184aacu;
    // NOP
label_184ab0:
    // 0x184ab0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184ab0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184ab4: 0x8c24bcf8  lw          $a0, -0x4308($at)
    ctx->pc = 0x184ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
    // 0x184ab8: 0xc04755e  jal         func_11D578
    ctx->pc = 0x184AB8u;
    SET_GPR_U32(ctx, 31, 0x184AC0u);
    ctx->pc = 0x184ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184AB8u;
            // 0x184abc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D578u;
    if (runtime->hasFunction(0x11D578u)) {
        auto targetFn = runtime->lookupFunction(0x11D578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AC0u; }
        if (ctx->pc != 0x184AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2GetInfoAsync_0x11d578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AC0u; }
        if (ctx->pc != 0x184AC0u) { return; }
    }
    ctx->pc = 0x184AC0u;
    // 0x184ac0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184ac4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184ac8: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184acc: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184ACCu;
    SET_GPR_U32(ctx, 31, 0x184AD4u);
    ctx->pc = 0x184AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184ACCu;
            // 0x184ad0: 0x24a521e0  addiu       $a1, $a1, 0x21E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AD4u; }
        if (ctx->pc != 0x184AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AD4u; }
        if (ctx->pc != 0x184AD4u) { return; }
    }
    ctx->pc = 0x184AD4u;
    // 0x184ad4: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x184AD4u;
    {
        const bool branch_taken_0x184ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184ad4) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184ADCu;
    // 0x184adc: 0x0  nop
    ctx->pc = 0x184adcu;
    // NOP
label_184ae0:
    // 0x184ae0: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184ae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184ae4: 0xc04751e  jal         func_11D478
    ctx->pc = 0x184AE4u;
    SET_GPR_U32(ctx, 31, 0x184AECu);
    ctx->pc = 0x184AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184AE4u;
            // 0x184ae8: 0x8c24bcf8  lw          $a0, -0x4308($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294950136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D478u;
    if (runtime->hasFunction(0x11D478u)) {
        auto targetFn = runtime->lookupFunction(0x11D478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AECu; }
        if (ctx->pc != 0x184AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceMc2FormatAsync_0x11d478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184AECu; }
        if (ctx->pc != 0x184AECu) { return; }
    }
    ctx->pc = 0x184AECu;
    // 0x184aec: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184aecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184af0: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184af0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184af4: 0x2484bd80  addiu       $a0, $a0, -0x4280
    ctx->pc = 0x184af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950272));
    // 0x184af8: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184AF8u;
    SET_GPR_U32(ctx, 31, 0x184B00u);
    ctx->pc = 0x184AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184AF8u;
            // 0x184afc: 0x24a522e0  addiu       $a1, $a1, 0x22E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B00u; }
        if (ctx->pc != 0x184B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184B00u; }
        if (ctx->pc != 0x184B00u) { return; }
    }
    ctx->pc = 0x184B00u;
    // 0x184b00: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x184B00u;
    {
        const bool branch_taken_0x184b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184b00) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184B08u;
label_184b08:
    // 0x184b08: 0x240200e6  addiu       $v0, $zero, 0xE6
    ctx->pc = 0x184b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x184b0c: 0x12420144  beq         $s2, $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x184B0Cu;
    {
        const bool branch_taken_0x184b0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B0Cu;
            // 0x184b10: 0x24060136  addiu       $a2, $zero, 0x136 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b0c) {
            ctx->pc = 0x185020u;
            goto label_185020;
        }
    }
    ctx->pc = 0x184B14u;
    // 0x184b14: 0x12460142  beq         $s2, $a2, . + 4 + (0x142 << 2)
    ctx->pc = 0x184B14u;
    {
        const bool branch_taken_0x184b14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x184B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B14u;
            // 0x184b18: 0x24030122  addiu       $v1, $zero, 0x122 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b14) {
            ctx->pc = 0x185020u;
            goto label_185020;
        }
    }
    ctx->pc = 0x184B1Cu;
    // 0x184b1c: 0x12430140  beq         $s2, $v1, . + 4 + (0x140 << 2)
    ctx->pc = 0x184B1Cu;
    {
        const bool branch_taken_0x184b1c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x184B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B1Cu;
            // 0x184b20: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b1c) {
            ctx->pc = 0x185020u;
            goto label_185020;
        }
    }
    ctx->pc = 0x184B24u;
    // 0x184b24: 0x12420134  beq         $s2, $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x184B24u;
    {
        const bool branch_taken_0x184b24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184b24) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B2Cu;
    // 0x184b2c: 0x24020083  addiu       $v0, $zero, 0x83
    ctx->pc = 0x184b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
    // 0x184b30: 0x12420131  beq         $s2, $v0, . + 4 + (0x131 << 2)
    ctx->pc = 0x184B30u;
    {
        const bool branch_taken_0x184b30 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B30u;
            // 0x184b34: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b30) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B38u;
    // 0x184b38: 0x1242012f  beq         $s2, $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x184B38u;
    {
        const bool branch_taken_0x184b38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184b38) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B40u;
    // 0x184b40: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x184b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x184b44: 0x1242012c  beq         $s2, $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x184B44u;
    {
        const bool branch_taken_0x184b44 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B44u;
            // 0x184b48: 0x240200b4  addiu       $v0, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b44) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B4Cu;
    // 0x184b4c: 0x1242012a  beq         $s2, $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x184B4Cu;
    {
        const bool branch_taken_0x184b4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184b4c) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B54u;
    // 0x184b54: 0x24020118  addiu       $v0, $zero, 0x118
    ctx->pc = 0x184b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
    // 0x184b58: 0x12420127  beq         $s2, $v0, . + 4 + (0x127 << 2)
    ctx->pc = 0x184B58u;
    {
        const bool branch_taken_0x184b58 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B58u;
            // 0x184b5c: 0x24020096  addiu       $v0, $zero, 0x96 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b58) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B60u;
    // 0x184b60: 0x12420125  beq         $s2, $v0, . + 4 + (0x125 << 2)
    ctx->pc = 0x184B60u;
    {
        const bool branch_taken_0x184b60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x184B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B60u;
            // 0x184b64: 0x240500d2  addiu       $a1, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b60) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B68u;
    // 0x184b68: 0x12450123  beq         $s2, $a1, . + 4 + (0x123 << 2)
    ctx->pc = 0x184B68u;
    {
        const bool branch_taken_0x184b68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x184B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B68u;
            // 0x184b6c: 0x240900fa  addiu       $t1, $zero, 0xFA (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b68) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B70u;
    // 0x184b70: 0x12490121  beq         $s2, $t1, . + 4 + (0x121 << 2)
    ctx->pc = 0x184B70u;
    {
        const bool branch_taken_0x184b70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 9));
        ctx->pc = 0x184B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B70u;
            // 0x184b74: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b70) {
            ctx->pc = 0x184FF8u;
            goto label_184ff8;
        }
    }
    ctx->pc = 0x184B78u;
    // 0x184b78: 0x12450115  beq         $s2, $a1, . + 4 + (0x115 << 2)
    ctx->pc = 0x184B78u;
    {
        const bool branch_taken_0x184b78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x184b78) {
            ctx->pc = 0x184FD0u;
            goto label_184fd0;
        }
    }
    ctx->pc = 0x184B80u;
    // 0x184b80: 0x2405014a  addiu       $a1, $zero, 0x14A
    ctx->pc = 0x184b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x184b84: 0x1245010a  beq         $s2, $a1, . + 4 + (0x10A << 2)
    ctx->pc = 0x184B84u;
    {
        const bool branch_taken_0x184b84 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x184B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B84u;
            // 0x184b88: 0x240800ca  addiu       $t0, $zero, 0xCA (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 202));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b84) {
            ctx->pc = 0x184FB0u;
            goto label_184fb0;
        }
    }
    ctx->pc = 0x184B8Cu;
    // 0x184b8c: 0x12480100  beq         $s2, $t0, . + 4 + (0x100 << 2)
    ctx->pc = 0x184B8Cu;
    {
        const bool branch_taken_0x184b8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 8));
        ctx->pc = 0x184B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B8Cu;
            // 0x184b90: 0x240600c9  addiu       $a2, $zero, 0xC9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b8c) {
            ctx->pc = 0x184F90u;
            goto label_184f90;
        }
    }
    ctx->pc = 0x184B94u;
    // 0x184b94: 0x124600f6  beq         $s2, $a2, . + 4 + (0xF6 << 2)
    ctx->pc = 0x184B94u;
    {
        const bool branch_taken_0x184b94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x184B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B94u;
            // 0x184b98: 0x240700c8  addiu       $a3, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b94) {
            ctx->pc = 0x184F70u;
            goto label_184f70;
        }
    }
    ctx->pc = 0x184B9Cu;
    // 0x184b9c: 0x124700ec  beq         $s2, $a3, . + 4 + (0xEC << 2)
    ctx->pc = 0x184B9Cu;
    {
        const bool branch_taken_0x184b9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 7));
        ctx->pc = 0x184BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184B9Cu;
            // 0x184ba0: 0x240500c0  addiu       $a1, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184b9c) {
            ctx->pc = 0x184F50u;
            goto label_184f50;
        }
    }
    ctx->pc = 0x184BA4u;
    // 0x184ba4: 0x124500de  beq         $s2, $a1, . + 4 + (0xDE << 2)
    ctx->pc = 0x184BA4u;
    {
        const bool branch_taken_0x184ba4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x184ba4) {
            ctx->pc = 0x184F20u;
            goto label_184f20;
        }
    }
    ctx->pc = 0x184BACu;
    // 0x184bac: 0x240500bf  addiu       $a1, $zero, 0xBF
    ctx->pc = 0x184bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
    // 0x184bb0: 0x124500cf  beq         $s2, $a1, . + 4 + (0xCF << 2)
    ctx->pc = 0x184BB0u;
    {
        const bool branch_taken_0x184bb0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x184bb0) {
            ctx->pc = 0x184EF0u;
            goto label_184ef0;
        }
    }
    ctx->pc = 0x184BB8u;
    // 0x184bb8: 0x240600be  addiu       $a2, $zero, 0xBE
    ctx->pc = 0x184bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x184bbc: 0x124600c0  beq         $s2, $a2, . + 4 + (0xC0 << 2)
    ctx->pc = 0x184BBCu;
    {
        const bool branch_taken_0x184bbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 6));
        ctx->pc = 0x184BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184BBCu;
            // 0x184bc0: 0x240500b5  addiu       $a1, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bbc) {
            ctx->pc = 0x184EC0u;
            goto label_184ec0;
        }
    }
    ctx->pc = 0x184BC4u;
    // 0x184bc4: 0x124500b2  beq         $s2, $a1, . + 4 + (0xB2 << 2)
    ctx->pc = 0x184BC4u;
    {
        const bool branch_taken_0x184bc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        if (branch_taken_0x184bc4) {
            ctx->pc = 0x184E90u;
            goto label_184e90;
        }
    }
    ctx->pc = 0x184BCCu;
    // 0x184bcc: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x184bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
    // 0x184bd0: 0x1245009b  beq         $s2, $a1, . + 4 + (0x9B << 2)
    ctx->pc = 0x184BD0u;
    {
        const bool branch_taken_0x184bd0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 5));
        ctx->pc = 0x184BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184BD0u;
            // 0x184bd4: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184bd0) {
            ctx->pc = 0x184E40u;
            goto label_184e40;
        }
    }
    ctx->pc = 0x184BD8u;
    // 0x184bd8: 0x12430085  beq         $s2, $v1, . + 4 + (0x85 << 2)
    ctx->pc = 0x184BD8u;
    {
        const bool branch_taken_0x184bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x184bd8) {
            ctx->pc = 0x184DF0u;
            goto label_184df0;
        }
    }
    ctx->pc = 0x184BE0u;
    // 0x184be0: 0x1244006d  beq         $s2, $a0, . + 4 + (0x6D << 2)
    ctx->pc = 0x184BE0u;
    {
        const bool branch_taken_0x184be0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 4));
        ctx->pc = 0x184BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184BE0u;
            // 0x184be4: 0x24020168  addiu       $v0, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184be0) {
            ctx->pc = 0x184D98u;
            goto label_184d98;
        }
    }
    ctx->pc = 0x184BE8u;
    // 0x184be8: 0x1242003f  beq         $s2, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x184BE8u;
    {
        const bool branch_taken_0x184be8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184be8) {
            ctx->pc = 0x184CE8u;
            goto label_184ce8;
        }
    }
    ctx->pc = 0x184BF0u;
    // 0x184bf0: 0x2402008c  addiu       $v0, $zero, 0x8C
    ctx->pc = 0x184bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x184bf4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184BF4u;
    {
        const bool branch_taken_0x184bf4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x184bf4) {
            ctx->pc = 0x184C10u;
            goto label_184c10;
        }
    }
    ctx->pc = 0x184BFCu;
    // 0x184bfc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x184BFCu;
    {
        const bool branch_taken_0x184bfc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x184bfc) {
            ctx->pc = 0x184C10u;
            goto label_184c10;
        }
    }
    ctx->pc = 0x184C04u;
    // 0x184c04: 0x1000010c  b           . + 4 + (0x10C << 2)
    ctx->pc = 0x184C04u;
    {
        const bool branch_taken_0x184c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184c04) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184C0Cu;
    // 0x184c0c: 0x0  nop
    ctx->pc = 0x184c0cu;
    // NOP
label_184c10:
    // 0x184c10: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184c14: 0x4410032  bgez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x184C14u;
    {
        const bool branch_taken_0x184c14 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x184c14) {
            ctx->pc = 0x184CE0u;
            goto label_184ce0;
        }
    }
    ctx->pc = 0x184C1Cu;
    // 0x184c1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x184c1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x184c20: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x184c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x184c24: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x184C24u;
    {
        const bool branch_taken_0x184c24 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x184C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C24u;
            // 0x184c28: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c24) {
            ctx->pc = 0x184C38u;
            goto label_184c38;
        }
    }
    ctx->pc = 0x184C2Cu;
    // 0x184c2c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x184c2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184c30: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x184c30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x184c34: 0x0  nop
    ctx->pc = 0x184c34u;
    // NOP
label_184c38:
    // 0x184c38: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184c3c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184c40: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184c44: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184C44u;
    SET_GPR_U32(ctx, 31, 0x184C4Cu);
    ctx->pc = 0x184C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C44u;
            // 0x184c48: 0x24a521f0  addiu       $a1, $a1, 0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C4Cu; }
        if (ctx->pc != 0x184C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C4Cu; }
        if (ctx->pc != 0x184C4Cu) { return; }
    }
    ctx->pc = 0x184C4Cu;
    // 0x184c4c: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184c4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184c50: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x184c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x184c54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184C54u;
    {
        const bool branch_taken_0x184c54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C54u;
            // 0x184c58: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c54) {
            ctx->pc = 0x184C70u;
            goto label_184c70;
        }
    }
    ctx->pc = 0x184C5Cu;
    // 0x184c5c: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184c60: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184c64: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184C64u;
    SET_GPR_U32(ctx, 31, 0x184C6Cu);
    ctx->pc = 0x184C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C64u;
            // 0x184c68: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C6Cu; }
        if (ctx->pc != 0x184C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C6Cu; }
        if (ctx->pc != 0x184C6Cu) { return; }
    }
    ctx->pc = 0x184C6Cu;
    // 0x184c6c: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x184c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_184c70:
    // 0x184c70: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184c70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184c74: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x184c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x184c78: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184C78u;
    {
        const bool branch_taken_0x184c78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184C78u;
            // 0x184c7c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184c78) {
            ctx->pc = 0x184C98u;
            goto label_184c98;
        }
    }
    ctx->pc = 0x184C80u;
    // 0x184c80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184c80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184c84: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184c88: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184C88u;
    SET_GPR_U32(ctx, 31, 0x184C90u);
    ctx->pc = 0x184C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184C88u;
            // 0x184c8c: 0x24a52200  addiu       $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C90u; }
        if (ctx->pc != 0x184C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184C90u; }
        if (ctx->pc != 0x184C90u) { return; }
    }
    ctx->pc = 0x184C90u;
    // 0x184c90: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x184c90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x184c94: 0x0  nop
    ctx->pc = 0x184c94u;
    // NOP
label_184c98:
    // 0x184c98: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184c98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184c9c: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x184c9cu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x184ca0: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184CA0u;
    {
        const bool branch_taken_0x184ca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CA0u;
            // 0x184ca4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ca0) {
            ctx->pc = 0x184CC0u;
            goto label_184cc0;
        }
    }
    ctx->pc = 0x184CA8u;
    // 0x184ca8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184cac: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184cb0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184CB0u;
    SET_GPR_U32(ctx, 31, 0x184CB8u);
    ctx->pc = 0x184CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184CB0u;
            // 0x184cb4: 0x24a52210  addiu       $a1, $a1, 0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CB8u; }
        if (ctx->pc != 0x184CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CB8u; }
        if (ctx->pc != 0x184CB8u) { return; }
    }
    ctx->pc = 0x184CB8u;
    // 0x184cb8: 0x24120168  addiu       $s2, $zero, 0x168
    ctx->pc = 0x184cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
    // 0x184cbc: 0x0  nop
    ctx->pc = 0x184cbcu;
    // NOP
label_184cc0:
    // 0x184cc0: 0x164000dd  bnez        $s2, . + 4 + (0xDD << 2)
    ctx->pc = 0x184CC0u;
    {
        const bool branch_taken_0x184cc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x184CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CC0u;
            // 0x184cc4: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cc0) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184CC8u;
    // 0x184cc8: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184ccc: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184cd0: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184CD0u;
    SET_GPR_U32(ctx, 31, 0x184CD8u);
    ctx->pc = 0x184CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184CD0u;
            // 0x184cd4: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CD8u; }
        if (ctx->pc != 0x184CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184CD8u; }
        if (ctx->pc != 0x184CD8u) { return; }
    }
    ctx->pc = 0x184CD8u;
    // 0x184cd8: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x184CD8u;
    {
        const bool branch_taken_0x184cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CD8u;
            // 0x184cdc: 0x2412008c  addiu       $s2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cd8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184CE0u;
label_184ce0:
    // 0x184ce0: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x184CE0u;
    {
        const bool branch_taken_0x184ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CE0u;
            // 0x184ce4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ce0) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184CE8u;
label_184ce8:
    // 0x184ce8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184cec: 0x44100d2  bgez        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x184CECu;
    {
        const bool branch_taken_0x184cec = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x184cec) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184CF4u;
    // 0x184cf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x184cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x184cf8: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x184cf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x184cfc: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x184CFCu;
    {
        const bool branch_taken_0x184cfc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184CFCu;
            // 0x184d00: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cfc) {
            ctx->pc = 0x184D10u;
            goto label_184d10;
        }
    }
    ctx->pc = 0x184D04u;
    // 0x184d04: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x184d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d08: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x184d08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
    // 0x184d0c: 0x0  nop
    ctx->pc = 0x184d0cu;
    // NOP
label_184d10:
    // 0x184d10: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184d14: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184d18: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184d1c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184D1Cu;
    SET_GPR_U32(ctx, 31, 0x184D24u);
    ctx->pc = 0x184D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D1Cu;
            // 0x184d20: 0x24a521f0  addiu       $a1, $a1, 0x21F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D24u; }
        if (ctx->pc != 0x184D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D24u; }
        if (ctx->pc != 0x184D24u) { return; }
    }
    ctx->pc = 0x184D24u;
    // 0x184d24: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184d24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184d28: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x184d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x184d2c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x184D2Cu;
    {
        const bool branch_taken_0x184d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D2Cu;
            // 0x184d30: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d2c) {
            ctx->pc = 0x184D48u;
            goto label_184d48;
        }
    }
    ctx->pc = 0x184D34u;
    // 0x184d34: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184d38: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184d3c: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184D3Cu;
    SET_GPR_U32(ctx, 31, 0x184D44u);
    ctx->pc = 0x184D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D3Cu;
            // 0x184d40: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D44u; }
        if (ctx->pc != 0x184D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D44u; }
        if (ctx->pc != 0x184D44u) { return; }
    }
    ctx->pc = 0x184D44u;
    // 0x184d44: 0x2412008c  addiu       $s2, $zero, 0x8C
    ctx->pc = 0x184d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_184d48:
    // 0x184d48: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184d48u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184d4c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x184d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x184d50: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x184D50u;
    {
        const bool branch_taken_0x184d50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D50u;
            // 0x184d54: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d50) {
            ctx->pc = 0x184D70u;
            goto label_184d70;
        }
    }
    ctx->pc = 0x184D58u;
    // 0x184d58: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184d5c: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184d60: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184D60u;
    SET_GPR_U32(ctx, 31, 0x184D68u);
    ctx->pc = 0x184D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D60u;
            // 0x184d64: 0x24a52200  addiu       $a1, $a1, 0x2200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D68u; }
        if (ctx->pc != 0x184D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D68u; }
        if (ctx->pc != 0x184D68u) { return; }
    }
    ctx->pc = 0x184D68u;
    // 0x184d68: 0x24120078  addiu       $s2, $zero, 0x78
    ctx->pc = 0x184d68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x184d6c: 0x0  nop
    ctx->pc = 0x184d6cu;
    // NOP
label_184d70:
    // 0x184d70: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184d70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184d74: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x184d74u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x184d78: 0x146200af  bne         $v1, $v0, . + 4 + (0xAF << 2)
    ctx->pc = 0x184D78u;
    {
        const bool branch_taken_0x184d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x184D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D78u;
            // 0x184d7c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d78) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184D80u;
    // 0x184d80: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184d84: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184d88: 0xc04f438  jal         func_13D0E0
    ctx->pc = 0x184D88u;
    SET_GPR_U32(ctx, 31, 0x184D90u);
    ctx->pc = 0x184D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184D88u;
            // 0x184d8c: 0x24a52210  addiu       $a1, $a1, 0x2210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D0E0u;
    if (runtime->hasFunction(0x13D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D90u; }
        if (ctx->pc != 0x184D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x13d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184D90u; }
        if (ctx->pc != 0x184D90u) { return; }
    }
    ctx->pc = 0x184D90u;
    // 0x184d90: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x184D90u;
    {
        const bool branch_taken_0x184d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184D90u;
            // 0x184d94: 0x24120168  addiu       $s2, $zero, 0x168 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 360));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d90) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184D98u;
label_184d98:
    // 0x184d98: 0x97a20068  lhu         $v0, 0x68($sp)
    ctx->pc = 0x184d98u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184d9c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x184D9Cu;
    {
        const bool branch_taken_0x184d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184d9c) {
            ctx->pc = 0x184DC8u;
            goto label_184dc8;
        }
    }
    ctx->pc = 0x184DA4u;
    // 0x184da4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x184da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x184da8: 0x2a01000b  slti        $at, $s0, 0xB
    ctx->pc = 0x184da8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x184dac: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x184DACu;
    {
        const bool branch_taken_0x184dac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x184DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DACu;
            // 0x184db0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dac) {
            ctx->pc = 0x184DC0u;
            goto label_184dc0;
        }
    }
    ctx->pc = 0x184DB4u;
    // 0x184db4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x184db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184db8: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x184DB8u;
    {
        const bool branch_taken_0x184db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DB8u;
            // 0x184dbc: 0x2412008c  addiu       $s2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184db8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184DC0u;
label_184dc0:
    // 0x184dc0: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x184DC0u;
    {
        const bool branch_taken_0x184dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DC0u;
            // 0x184dc4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184dc0) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184DC8u;
label_184dc8:
    // 0x184dc8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x184dc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x184dcc: 0x8c26bb68  lw          $a2, -0x4498($at)
    ctx->pc = 0x184dccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949736)));
    // 0x184dd0: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x184dd4: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x184dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x184dd8: 0x2484be00  addiu       $a0, $a0, -0x4200
    ctx->pc = 0x184dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950400));
    // 0x184ddc: 0x24a52220  addiu       $a1, $a1, 0x2220
    ctx->pc = 0x184ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8736));
    // 0x184de0: 0xc04f2be  jal         func_13CAF8
    ctx->pc = 0x184DE0u;
    SET_GPR_U32(ctx, 31, 0x184DE8u);
    ctx->pc = 0x184DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184DE0u;
            // 0x184de4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CAF8u;
    if (runtime->hasFunction(0x13CAF8u)) {
        auto targetFn = runtime->lookupFunction(0x13CAF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DE8u; }
        if (ctx->pc != 0x184DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x13caf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184DE8u; }
        if (ctx->pc != 0x184DE8u) { return; }
    }
    ctx->pc = 0x184DE8u;
    // 0x184de8: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x184DE8u;
    {
        const bool branch_taken_0x184de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184DE8u;
            // 0x184dec: 0x241200a0  addiu       $s2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184de8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184DF0u;
label_184df0:
    // 0x184df0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x184df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184df4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x184DF4u;
    {
        const bool branch_taken_0x184df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x184df4) {
            ctx->pc = 0x184E08u;
            goto label_184e08;
        }
    }
    ctx->pc = 0x184DFCu;
    // 0x184dfc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x184dfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e00: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x184E00u;
    {
        const bool branch_taken_0x184e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E00u;
            // 0x184e04: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e00) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E08u;
label_184e08:
    // 0x184e08: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x184e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x184e0c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x184E0Cu;
    {
        const bool branch_taken_0x184e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E0Cu;
            // 0x184e10: 0x3c01003b  lui         $at, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e0c) {
            ctx->pc = 0x184E38u;
            goto label_184e38;
        }
    }
    ctx->pc = 0x184E14u;
    // 0x184e14: 0x8c23bb68  lw          $v1, -0x4498($at)
    ctx->pc = 0x184e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294949736)));
    // 0x184e18: 0x28610029  slti        $at, $v1, 0x29
    ctx->pc = 0x184e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x184e1c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x184E1Cu;
    {
        const bool branch_taken_0x184e1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E1Cu;
            // 0x184e20: 0x120902d  daddu       $s2, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e1c) {
            ctx->pc = 0x184E30u;
            goto label_184e30;
        }
    }
    ctx->pc = 0x184E24u;
    // 0x184e24: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x184E24u;
    {
        const bool branch_taken_0x184e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e24) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E2Cu;
    // 0x184e2c: 0x0  nop
    ctx->pc = 0x184e2cu;
    // NOP
label_184e30:
    // 0x184e30: 0x10000081  b           . + 4 + (0x81 << 2)
    ctx->pc = 0x184E30u;
    {
        const bool branch_taken_0x184e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E30u;
            // 0x184e34: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e30) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E38u;
label_184e38:
    // 0x184e38: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x184E38u;
    {
        const bool branch_taken_0x184e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E38u;
            // 0x184e3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e38) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E40u;
label_184e40:
    // 0x184e40: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184e44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184E44u;
    {
        const bool branch_taken_0x184e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E44u;
            // 0x184e48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e44) {
            ctx->pc = 0x184E58u;
            goto label_184e58;
        }
    }
    ctx->pc = 0x184E4Cu;
    // 0x184e4c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x184E4Cu;
    {
        const bool branch_taken_0x184e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e4c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E54u;
    // 0x184e54: 0x0  nop
    ctx->pc = 0x184e54u;
    // NOP
label_184e58:
    // 0x184e58: 0xc061a14  jal         func_186850
    ctx->pc = 0x184E58u;
    SET_GPR_U32(ctx, 31, 0x184E60u);
    ctx->pc = 0x186850u;
    if (runtime->hasFunction(0x186850u)) {
        auto targetFn = runtime->lookupFunction(0x186850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E60u; }
        if (ctx->pc != 0x184E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MemCardFileCheckLight_0x186850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184E60u; }
        if (ctx->pc != 0x184E60u) { return; }
    }
    ctx->pc = 0x184E60u;
    // 0x184e60: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x184E60u;
    {
        const bool branch_taken_0x184e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e60) {
            ctx->pc = 0x184E88u;
            goto label_184e88;
        }
    }
    ctx->pc = 0x184E68u;
    // 0x184e68: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x184E68u;
    {
        const bool branch_taken_0x184e68 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x184E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E68u;
            // 0x184e6c: 0x24120140  addiu       $s2, $zero, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e68) {
            ctx->pc = 0x184E78u;
            goto label_184e78;
        }
    }
    ctx->pc = 0x184E70u;
    // 0x184e70: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x184E70u;
    {
        const bool branch_taken_0x184e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e70) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E78u;
label_184e78:
    // 0x184e78: 0x2412014a  addiu       $s2, $zero, 0x14A
    ctx->pc = 0x184e78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
    // 0x184e7c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x184E7Cu;
    {
        const bool branch_taken_0x184e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E7Cu;
            // 0x184e80: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e7c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E84u;
    // 0x184e84: 0x0  nop
    ctx->pc = 0x184e84u;
    // NOP
label_184e88:
    // 0x184e88: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x184E88u;
    {
        const bool branch_taken_0x184e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E88u;
            // 0x184e8c: 0x241200d2  addiu       $s2, $zero, 0xD2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e88) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184E90u;
label_184e90:
    // 0x184e90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184e94: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184E94u;
    {
        const bool branch_taken_0x184e94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184E94u;
            // 0x184e98: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184e94) {
            ctx->pc = 0x184EB8u;
            goto label_184eb8;
        }
    }
    ctx->pc = 0x184E9Cu;
    // 0x184e9c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x184e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x184ea0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184EA0u;
    {
        const bool branch_taken_0x184ea0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x184EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EA0u;
            // 0x184ea4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ea0) {
            ctx->pc = 0x184EB0u;
            goto label_184eb0;
        }
    }
    ctx->pc = 0x184EA8u;
    // 0x184ea8: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x184EA8u;
    {
        const bool branch_taken_0x184ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EA8u;
            // 0x184eac: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ea8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184EB0u;
label_184eb0:
    // 0x184eb0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x184EB0u;
    {
        const bool branch_taken_0x184eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EB0u;
            // 0x184eb4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184eb0) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184EB8u;
label_184eb8:
    // 0x184eb8: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x184EB8u;
    {
        const bool branch_taken_0x184eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EB8u;
            // 0x184ebc: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184eb8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184EC0u;
label_184ec0:
    // 0x184ec0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184ec4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184EC4u;
    {
        const bool branch_taken_0x184ec4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EC4u;
            // 0x184ec8: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ec4) {
            ctx->pc = 0x184EE8u;
            goto label_184ee8;
        }
    }
    ctx->pc = 0x184ECCu;
    // 0x184ecc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x184eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x184ed0: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184ED0u;
    {
        const bool branch_taken_0x184ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x184ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184ED0u;
            // 0x184ed4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ed0) {
            ctx->pc = 0x184EE0u;
            goto label_184ee0;
        }
    }
    ctx->pc = 0x184ED8u;
    // 0x184ed8: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x184ED8u;
    {
        const bool branch_taken_0x184ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184ED8u;
            // 0x184edc: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ed8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184EE0u;
label_184ee0:
    // 0x184ee0: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x184EE0u;
    {
        const bool branch_taken_0x184ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EE0u;
            // 0x184ee4: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ee0) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184EE8u;
label_184ee8:
    // 0x184ee8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x184EE8u;
    {
        const bool branch_taken_0x184ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EE8u;
            // 0x184eec: 0xe0902d  daddu       $s2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ee8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184EF0u;
label_184ef0:
    // 0x184ef0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184ef4: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184EF4u;
    {
        const bool branch_taken_0x184ef4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184EF4u;
            // 0x184ef8: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ef4) {
            ctx->pc = 0x184F18u;
            goto label_184f18;
        }
    }
    ctx->pc = 0x184EFCu;
    // 0x184efc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x184efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x184f00: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184F00u;
    {
        const bool branch_taken_0x184f00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x184F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F00u;
            // 0x184f04: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f00) {
            ctx->pc = 0x184F10u;
            goto label_184f10;
        }
    }
    ctx->pc = 0x184F08u;
    // 0x184f08: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x184F08u;
    {
        const bool branch_taken_0x184f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F08u;
            // 0x184f0c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f08) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F10u;
label_184f10:
    // 0x184f10: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x184F10u;
    {
        const bool branch_taken_0x184f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F10u;
            // 0x184f14: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f10) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F18u;
label_184f18:
    // 0x184f18: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x184F18u;
    {
        const bool branch_taken_0x184f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F18u;
            // 0x184f1c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f18) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F20u;
label_184f20:
    // 0x184f20: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184f24: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184F24u;
    {
        const bool branch_taken_0x184f24 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F24u;
            // 0x184f28: 0x3044ffff  andi        $a0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f24) {
            ctx->pc = 0x184F48u;
            goto label_184f48;
        }
    }
    ctx->pc = 0x184F2Cu;
    // 0x184f2c: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x184f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x184f30: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x184F30u;
    {
        const bool branch_taken_0x184f30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x184F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F30u;
            // 0x184f34: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f30) {
            ctx->pc = 0x184F40u;
            goto label_184f40;
        }
    }
    ctx->pc = 0x184F38u;
    // 0x184f38: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x184F38u;
    {
        const bool branch_taken_0x184f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F38u;
            // 0x184f3c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f38) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F40u;
label_184f40:
    // 0x184f40: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x184F40u;
    {
        const bool branch_taken_0x184f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F40u;
            // 0x184f44: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f40) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F48u;
label_184f48:
    // 0x184f48: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x184F48u;
    {
        const bool branch_taken_0x184f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F48u;
            // 0x184f4c: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f48) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F50u;
label_184f50:
    // 0x184f50: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184f54: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184F54u;
    {
        const bool branch_taken_0x184f54 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F54u;
            // 0x184f58: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f54) {
            ctx->pc = 0x184F68u;
            goto label_184f68;
        }
    }
    ctx->pc = 0x184F5Cu;
    // 0x184f5c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x184F5Cu;
    {
        const bool branch_taken_0x184f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F5Cu;
            // 0x184f60: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f5c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F64u;
    // 0x184f64: 0x0  nop
    ctx->pc = 0x184f64u;
    // NOP
label_184f68:
    // 0x184f68: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x184F68u;
    {
        const bool branch_taken_0x184f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F68u;
            // 0x184f6c: 0x241200bf  addiu       $s2, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f68) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F70u;
label_184f70:
    // 0x184f70: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184f74: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184F74u;
    {
        const bool branch_taken_0x184f74 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F74u;
            // 0x184f78: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f74) {
            ctx->pc = 0x184F88u;
            goto label_184f88;
        }
    }
    ctx->pc = 0x184F7Cu;
    // 0x184f7c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x184F7Cu;
    {
        const bool branch_taken_0x184f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F7Cu;
            // 0x184f80: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f7c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F84u;
    // 0x184f84: 0x0  nop
    ctx->pc = 0x184f84u;
    // NOP
label_184f88:
    // 0x184f88: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x184F88u;
    {
        const bool branch_taken_0x184f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F88u;
            // 0x184f8c: 0x241200c0  addiu       $s2, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f88) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184F90u;
label_184f90:
    // 0x184f90: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184f94: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184F94u;
    {
        const bool branch_taken_0x184f94 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F94u;
            // 0x184f98: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f94) {
            ctx->pc = 0x184FA8u;
            goto label_184fa8;
        }
    }
    ctx->pc = 0x184F9Cu;
    // 0x184f9c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x184F9Cu;
    {
        const bool branch_taken_0x184f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184F9Cu;
            // 0x184fa0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184f9c) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184FA4u;
    // 0x184fa4: 0x0  nop
    ctx->pc = 0x184fa4u;
    // NOP
label_184fa8:
    // 0x184fa8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x184FA8u;
    {
        const bool branch_taken_0x184fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FA8u;
            // 0x184fac: 0x241200dc  addiu       $s2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fa8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184FB0u;
label_184fb0:
    // 0x184fb0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184fb4: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184FB4u;
    {
        const bool branch_taken_0x184fb4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x184FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FB4u;
            // 0x184fb8: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fb4) {
            ctx->pc = 0x184FC8u;
            goto label_184fc8;
        }
    }
    ctx->pc = 0x184FBCu;
    // 0x184fbc: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x184FBCu;
    {
        const bool branch_taken_0x184fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FBCu;
            // 0x184fc0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fbc) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184FC4u;
    // 0x184fc4: 0x0  nop
    ctx->pc = 0x184fc4u;
    // NOP
label_184fc8:
    // 0x184fc8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x184FC8u;
    {
        const bool branch_taken_0x184fc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FC8u;
            // 0x184fcc: 0x24120154  addiu       $s2, $zero, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 340));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fc8) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184FD0u;
label_184fd0:
    // 0x184fd0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x184fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184fd4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x184FD4u;
    {
        const bool branch_taken_0x184fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FD4u;
            // 0x184fd8: 0x241200b5  addiu       $s2, $zero, 0xB5 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 181));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fd4) {
            ctx->pc = 0x184FE8u;
            goto label_184fe8;
        }
    }
    ctx->pc = 0x184FDCu;
    // 0x184fdc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x184FDCu;
    {
        const bool branch_taken_0x184fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184fdc) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184FE4u;
    // 0x184fe4: 0x0  nop
    ctx->pc = 0x184fe4u;
    // NOP
label_184fe8:
    // 0x184fe8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x184fe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184fec: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x184FECu;
    {
        const bool branch_taken_0x184fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184FECu;
            // 0x184ff0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184fec) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x184FF4u;
    // 0x184ff4: 0x0  nop
    ctx->pc = 0x184ff4u;
    // NOP
label_184ff8:
    // 0x184ff8: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x184ff8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x184ffc: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x184ffcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x185000: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185000u;
    {
        const bool branch_taken_0x185000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x185004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185000u;
            // 0x185004: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185000) {
            ctx->pc = 0x185010u;
            goto label_185010;
        }
    }
    ctx->pc = 0x185008u;
    // 0x185008: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x185008u;
    {
        const bool branch_taken_0x185008 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185008) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x185010u;
label_185010:
    // 0x185010: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x185010u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185014: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x185014u;
    {
        const bool branch_taken_0x185014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185014u;
            // 0x185018: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185014) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x18501Cu;
    // 0x18501c: 0x0  nop
    ctx->pc = 0x18501cu;
    // NOP
label_185020:
    // 0x185020: 0x97a30068  lhu         $v1, 0x68($sp)
    ctx->pc = 0x185020u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x185024: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x185024u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)36867u)));
    // 0x185028: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x185028u;
    {
        const bool branch_taken_0x185028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x185028) {
            ctx->pc = 0x185038u;
            goto label_185038;
        }
    }
    ctx->pc = 0x185030u;
    // 0x185030: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x185030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185034: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x185034u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_185038:
    // 0x185038: 0xc0603f4  jal         func_180FD0
    ctx->pc = 0x185038u;
    SET_GPR_U32(ctx, 31, 0x185040u);
    ctx->pc = 0x180FD0u;
    if (runtime->hasFunction(0x180FD0u)) {
        auto targetFn = runtime->lookupFunction(0x180FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185040u; }
        if (ctx->pc != 0x185040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        bgDraw_0x180fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185040u; }
        if (ctx->pc != 0x185040u) { return; }
    }
    ctx->pc = 0x185040u;
    // 0x185040: 0x1660fa59  bnez        $s3, . + 4 + (-0x5A7 << 2)
    ctx->pc = 0x185040u;
    {
        const bool branch_taken_0x185040 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x185040) {
            ctx->pc = 0x1839A8u;
            goto label_1839a8;
        }
    }
    ctx->pc = 0x185048u;
    // 0x185048: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x185048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18504c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18504cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x185050: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x185050u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x185054: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x185054u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185058: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x185058u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18505c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18505cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185060: 0x3e00008  jr          $ra
    ctx->pc = 0x185060u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x185060u;
            // 0x185064: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1839A8u: goto label_1839a8;
            case 0x183AD8u: goto label_183ad8;
            case 0x183AE8u: goto label_183ae8;
            case 0x183B30u: goto label_183b30;
            case 0x183B60u: goto label_183b60;
            case 0x183BA8u: goto label_183ba8;
            case 0x183BF0u: goto label_183bf0;
            case 0x183C30u: goto label_183c30;
            case 0x183C78u: goto label_183c78;
            case 0x183C88u: goto label_183c88;
            case 0x183CD0u: goto label_183cd0;
            case 0x183D10u: goto label_183d10;
            case 0x183D20u: goto label_183d20;
            case 0x183D50u: goto label_183d50;
            case 0x183DA8u: goto label_183da8;
            case 0x183DF0u: goto label_183df0;
            case 0x183E28u: goto label_183e28;
            case 0x183E40u: goto label_183e40;
            case 0x183E48u: goto label_183e48;
            case 0x183E60u: goto label_183e60;
            case 0x183EB8u: goto label_183eb8;
            case 0x183F00u: goto label_183f00;
            case 0x183F38u: goto label_183f38;
            case 0x183F58u: goto label_183f58;
            case 0x183F60u: goto label_183f60;
            case 0x183F78u: goto label_183f78;
            case 0x183FD0u: goto label_183fd0;
            case 0x184018u: goto label_184018;
            case 0x184050u: goto label_184050;
            case 0x184070u: goto label_184070;
            case 0x184078u: goto label_184078;
            case 0x184090u: goto label_184090;
            case 0x1840D8u: goto label_1840d8;
            case 0x184110u: goto label_184110;
            case 0x184148u: goto label_184148;
            case 0x1841A0u: goto label_1841a0;
            case 0x1841E8u: goto label_1841e8;
            case 0x184220u: goto label_184220;
            case 0x184238u: goto label_184238;
            case 0x184240u: goto label_184240;
            case 0x184258u: goto label_184258;
            case 0x1842B0u: goto label_1842b0;
            case 0x1842F8u: goto label_1842f8;
            case 0x184330u: goto label_184330;
            case 0x184348u: goto label_184348;
            case 0x184350u: goto label_184350;
            case 0x184368u: goto label_184368;
            case 0x184378u: goto label_184378;
            case 0x1843A8u: goto label_1843a8;
            case 0x1843D0u: goto label_1843d0;
            case 0x184400u: goto label_184400;
            case 0x184508u: goto label_184508;
            case 0x184550u: goto label_184550;
            case 0x184580u: goto label_184580;
            case 0x1845B0u: goto label_1845b0;
            case 0x1845E0u: goto label_1845e0;
            case 0x184610u: goto label_184610;
            case 0x184640u: goto label_184640;
            case 0x184670u: goto label_184670;
            case 0x1846A0u: goto label_1846a0;
            case 0x1846D0u: goto label_1846d0;
            case 0x184700u: goto label_184700;
            case 0x184730u: goto label_184730;
            case 0x184760u: goto label_184760;
            case 0x1847B0u: goto label_1847b0;
            case 0x184818u: goto label_184818;
            case 0x184868u: goto label_184868;
            case 0x1848B8u: goto label_1848b8;
            case 0x1848E8u: goto label_1848e8;
            case 0x184918u: goto label_184918;
            case 0x184970u: goto label_184970;
            case 0x1849B0u: goto label_1849b0;
            case 0x1849F0u: goto label_1849f0;
            case 0x184A60u: goto label_184a60;
            case 0x184A80u: goto label_184a80;
            case 0x184AB0u: goto label_184ab0;
            case 0x184AE0u: goto label_184ae0;
            case 0x184B08u: goto label_184b08;
            case 0x184C10u: goto label_184c10;
            case 0x184C38u: goto label_184c38;
            case 0x184C70u: goto label_184c70;
            case 0x184C98u: goto label_184c98;
            case 0x184CC0u: goto label_184cc0;
            case 0x184CE0u: goto label_184ce0;
            case 0x184CE8u: goto label_184ce8;
            case 0x184D10u: goto label_184d10;
            case 0x184D48u: goto label_184d48;
            case 0x184D70u: goto label_184d70;
            case 0x184D98u: goto label_184d98;
            case 0x184DC0u: goto label_184dc0;
            case 0x184DC8u: goto label_184dc8;
            case 0x184DF0u: goto label_184df0;
            case 0x184E08u: goto label_184e08;
            case 0x184E30u: goto label_184e30;
            case 0x184E38u: goto label_184e38;
            case 0x184E40u: goto label_184e40;
            case 0x184E58u: goto label_184e58;
            case 0x184E78u: goto label_184e78;
            case 0x184E88u: goto label_184e88;
            case 0x184E90u: goto label_184e90;
            case 0x184EB0u: goto label_184eb0;
            case 0x184EB8u: goto label_184eb8;
            case 0x184EC0u: goto label_184ec0;
            case 0x184EE0u: goto label_184ee0;
            case 0x184EE8u: goto label_184ee8;
            case 0x184EF0u: goto label_184ef0;
            case 0x184F10u: goto label_184f10;
            case 0x184F18u: goto label_184f18;
            case 0x184F20u: goto label_184f20;
            case 0x184F40u: goto label_184f40;
            case 0x184F48u: goto label_184f48;
            case 0x184F50u: goto label_184f50;
            case 0x184F68u: goto label_184f68;
            case 0x184F70u: goto label_184f70;
            case 0x184F88u: goto label_184f88;
            case 0x184F90u: goto label_184f90;
            case 0x184FA8u: goto label_184fa8;
            case 0x184FB0u: goto label_184fb0;
            case 0x184FC8u: goto label_184fc8;
            case 0x184FD0u: goto label_184fd0;
            case 0x184FE8u: goto label_184fe8;
            case 0x184FF8u: goto label_184ff8;
            case 0x185010u: goto label_185010;
            case 0x185020u: goto label_185020;
            case 0x185038u: goto label_185038;
            default: break;
        }
        return;
    }
    ctx->pc = 0x185068u;
}
