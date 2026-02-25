#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimAddMT
// Address: 0x170fc0 - 0x171454
void wrsPrimAddMT_0x170fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimAddMT_0x170fc0");
#endif

    ctx->pc = 0x170fc0u;

    // 0x170fc0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170fc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x170fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x170fc8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x170fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x170fcc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x170fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x170fd0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x170fd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170fd4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x170fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170fdc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170fe0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170fe4: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x170fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x170fe8: 0xc042054  jal         func_108150
    ctx->pc = 0x170FE8u;
    SET_GPR_U32(ctx, 31, 0x170FF0u);
    ctx->pc = 0x170FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FE8u;
            // 0x170fec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108150u;
    if (runtime->hasFunction(0x108150u)) {
        auto targetFn = runtime->lookupFunction(0x108150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FF0u; }
        if (ctx->pc != 0x170FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkPacketSize_0x108150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170FF0u; }
        if (ctx->pc != 0x170FF0u) { return; }
    }
    ctx->pc = 0x170FF0u;
    // 0x170ff0: 0xaea20018  sw          $v0, 0x18($s5)
    ctx->pc = 0x170ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 2));
    // 0x170ff4: 0x8ea5001c  lw          $a1, 0x1C($s5)
    ctx->pc = 0x170ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x170ff8: 0xc042ace  jal         func_10AB38
    ctx->pc = 0x170FF8u;
    SET_GPR_U32(ctx, 31, 0x171000u);
    ctx->pc = 0x170FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170FF8u;
            // 0x170ffc: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB38u;
    if (runtime->hasFunction(0x10AB38u)) {
        auto targetFn = runtime->lookupFunction(0x10AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171000u; }
        if (ctx->pc != 0x171000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkNumPtoV_0x10ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171000u; }
        if (ctx->pc != 0x171000u) { return; }
    }
    ctx->pc = 0x171000u;
    // 0x171000: 0xaea20014  sw          $v0, 0x14($s5)
    ctx->pc = 0x171000u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 20), GPR_U32(ctx, 2));
    // 0x171004: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x171004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x171008: 0x8ea20018  lw          $v0, 0x18($s5)
    ctx->pc = 0x171008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x17100c: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x17100Cu;
    SET_GPR_U32(ctx, 31, 0x171014u);
    ctx->pc = 0x171010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17100Cu;
            // 0x171010: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171014u; }
        if (ctx->pc != 0x171014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171014u; }
        if (ctx->pc != 0x171014u) { return; }
    }
    ctx->pc = 0x171014u;
    // 0x171014: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171014u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171018: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x171018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x17101c: 0x8c267670  lw          $a2, 0x7670($at)
    ctx->pc = 0x17101cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171020: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x171020u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x171024: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x171024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x171028: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x171028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x17102c: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x17102cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
    // 0x171030: 0x25083970  addiu       $t0, $t0, 0x3970
    ctx->pc = 0x171030u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14704));
    // 0x171034: 0x24633980  addiu       $v1, $v1, 0x3980
    ctx->pc = 0x171034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14720));
    // 0x171038: 0x24a5b980  addiu       $a1, $a1, -0x4680
    ctx->pc = 0x171038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949248));
    // 0x17103c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17103cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171040: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x171040u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x171044: 0x38ca0001  xori        $t2, $a2, 0x1
    ctx->pc = 0x171044u;
    SET_GPR_VEC(ctx, 10, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)1u)));
    // 0x171048: 0xa32c0  sll         $a2, $t2, 11
    ctx->pc = 0x171048u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
    // 0x17104c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x17104cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x171050: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x171050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x171054: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x171054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x171058: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x171058u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17105c: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x17105cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x171060: 0x43340  sll         $a2, $a0, 13
    ctx->pc = 0x171060u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
    // 0x171064: 0xa2040  sll         $a0, $t2, 1
    ctx->pc = 0x171064u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x171068: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x171068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x17106c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x17106cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x171070: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x171070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x171074: 0x42380  sll         $a0, $a0, 14
    ctx->pc = 0x171074u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
    // 0x171078: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x171078u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x17107c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171080: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x171080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x171084: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x171084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x171088: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x171088u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17108c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x17108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x171090: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x171090u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x171094: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x171094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x171098: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x171098u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17109c: 0x8ea30010  lw          $v1, 0x10($s5)
    ctx->pc = 0x17109cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1710a0: 0x106000e3  beqz        $v1, . + 4 + (0xE3 << 2)
    ctx->pc = 0x1710A0u;
    {
        const bool branch_taken_0x1710a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1710A0u;
            // 0x1710a4: 0xa69821  addu        $s3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710a0) {
            ctx->pc = 0x171430u;
            goto label_171430;
        }
    }
    ctx->pc = 0x1710A8u;
    // 0x1710a8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x1710a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1710ac: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1710acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x1710b0: 0xa7a20070  sh          $v0, 0x70($sp)
    ctx->pc = 0x1710b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x1710b4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1710b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1710b8: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x1710b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1710bc: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x1710bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x1710c0: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1710c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1710c4: 0xa7a20072  sh          $v0, 0x72($sp)
    ctx->pc = 0x1710c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x1710c8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1710c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1710cc: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x1710ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x1710d0: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x1710d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x1710d4: 0xa7a00076  sh          $zero, 0x76($sp)
    ctx->pc = 0x1710d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x1710d8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x1710d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x1710dc: 0xa7a00078  sh          $zero, 0x78($sp)
    ctx->pc = 0x1710dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x1710e0: 0xa7a20074  sh          $v0, 0x74($sp)
    ctx->pc = 0x1710e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x1710e4: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1710e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1710e8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1710e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1710ec: 0xa7a2007a  sh          $v0, 0x7A($sp)
    ctx->pc = 0x1710ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x1710f0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1710f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x1710f4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1710f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1710f8: 0xa7a2007c  sh          $v0, 0x7C($sp)
    ctx->pc = 0x1710f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x1710fc: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x1710fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x171100: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x171100u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x171104: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x171104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x171108: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x171108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x17110c: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x17110cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
    // 0x171110: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x171110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x171114: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x171114u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x171118: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x171118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x17111c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x17111cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x171120: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x171120u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x171124: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x171124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x171128: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x171128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x17112c: 0xc0420f8  jal         func_1083E0
    ctx->pc = 0x17112Cu;
    SET_GPR_U32(ctx, 31, 0x171134u);
    ctx->pc = 0x171130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17112Cu;
            // 0x171130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083E0u;
    if (runtime->hasFunction(0x1083E0u)) {
        auto targetFn = runtime->lookupFunction(0x1083E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171134u; }
        if (ctx->pc != 0x171134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPrimR_0x1083e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171134u; }
        if (ctx->pc != 0x171134u) { return; }
    }
    ctx->pc = 0x171134u;
    // 0x171134: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x171134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x171138: 0x8ea6001c  lw          $a2, 0x1C($s5)
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x17113c: 0xc0420a6  jal         func_108298
    ctx->pc = 0x17113Cu;
    SET_GPR_U32(ctx, 31, 0x171144u);
    ctx->pc = 0x171140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17113Cu;
            // 0x171140: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171144u; }
        if (ctx->pc != 0x171144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171144u; }
        if (ctx->pc != 0x171144u) { return; }
    }
    ctx->pc = 0x171144u;
    // 0x171144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x171144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171148: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x171148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x17114c: 0xc0420a6  jal         func_108298
    ctx->pc = 0x17114Cu;
    SET_GPR_U32(ctx, 31, 0x171154u);
    ctx->pc = 0x171150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17114Cu;
            // 0x171150: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171154u; }
        if (ctx->pc != 0x171154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171154u; }
        if (ctx->pc != 0x171154u) { return; }
    }
    ctx->pc = 0x171154u;
    // 0x171154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x171154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171158: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x171158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x17115c: 0xc0420a6  jal         func_108298
    ctx->pc = 0x17115Cu;
    SET_GPR_U32(ctx, 31, 0x171164u);
    ctx->pc = 0x171160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17115Cu;
            // 0x171160: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171164u; }
        if (ctx->pc != 0x171164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171164u; }
        if (ctx->pc != 0x171164u) { return; }
    }
    ctx->pc = 0x171164u;
    // 0x171164: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x171164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171168: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x171168u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x17116c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17116cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171170: 0xc04247a  jal         func_1091E8
    ctx->pc = 0x171170u;
    SET_GPR_U32(ctx, 31, 0x171178u);
    ctx->pc = 0x171174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171170u;
            // 0x171174: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1091E8u;
    if (runtime->hasFunction(0x1091E8u)) {
        auto targetFn = runtime->lookupFunction(0x1091E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171178u; }
        if (ctx->pc != 0x171178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetTexEnv_0x1091e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171178u; }
        if (ctx->pc != 0x171178u) { return; }
    }
    ctx->pc = 0x171178u;
    // 0x171178: 0x92650034  lbu         $a1, 0x34($s3)
    ctx->pc = 0x171178u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x17117c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x17117cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x171180: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x171180u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x171184: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x171184u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x171188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x171188u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x17118c: 0xa2620034  sb          $v0, 0x34($s3)
    ctx->pc = 0x17118cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x171190: 0x8ea50020  lw          $a1, 0x20($s5)
    ctx->pc = 0x171190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x171194: 0x8ea60024  lw          $a2, 0x24($s5)
    ctx->pc = 0x171194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    // 0x171198: 0xc04278e  jal         func_109E38
    ctx->pc = 0x171198u;
    SET_GPR_U32(ctx, 31, 0x1711A0u);
    ctx->pc = 0x17119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171198u;
            // 0x17119c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E38u;
    if (runtime->hasFunction(0x109E38u)) {
        auto targetFn = runtime->lookupFunction(0x109E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711A0u; }
        if (ctx->pc != 0x1711A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetAlphaEnvFunc_0x109e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711A0u; }
        if (ctx->pc != 0x1711A0u) { return; }
    }
    ctx->pc = 0x1711A0u;
    // 0x1711a0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x1711a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x1711a4: 0xde250010  ld          $a1, 0x10($s1)
    ctx->pc = 0x1711a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1711a8: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x1711a8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x1711ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1711acu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x1711b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1711b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1711b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x1711b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x1711b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1711b8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x1711bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1711bcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1711c0: 0x519b8  dsll        $v1, $a1, 6
    ctx->pc = 0x1711c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 6);
    // 0x1711c4: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1711c4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x1711c8: 0x31d7e  dsrl32      $v1, $v1, 21
    ctx->pc = 0x1711c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 21));
    // 0x1711cc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1711ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x1711d0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x1711d0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x1711d4: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x1711d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x1711d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1711d8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1711dc: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x1711dcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x1711e0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x1711e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1711e4: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x1711e4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1711e8: 0x90460001  lbu         $a2, 0x1($v0)
    ctx->pc = 0x1711e8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x1711ec: 0x90470002  lbu         $a3, 0x2($v0)
    ctx->pc = 0x1711ecu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1711f0: 0x90480003  lbu         $t0, 0x3($v0)
    ctx->pc = 0x1711f0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1711f4: 0xc05c518  jal         func_171460
    ctx->pc = 0x1711F4u;
    SET_GPR_U32(ctx, 31, 0x1711FCu);
    ctx->pc = 0x1711F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1711F4u;
            // 0x1711f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171460u;
    if (runtime->hasFunction(0x171460u)) {
        auto targetFn = runtime->lookupFunction(0x171460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711FCu; }
        if (ctx->pc != 0x1711FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetRgbaFM_0x171460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1711FCu; }
        if (ctx->pc != 0x1711FCu) { return; }
    }
    ctx->pc = 0x1711FCu;
    // 0x1711fc: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1711fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x171200: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x171200u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x171204: 0x1020006c  beqz        $at, . + 4 + (0x6C << 2)
    ctx->pc = 0x171204u;
    {
        const bool branch_taken_0x171204 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x171208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x171204u;
            // 0x171208: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171204) {
            ctx->pc = 0x1713B8u;
            goto label_1713b8;
        }
    }
    ctx->pc = 0x17120Cu;
    // 0x17120c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17120cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_171210:
    // 0x171210: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x171210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x171214: 0xc042a98  jal         func_10AA60
    ctx->pc = 0x171214u;
    SET_GPR_U32(ctx, 31, 0x17121Cu);
    ctx->pc = 0x171218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x171214u;
            // 0x171218: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA60u;
    if (runtime->hasFunction(0x10AA60u)) {
        auto targetFn = runtime->lookupFunction(0x10AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17121Cu; }
        if (ctx->pc != 0x17121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexXyzf_0x10aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17121Cu; }
        if (ctx->pc != 0x17121Cu) { return; }
    }
    ctx->pc = 0x17121Cu;
    // 0x17121c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x17121cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x171220: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x171220u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x171224: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x171224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x171228: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x171228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x17122c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x17122cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x171230: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x171230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x171234: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x171234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x171238: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x171238u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17123c: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x17123cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x171240: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x171244: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x171244u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x171248: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171248u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17124c: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x17124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x171250: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x171250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171254: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171254u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171258: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17125c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x17125cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171260: 0x0  nop
    ctx->pc = 0x171260u;
    // NOP
    // 0x171264: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x171264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x171268: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x17126c: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x17126cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x171270: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x171270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x171274: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x171274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x171278: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x171278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17127c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x17127cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171280: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171280u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171284: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171284u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171288: 0x0  nop
    ctx->pc = 0x171288u;
    // NOP
    // 0x17128c: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x17128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x171290: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x171294: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x171294u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x171298: 0x8ea60004  lw          $a2, 0x4($s5)
    ctx->pc = 0x171298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x17129c: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x17129cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1712a0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x1712a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x1712a4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1712a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1712a8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1712a8u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x1712ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1712acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x1712b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x1712b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x1712b4: 0x0  nop
    ctx->pc = 0x1712b4u;
    // NOP
    // 0x1712b8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1712b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1712bc: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x1712bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x1712c0: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x1712c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x1712c4: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x1712c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x1712c8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1712c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1712cc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1712ccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x1712d0: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x1712d0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x1712d4: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x1712d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x1712d8: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x1712d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1712dc: 0xc042a4c  jal         func_10A930
    ctx->pc = 0x1712DCu;
    SET_GPR_U32(ctx, 31, 0x1712E4u);
    ctx->pc = 0x1712E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1712DCu;
            // 0x1712e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A930u;
    if (runtime->hasFunction(0x10A930u)) {
        auto targetFn = runtime->lookupFunction(0x10A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712E4u; }
        if (ctx->pc != 0x1712E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexUv_0x10a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1712E4u; }
        if (ctx->pc != 0x1712E4u) { return; }
    }
    ctx->pc = 0x1712E4u;
    // 0x1712e4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1712e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1712e8: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x1712e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x1712ec: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1712ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1712f0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1712f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x1712f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1712f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1712f8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x1712f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x1712fc: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x1712fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x171300: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x171300u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x171304: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x171304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x171308: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x171308u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x17130c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x17130cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x171310: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x171310u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x171314: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171314u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x171318: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x171318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x17131c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x17131cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171320: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171320u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x171324: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171324u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171328: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171328u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x17132c: 0x0  nop
    ctx->pc = 0x17132cu;
    // NOP
    // 0x171330: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x171330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x171334: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x171334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x171338: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x171338u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x17133c: 0x8ea40008  lw          $a0, 0x8($s5)
    ctx->pc = 0x17133cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x171340: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x171340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x171344: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x171344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171348: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x171348u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x17134c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x17134cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x171350: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x171350u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171354: 0x0  nop
    ctx->pc = 0x171354u;
    // NOP
    // 0x171358: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x171358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x17135c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17135cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x171360: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x171360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x171364: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x171364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x171368: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x171368u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x17136c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x17136cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x171370: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x171370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x171374: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x171374u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x171378: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x171378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x17137c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x17137cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x171380: 0x0  nop
    ctx->pc = 0x171380u;
    // NOP
    // 0x171384: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x171384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171388: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x171388u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x17138c: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x17138cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x171390: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x171390u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x171394: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x171394u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x171398: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x171398u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x17139c: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x17139cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x1713a0: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x1713a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x1713a4: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x1713a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
    // 0x1713a8: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1713a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1713ac: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1713ACu;
    {
        const bool branch_taken_0x1713ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1713B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1713ACu;
            // 0x1713b0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1713ac) {
            ctx->pc = 0x171210u;
            goto label_171210;
        }
    }
    ctx->pc = 0x1713B4u;
    // 0x1713b4: 0x0  nop
    ctx->pc = 0x1713b4u;
    // NOP
label_1713b8:
    // 0x1713b8: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1713b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1713bc: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x1713bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x1713c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1713c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1713c4: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x1713c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x1713c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1713c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713cc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x1713ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1713d0: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x1713d0u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x1713d4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1713d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1713d8: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x1713D8u;
    SET_GPR_U32(ctx, 31, 0x1713E0u);
    ctx->pc = 0x1713DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1713D8u;
            // 0x1713dc: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713E0u; }
        if (ctx->pc != 0x1713E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpGetTailChain_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713E0u; }
        if (ctx->pc != 0x1713E0u) { return; }
    }
    ctx->pc = 0x1713E0u;
    // 0x1713e0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1713e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713e4: 0xc041ca6  jal         func_107298
    ctx->pc = 0x1713E4u;
    SET_GPR_U32(ctx, 31, 0x1713ECu);
    ctx->pc = 0x1713E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1713E4u;
            // 0x1713e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713ECu; }
        if (ctx->pc != 0x1713ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713ECu; }
        if (ctx->pc != 0x1713ECu) { return; }
    }
    ctx->pc = 0x1713ECu;
    // 0x1713ec: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1713ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713f0: 0xc041ca6  jal         func_107298
    ctx->pc = 0x1713F0u;
    SET_GPR_U32(ctx, 31, 0x1713F8u);
    ctx->pc = 0x1713F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1713F0u;
            // 0x1713f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713F8u; }
        if (ctx->pc != 0x1713F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1713F8u; }
        if (ctx->pc != 0x1713F8u) { return; }
    }
    ctx->pc = 0x1713F8u;
    // 0x1713f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1713f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1713fc: 0xc041ca6  jal         func_107298
    ctx->pc = 0x1713FCu;
    SET_GPR_U32(ctx, 31, 0x171404u);
    ctx->pc = 0x171400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1713FCu;
            // 0x171400: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171404u; }
        if (ctx->pc != 0x171404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x171404u; }
        if (ctx->pc != 0x171404u) { return; }
    }
    ctx->pc = 0x171404u;
    // 0x171404: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x171404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x171408: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x171408u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x17140c: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x17140cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x171410: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x171410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x171414: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x171414u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x171418: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x171418u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x17141c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x17141cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x171420: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x171420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x171424: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x171424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x171428: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x171428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x17142c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x17142cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_171430:
    // 0x171430: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x171430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x171434: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x171434u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x171438: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x171438u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17143c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17143cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x171440: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x171440u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x171444: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x171444u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171448: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x171448u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17144c: 0x3e00008  jr          $ra
    ctx->pc = 0x17144Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17144Cu;
            // 0x171450: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x171210u: goto label_171210;
            case 0x1713B8u: goto label_1713b8;
            case 0x171430u: goto label_171430;
            default: break;
        }
        return;
    }
    ctx->pc = 0x171454u;
}
