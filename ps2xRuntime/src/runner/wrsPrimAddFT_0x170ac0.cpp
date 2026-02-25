#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: wrsPrimAddFT
// Address: 0x170ac0 - 0x170fbc
void wrsPrimAddFT_0x170ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("wrsPrimAddFT_0x170ac0");
#endif

    ctx->pc = 0x170ac0u;

    // 0x170ac0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x170ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x170ac4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x170ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x170ac8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x170ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x170acc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x170accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x170ad0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x170ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x170ad4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x170ad4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ad8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x170ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x170adc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x170adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x170ae0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x170ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x170ae4: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x170ae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170ae8: 0xc042054  jal         func_108150
    ctx->pc = 0x170AE8u;
    SET_GPR_U32(ctx, 31, 0x170AF0u);
    ctx->pc = 0x170AECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AE8u;
            // 0x170aec: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108150u;
    if (runtime->hasFunction(0x108150u)) {
        auto targetFn = runtime->lookupFunction(0x108150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AF0u; }
        if (ctx->pc != 0x170AF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkPacketSize_0x108150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AF0u; }
        if (ctx->pc != 0x170AF0u) { return; }
    }
    ctx->pc = 0x170AF0u;
    // 0x170af0: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x170af0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
    // 0x170af4: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x170af4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170af8: 0xc042ace  jal         func_10AB38
    ctx->pc = 0x170AF8u;
    SET_GPR_U32(ctx, 31, 0x170B00u);
    ctx->pc = 0x170AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170AF8u;
            // 0x170afc: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AB38u;
    if (runtime->hasFunction(0x10AB38u)) {
        auto targetFn = runtime->lookupFunction(0x10AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B00u; }
        if (ctx->pc != 0x170B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpChkNumPtoV_0x10ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B00u; }
        if (ctx->pc != 0x170B00u) { return; }
    }
    ctx->pc = 0x170B00u;
    // 0x170b00: 0xae820014  sw          $v0, 0x14($s4)
    ctx->pc = 0x170b00u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    // 0x170b04: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x170b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x170b08: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x170b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x170b0c: 0xc04e9b2  jal         func_13A6C8
    ctx->pc = 0x170B0Cu;
    SET_GPR_U32(ctx, 31, 0x170B14u);
    ctx->pc = 0x170B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170B0Cu;
            // 0x170b10: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A6C8u;
    if (runtime->hasFunction(0x13A6C8u)) {
        auto targetFn = runtime->lookupFunction(0x13A6C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B14u; }
        if (ctx->pc != 0x170B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memalign_0x13a6c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170B14u; }
        if (ctx->pc != 0x170B14u) { return; }
    }
    ctx->pc = 0x170B14u;
    // 0x170b14: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x170b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x170b18: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x170b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x170b1c: 0x8c267670  lw          $a2, 0x7670($at)
    ctx->pc = 0x170b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x170b20: 0x3c080037  lui         $t0, 0x37
    ctx->pc = 0x170b20u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)55 << 16));
    // 0x170b24: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x170b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x170b28: 0x3c050039  lui         $a1, 0x39
    ctx->pc = 0x170b28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57 << 16));
    // 0x170b2c: 0x2484f980  addiu       $a0, $a0, -0x680
    ctx->pc = 0x170b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965632));
    // 0x170b30: 0x25083970  addiu       $t0, $t0, 0x3970
    ctx->pc = 0x170b30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14704));
    // 0x170b34: 0x24633980  addiu       $v1, $v1, 0x3980
    ctx->pc = 0x170b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14720));
    // 0x170b38: 0x24a5b980  addiu       $a1, $a1, -0x4680
    ctx->pc = 0x170b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949248));
    // 0x170b3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x170b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170b40: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x170b40u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x170b44: 0x38ca0001  xori        $t2, $a2, 0x1
    ctx->pc = 0x170b44u;
    SET_GPR_VEC(ctx, 10, PS2_PXOR(GPR_VEC(ctx, 6), _mm_cvtsi32_si128((int)1u)));
    // 0x170b48: 0xa32c0  sll         $a2, $t2, 11
    ctx->pc = 0x170b48u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
    // 0x170b4c: 0xa4880  sll         $t1, $t2, 2
    ctx->pc = 0x170b4cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x170b50: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x170b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x170b54: 0x1092021  addu        $a0, $t0, $t1
    ctx->pc = 0x170b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x170b58: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x170b58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170b5c: 0x12a2021  addu        $a0, $t1, $t2
    ctx->pc = 0x170b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
    // 0x170b60: 0x43340  sll         $a2, $a0, 13
    ctx->pc = 0x170b60u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
    // 0x170b64: 0xa2040  sll         $a0, $t2, 1
    ctx->pc = 0x170b64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x170b68: 0xa63021  addu        $a2, $a1, $a2
    ctx->pc = 0x170b68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x170b6c: 0x8a2021  addu        $a0, $a0, $t2
    ctx->pc = 0x170b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x170b70: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x170b70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x170b74: 0x42380  sll         $a0, $a0, 14
    ctx->pc = 0x170b74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 14));
    // 0x170b78: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x170b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x170b7c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x170b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170b80: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x170b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x170b84: 0x81840  sll         $v1, $t0, 1
    ctx->pc = 0x170b84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x170b88: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x170b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x170b8c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x170b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x170b90: 0xacf10000  sw          $s1, 0x0($a3)
    ctx->pc = 0x170b90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 17));
    // 0x170b94: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x170b94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x170b98: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x170b98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170b9c: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x170b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170ba0: 0x106000fd  beqz        $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x170BA0u;
    {
        const bool branch_taken_0x170ba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x170BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170BA0u;
            // 0x170ba4: 0xa69821  addu        $s3, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ba0) {
            ctx->pc = 0x170F98u;
            goto label_170f98;
        }
    }
    ctx->pc = 0x170BA8u;
    // 0x170ba8: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x170ba8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x170bac: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x170bacu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)16383u)));
    // 0x170bb0: 0xa7a20070  sh          $v0, 0x70($sp)
    ctx->pc = 0x170bb0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 2));
    // 0x170bb4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x170bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170bb8: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x170bb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170bbc: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x170bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x170bc0: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x170bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x170bc4: 0xa7a20072  sh          $v0, 0x72($sp)
    ctx->pc = 0x170bc4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 2));
    // 0x170bc8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x170bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170bcc: 0x9442000a  lhu         $v0, 0xA($v0)
    ctx->pc = 0x170bccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x170bd0: 0x215bc  dsll32      $v0, $v0, 22
    ctx->pc = 0x170bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 22));
    // 0x170bd4: 0xa7a00076  sh          $zero, 0x76($sp)
    ctx->pc = 0x170bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 0));
    // 0x170bd8: 0x216be  dsrl32      $v0, $v0, 26
    ctx->pc = 0x170bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 26));
    // 0x170bdc: 0xa7a00078  sh          $zero, 0x78($sp)
    ctx->pc = 0x170bdcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 120), (uint16_t)GPR_U32(ctx, 0));
    // 0x170be0: 0xa7a20074  sh          $v0, 0x74($sp)
    ctx->pc = 0x170be0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 2));
    // 0x170be4: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x170be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170be8: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x170be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x170bec: 0xa7a2007a  sh          $v0, 0x7A($sp)
    ctx->pc = 0x170becu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 2));
    // 0x170bf0: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x170bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170bf4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x170bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x170bf8: 0xa7a2007c  sh          $v0, 0x7C($sp)
    ctx->pc = 0x170bf8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 2));
    // 0x170bfc: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x170bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170c00: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x170c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x170c04: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x170c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x170c08: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x170c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x170c0c: 0xa7a2007e  sh          $v0, 0x7E($sp)
    ctx->pc = 0x170c0cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 2));
    // 0x170c10: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x170c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x170c14: 0x9042000e  lbu         $v0, 0xE($v0)
    ctx->pc = 0x170c14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x170c18: 0x2167c  dsll32      $v0, $v0, 25
    ctx->pc = 0x170c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 25));
    // 0x170c1c: 0x2173e  dsrl32      $v0, $v0, 28
    ctx->pc = 0x170c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 28));
    // 0x170c20: 0xa7a20080  sh          $v0, 0x80($sp)
    ctx->pc = 0x170c20u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x170c24: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x170c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170c28: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x170c28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170c2c: 0xc0420f8  jal         func_1083E0
    ctx->pc = 0x170C2Cu;
    SET_GPR_U32(ctx, 31, 0x170C34u);
    ctx->pc = 0x170C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C2Cu;
            // 0x170c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1083E0u;
    if (runtime->hasFunction(0x1083E0u)) {
        auto targetFn = runtime->lookupFunction(0x1083E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C34u; }
        if (ctx->pc != 0x170C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPrimR_0x1083e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C34u; }
        if (ctx->pc != 0x170C34u) { return; }
    }
    ctx->pc = 0x170C34u;
    // 0x170c34: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x170c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170c38: 0x8e86001c  lw          $a2, 0x1C($s4)
    ctx->pc = 0x170c38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170c3c: 0xc0420a6  jal         func_108298
    ctx->pc = 0x170C3Cu;
    SET_GPR_U32(ctx, 31, 0x170C44u);
    ctx->pc = 0x170C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C3Cu;
            // 0x170c40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C44u; }
        if (ctx->pc != 0x170C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C44u; }
        if (ctx->pc != 0x170C44u) { return; }
    }
    ctx->pc = 0x170C44u;
    // 0x170c44: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c48: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x170c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
    // 0x170c4c: 0xc0420a6  jal         func_108298
    ctx->pc = 0x170C4Cu;
    SET_GPR_U32(ctx, 31, 0x170C54u);
    ctx->pc = 0x170C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C4Cu;
            // 0x170c50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C54u; }
        if (ctx->pc != 0x170C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C54u; }
        if (ctx->pc != 0x170C54u) { return; }
    }
    ctx->pc = 0x170C54u;
    // 0x170c54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c58: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x170c58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x170c5c: 0xc0420a6  jal         func_108298
    ctx->pc = 0x170C5Cu;
    SET_GPR_U32(ctx, 31, 0x170C64u);
    ctx->pc = 0x170C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C5Cu;
            // 0x170c60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108298u;
    if (runtime->hasFunction(0x108298u)) {
        auto targetFn = runtime->lookupFunction(0x108298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C64u; }
        if (ctx->pc != 0x170C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpInitPacket_0x108298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C64u; }
        if (ctx->pc != 0x170C64u) { return; }
    }
    ctx->pc = 0x170C64u;
    // 0x170c64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x170c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c68: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x170c68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x170c6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x170c6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170c70: 0xc04247a  jal         func_1091E8
    ctx->pc = 0x170C70u;
    SET_GPR_U32(ctx, 31, 0x170C78u);
    ctx->pc = 0x170C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C70u;
            // 0x170c74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1091E8u;
    if (runtime->hasFunction(0x1091E8u)) {
        auto targetFn = runtime->lookupFunction(0x1091E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C78u; }
        if (ctx->pc != 0x170C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetTexEnv_0x1091e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170C78u; }
        if (ctx->pc != 0x170C78u) { return; }
    }
    ctx->pc = 0x170C78u;
    // 0x170c78: 0x92650034  lbu         $a1, 0x34($s3)
    ctx->pc = 0x170c78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x170c7c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x170c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x170c80: 0x64030004  daddiu      $v1, $zero, 0x4
    ctx->pc = 0x170c80u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
    // 0x170c84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x170c84u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x170c88: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170c88u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170c8c: 0xa2620034  sb          $v0, 0x34($s3)
    ctx->pc = 0x170c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 52), (uint8_t)GPR_U32(ctx, 2));
    // 0x170c90: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x170c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x170c94: 0x8e860024  lw          $a2, 0x24($s4)
    ctx->pc = 0x170c94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x170c98: 0xc04278e  jal         func_109E38
    ctx->pc = 0x170C98u;
    SET_GPR_U32(ctx, 31, 0x170CA0u);
    ctx->pc = 0x170C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170C98u;
            // 0x170c9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x109E38u;
    if (runtime->hasFunction(0x109E38u)) {
        auto targetFn = runtime->lookupFunction(0x109E38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA0u; }
        if (ctx->pc != 0x170CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpSetAlphaEnvFunc_0x109e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170CA0u; }
        if (ctx->pc != 0x170CA0u) { return; }
    }
    ctx->pc = 0x170CA0u;
    // 0x170ca0: 0x3c02fc00  lui         $v0, 0xFC00
    ctx->pc = 0x170ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64512 << 16));
    // 0x170ca4: 0xde240010  ld          $a0, 0x10($s1)
    ctx->pc = 0x170ca4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x170ca8: 0x34437fff  ori         $v1, $v0, 0x7FFF
    ctx->pc = 0x170ca8u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)32767u)));
    // 0x170cac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x170cacu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x170cb0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x170cb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x170cb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x170cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x170cb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x170cb8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)65535u)));
    // 0x170cbc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170cbcu;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170cc0: 0x419b8  dsll        $v1, $a0, 6
    ctx->pc = 0x170cc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 6);
    // 0x170cc4: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x170cc4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x170cc8: 0x31d7e  dsrl32      $v1, $v1, 21
    ctx->pc = 0x170cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 21));
    // 0x170ccc: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x170cccu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)64u)));
    // 0x170cd0: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x170cd0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)2047u)));
    // 0x170cd4: 0x31bfc  dsll32      $v1, $v1, 15
    ctx->pc = 0x170cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 15));
    // 0x170cd8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x170cd8u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x170cdc: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x170cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
    // 0x170ce0: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x170ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170ce4: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x170ce4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170ce8: 0x1020001d  beqz        $at, . + 4 + (0x1D << 2)
    ctx->pc = 0x170CE8u;
    {
        const bool branch_taken_0x170ce8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170CE8u;
            // 0x170cec: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ce8) {
            ctx->pc = 0x170D60u;
            goto label_170d60;
        }
    }
    ctx->pc = 0x170CF0u;
    // 0x170cf0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x170cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170cf4: 0x0  nop
    ctx->pc = 0x170cf4u;
    // NOP
label_170cf8:
    // 0x170cf8: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x170cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170cfc: 0xc042a66  jal         func_10A998
    ctx->pc = 0x170CFCu;
    SET_GPR_U32(ctx, 31, 0x170D04u);
    ctx->pc = 0x170D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170CFCu;
            // 0x170d00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A998u;
    if (runtime->hasFunction(0x10A998u)) {
        auto targetFn = runtime->lookupFunction(0x10A998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D04u; }
        if (ctx->pc != 0x170D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexRgba_0x10a998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D04u; }
        if (ctx->pc != 0x170D04u) { return; }
    }
    ctx->pc = 0x170D04u;
    // 0x170d04: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x170d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x170d08: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x170d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x170d0c: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x170d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x170d10: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x170d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x170d14: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x170d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x170d18: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x170d18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x170d1c: 0xa0620040  sb          $v0, 0x40($v1)
    ctx->pc = 0x170d1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 64), (uint8_t)GPR_U32(ctx, 2));
    // 0x170d20: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x170d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x170d24: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x170d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x170d28: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x170d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x170d2c: 0xa0620041  sb          $v0, 0x41($v1)
    ctx->pc = 0x170d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 65), (uint8_t)GPR_U32(ctx, 2));
    // 0x170d30: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x170d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x170d34: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x170d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x170d38: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x170d38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x170d3c: 0xa0620042  sb          $v0, 0x42($v1)
    ctx->pc = 0x170d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 66), (uint8_t)GPR_U32(ctx, 2));
    // 0x170d40: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x170d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x170d44: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x170d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x170d48: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x170d48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x170d4c: 0xa0620043  sb          $v0, 0x43($v1)
    ctx->pc = 0x170d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 67), (uint8_t)GPR_U32(ctx, 2));
    // 0x170d50: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x170d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x170d54: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x170d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170d58: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x170D58u;
    {
        const bool branch_taken_0x170d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D58u;
            // 0x170d5c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d58) {
            ctx->pc = 0x170CF8u;
            goto label_170cf8;
        }
    }
    ctx->pc = 0x170D60u;
label_170d60:
    // 0x170d60: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x170d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x170d64: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x170d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170d68: 0x1020006d  beqz        $at, . + 4 + (0x6D << 2)
    ctx->pc = 0x170D68u;
    {
        const bool branch_taken_0x170d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x170D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170D68u;
            // 0x170d6c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170d68) {
            ctx->pc = 0x170F20u;
            goto label_170f20;
        }
    }
    ctx->pc = 0x170D70u;
    // 0x170d70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x170d70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170d74: 0x0  nop
    ctx->pc = 0x170d74u;
    // NOP
label_170d78:
    // 0x170d78: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x170d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170d7c: 0xc042a98  jal         func_10AA60
    ctx->pc = 0x170D7Cu;
    SET_GPR_U32(ctx, 31, 0x170D84u);
    ctx->pc = 0x170D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170D7Cu;
            // 0x170d80: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10AA60u;
    if (runtime->hasFunction(0x10AA60u)) {
        auto targetFn = runtime->lookupFunction(0x10AA60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D84u; }
        if (ctx->pc != 0x170D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexXyzf_0x10aa60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170D84u; }
        if (ctx->pc != 0x170D84u) { return; }
    }
    ctx->pc = 0x170D84u;
    // 0x170d84: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x170d84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x170d88: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x170d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x170d8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x170d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x170d90: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x170d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x170d94: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x170d94u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170d98: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x170d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x170d9c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x170d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x170da0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x170da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x170da4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x170da4u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x170da8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x170da8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x170dac: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x170dacu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x170db0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170db0u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170db4: 0xd02021  addu        $a0, $a2, $s0
    ctx->pc = 0x170db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x170db8: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x170db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170dbc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x170dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170dc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170dc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170dc4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x170dc4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170dc8: 0x0  nop
    ctx->pc = 0x170dc8u;
    // NOP
    // 0x170dcc: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x170dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x170dd0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170dd4: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x170dd4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x170dd8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x170dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x170ddc: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x170ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x170de0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x170de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170de4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x170de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170de8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170de8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170dec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x170decu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170df0: 0x0  nop
    ctx->pc = 0x170df0u;
    // NOP
    // 0x170df4: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x170df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x170df8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170dfc: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x170dfcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x170e00: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x170e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x170e04: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x170e04u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x170e08: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x170e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x170e0c: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x170e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170e10: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x170e10u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x170e14: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170e14u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170e18: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x170e18u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170e1c: 0x0  nop
    ctx->pc = 0x170e1cu;
    // NOP
    // 0x170e20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170e20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x170e24: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x170e24u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x170e28: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x170e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x170e2c: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x170e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x170e30: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x170e34: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170e34u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170e38: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x170e38u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x170e3c: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x170e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x170e40: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x170e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x170e44: 0xc042a4c  jal         func_10A930
    ctx->pc = 0x170E44u;
    SET_GPR_U32(ctx, 31, 0x170E4Cu);
    ctx->pc = 0x170E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170E44u;
            // 0x170e48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10A930u;
    if (runtime->hasFunction(0x10A930u)) {
        auto targetFn = runtime->lookupFunction(0x10A930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E4Cu; }
        if (ctx->pc != 0x170E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpIndexUv_0x10a930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170E4Cu; }
        if (ctx->pc != 0x170E4Cu) { return; }
    }
    ctx->pc = 0x170E4Cu;
    // 0x170e4c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x170e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x170e50: 0x3c044180  lui         $a0, 0x4180
    ctx->pc = 0x170e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16768 << 16));
    // 0x170e54: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x170e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x170e58: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x170e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x170e5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x170e5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170e60: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x170e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x170e64: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x170e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x170e68: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x170e68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x170e6c: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x170e6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x170e70: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x170e70u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), _mm_cvtsi32_si128((int)65535u)));
    // 0x170e74: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x170e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x170e78: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x170e78u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)65535u)));
    // 0x170e7c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170e7cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170e80: 0xb02021  addu        $a0, $a1, $s0
    ctx->pc = 0x170e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x170e84: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x170e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170e88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x170e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170e8c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170e8cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170e90: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x170e90u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170e94: 0x0  nop
    ctx->pc = 0x170e94u;
    // NOP
    // 0x170e98: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x170e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x170e9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170ea0: 0xa4440040  sh          $a0, 0x40($v0)
    ctx->pc = 0x170ea0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 64), (uint16_t)GPR_U32(ctx, 4));
    // 0x170ea4: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x170ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x170ea8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x170ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x170eac: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x170eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170eb0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x170eb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x170eb4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170eb4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170eb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x170eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170ebc: 0x0  nop
    ctx->pc = 0x170ebcu;
    // NOP
    // 0x170ec0: 0x24847fff  addiu       $a0, $a0, 0x7FFF
    ctx->pc = 0x170ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32767));
    // 0x170ec4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x170ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x170ec8: 0xa4440042  sh          $a0, 0x42($v0)
    ctx->pc = 0x170ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 4));
    // 0x170ecc: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x170eccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x170ed0: 0xdc440040  ld          $a0, 0x40($v0)
    ctx->pc = 0x170ed0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x170ed4: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x170ed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x170ed8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x170ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x170edc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x170edcu;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x170ee0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x170ee0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x170ee4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x170ee4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x170ee8: 0x0  nop
    ctx->pc = 0x170ee8u;
    // NOP
    // 0x170eec: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x170ef0: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x170ef0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x170ef4: 0x4223c  dsll32      $a0, $a0, 8
    ctx->pc = 0x170ef4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 8));
    // 0x170ef8: 0x4223e  dsrl32      $a0, $a0, 8
    ctx->pc = 0x170ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 8));
    // 0x170efc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x170efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x170f00: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x170f00u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x170f04: 0xfc430040  sd          $v1, 0x40($v0)
    ctx->pc = 0x170f04u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 3));
    // 0x170f08: 0xa0400047  sb          $zero, 0x47($v0)
    ctx->pc = 0x170f08u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 71), (uint8_t)GPR_U32(ctx, 0));
    // 0x170f0c: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x170f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x170f10: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x170f10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x170f14: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x170F14u;
    {
        const bool branch_taken_0x170f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170F14u;
            // 0x170f18: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f14) {
            ctx->pc = 0x170D78u;
            goto label_170d78;
        }
    }
    ctx->pc = 0x170F1Cu;
    // 0x170f1c: 0x0  nop
    ctx->pc = 0x170f1cu;
    // NOP
label_170f20:
    // 0x170f20: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x170f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x170f24: 0x8c237670  lw          $v1, 0x7670($at)
    ctx->pc = 0x170f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x170f28: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x170f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x170f2c: 0x24423940  addiu       $v0, $v0, 0x3940
    ctx->pc = 0x170f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14656));
    // 0x170f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x170f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f34: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x170f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x170f38: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x170f38u;
    SET_GPR_VEC(ctx, 3, PS2_PXOR(GPR_VEC(ctx, 3), _mm_cvtsi32_si128((int)1u)));
    // 0x170f3c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x170f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x170f40: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x170F40u;
    SET_GPR_U32(ctx, 31, 0x170F48u);
    ctx->pc = 0x170F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F40u;
            // 0x170f44: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F48u; }
        if (ctx->pc != 0x170F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpGetTailChain_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F48u; }
        if (ctx->pc != 0x170F48u) { return; }
    }
    ctx->pc = 0x170F48u;
    // 0x170f48: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x170f48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f4c: 0xc041ca6  jal         func_107298
    ctx->pc = 0x170F4Cu;
    SET_GPR_U32(ctx, 31, 0x170F54u);
    ctx->pc = 0x170F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F4Cu;
            // 0x170f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F54u; }
        if (ctx->pc != 0x170F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F54u; }
        if (ctx->pc != 0x170F54u) { return; }
    }
    ctx->pc = 0x170F54u;
    // 0x170f54: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x170f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f58: 0xc041ca6  jal         func_107298
    ctx->pc = 0x170F58u;
    SET_GPR_U32(ctx, 31, 0x170F60u);
    ctx->pc = 0x170F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F58u;
            // 0x170f5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F60u; }
        if (ctx->pc != 0x170F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F60u; }
        if (ctx->pc != 0x170F60u) { return; }
    }
    ctx->pc = 0x170F60u;
    // 0x170f60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x170f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f64: 0xc041ca6  jal         func_107298
    ctx->pc = 0x170F64u;
    SET_GPR_U32(ctx, 31, 0x170F6Cu);
    ctx->pc = 0x170F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170F64u;
            // 0x170f68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107298u;
    if (runtime->hasFunction(0x107298u)) {
        auto targetFn = runtime->lookupFunction(0x107298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F6Cu; }
        if (ctx->pc != 0x170F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceGpAddPacket2_0x107298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170F6Cu; }
        if (ctx->pc != 0x170F6Cu) { return; }
    }
    ctx->pc = 0x170F6Cu;
    // 0x170f6c: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x170f6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x170f70: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x170f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x170f74: 0x8c247670  lw          $a0, 0x7670($at)
    ctx->pc = 0x170f74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 30320)));
    // 0x170f78: 0x24633970  addiu       $v1, $v1, 0x3970
    ctx->pc = 0x170f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14704));
    // 0x170f7c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x170f7cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x170f80: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x170f80u;
    SET_GPR_VEC(ctx, 4, PS2_PXOR(GPR_VEC(ctx, 4), _mm_cvtsi32_si128((int)1u)));
    // 0x170f84: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x170f84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x170f88: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x170f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x170f8c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x170f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x170f90: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x170f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x170f94: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x170f94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_170f98:
    // 0x170f98: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x170f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x170f9c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x170f9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x170fa0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x170fa0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170fa4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x170fa4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170fa8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x170fa8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170fac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x170facu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170fb0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x170fb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170fb4: 0x3e00008  jr          $ra
    ctx->pc = 0x170FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170FB4u;
            // 0x170fb8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170CF8u: goto label_170cf8;
            case 0x170D60u: goto label_170d60;
            case 0x170D78u: goto label_170d78;
            case 0x170F20u: goto label_170f20;
            case 0x170F98u: goto label_170f98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170FBCu;
}
