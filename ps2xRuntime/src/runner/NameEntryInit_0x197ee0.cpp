#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: NameEntryInit
// Address: 0x197ee0 - 0x1980d8
void NameEntryInit_0x197ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("NameEntryInit_0x197ee0");
#endif

    ctx->pc = 0x197ee0u;

    // 0x197ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x197ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x197ee4: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x197ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x197ee8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x197ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x197eec: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x197eecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x197ef0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x197ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x197ef4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x197ef8: 0x8c880070  lw          $t0, 0x70($a0)
    ctx->pc = 0x197ef8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x197efc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x197efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x197f00: 0x8c89007c  lw          $t1, 0x7C($a0)
    ctx->pc = 0x197f00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x197f04: 0x24c61920  addiu       $a2, $a2, 0x1920
    ctx->pc = 0x197f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6432));
    // 0x197f08: 0x24a51924  addiu       $a1, $a1, 0x1924
    ctx->pc = 0x197f08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6436));
    // 0x197f0c: 0x24631928  addiu       $v1, $v1, 0x1928
    ctx->pc = 0x197f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6440));
    // 0x197f10: 0x24421930  addiu       $v0, $v0, 0x1930
    ctx->pc = 0x197f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6448));
    // 0x197f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x197f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f18: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x197f18u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x197f1c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x197f1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x197f20: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x197f20u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x197f24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x197f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x197f28: 0xacc90000  sw          $t1, 0x0($a2)
    ctx->pc = 0x197f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
    // 0x197f2c: 0x8c870070  lw          $a3, 0x70($a0)
    ctx->pc = 0x197f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x197f30: 0x8c880080  lw          $t0, 0x80($a0)
    ctx->pc = 0x197f30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
    // 0x197f34: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x197f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x197f38: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x197f38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x197f3c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x197f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x197f40: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x197f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x197f44: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x197f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
    // 0x197f48: 0x8c860070  lw          $a2, 0x70($a0)
    ctx->pc = 0x197f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x197f4c: 0x8c870078  lw          $a3, 0x78($a0)
    ctx->pc = 0x197f4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
    // 0x197f50: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x197f50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x197f54: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x197f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x197f58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x197f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x197f5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x197f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x197f60: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x197f60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x197f64: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x197f64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x197f68: 0x8c8600a8  lw          $a2, 0xA8($a0)
    ctx->pc = 0x197f68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x197f6c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x197f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x197f70: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x197f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x197f74: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x197f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x197f78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x197f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x197f7c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x197f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x197f80: 0xc066114  jal         func_198450
    ctx->pc = 0x197F80u;
    SET_GPR_U32(ctx, 31, 0x197F88u);
    ctx->pc = 0x197F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F80u;
            // 0x197f84: 0x8c8400a8  lw          $a0, 0xA8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198450u;
    if (runtime->hasFunction(0x198450u)) {
        auto targetFn = runtime->lookupFunction(0x198450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F88u; }
        if (ctx->pc != 0x197F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        isRankin_0x198450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F88u; }
        if (ctx->pc != 0x197F88u) { return; }
    }
    ctx->pc = 0x197F88u;
    // 0x197f88: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x197f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x197f8c: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x197f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x197f90: 0x24841900  addiu       $a0, $a0, 0x1900
    ctx->pc = 0x197f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6400));
    // 0x197f94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x197f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197f98: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x197f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x197f9c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x197f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x197fa0: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x197fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x197fa4: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x197fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x197fa8: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x197fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x197fac: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x197facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x197fb0: 0x4600045  bltz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x197FB0u;
    {
        const bool branch_taken_0x197fb0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x197fb0) {
            ctx->pc = 0x1980C8u;
            goto label_1980c8;
        }
    }
    ctx->pc = 0x197FB8u;
    // 0x197fb8: 0x8e0300a8  lw          $v1, 0xA8($s0)
    ctx->pc = 0x197fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x197fbc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x197fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x197fc0: 0x244218f8  addiu       $v0, $v0, 0x18F8
    ctx->pc = 0x197fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6392));
    // 0x197fc4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x197fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x197fc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x197fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x197fcc: 0xc056f30  jal         func_15BCC0
    ctx->pc = 0x197FCCu;
    SET_GPR_U32(ctx, 31, 0x197FD4u);
    ctx->pc = 0x197FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197FCCu;
            // 0x197fd0: 0x8e040070  lw          $a0, 0x70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BCC0u;
    if (runtime->hasFunction(0x15BCC0u)) {
        auto targetFn = runtime->lookupFunction(0x15BCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FD4u; }
        if (ctx->pc != 0x197FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        setNameEntry_0x15bcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FD4u; }
        if (ctx->pc != 0x197FD4u) { return; }
    }
    ctx->pc = 0x197FD4u;
    // 0x197fd4: 0x8e0d0070  lw          $t5, 0x70($s0)
    ctx->pc = 0x197fd4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x197fd8: 0x3c0b0043  lui         $t3, 0x43
    ctx->pc = 0x197fd8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)67 << 16));
    // 0x197fdc: 0x3c090043  lui         $t1, 0x43
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)67 << 16));
    // 0x197fe0: 0x3c080043  lui         $t0, 0x43
    ctx->pc = 0x197fe0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)67 << 16));
    // 0x197fe4: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x197fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x197fe8: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x197fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x197fec: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x197fecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x197ff0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x197ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x197ff4: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x197ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x197ff8: 0x256b1910  addiu       $t3, $t3, 0x1910
    ctx->pc = 0x197ff8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 6416));
    // 0x197ffc: 0x25291908  addiu       $t1, $t1, 0x1908
    ctx->pc = 0x197ffcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 6408));
    // 0x198000: 0x240c0bb8  addiu       $t4, $zero, 0xBB8
    ctx->pc = 0x198000u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 3000));
    // 0x198004: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x198004u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x198008: 0x250818f0  addiu       $t0, $t0, 0x18F0
    ctx->pc = 0x198008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6384));
    // 0x19800c: 0x16d5821  addu        $t3, $t3, $t5
    ctx->pc = 0x19800cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 13)));
    // 0x198010: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x198010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x198014: 0xad600000  sw          $zero, 0x0($t3)
    ctx->pc = 0x198014u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 0));
    // 0x198018: 0x24e71934  addiu       $a3, $a3, 0x1934
    ctx->pc = 0x198018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 6452));
    // 0x19801c: 0x8e0b0070  lw          $t3, 0x70($s0)
    ctx->pc = 0x19801cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x198020: 0x240a0041  addiu       $t2, $zero, 0x41
    ctx->pc = 0x198020u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x198024: 0x24c61935  addiu       $a2, $a2, 0x1935
    ctx->pc = 0x198024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6453));
    // 0x198028: 0x24a51936  addiu       $a1, $a1, 0x1936
    ctx->pc = 0x198028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6454));
    // 0x19802c: 0x24841937  addiu       $a0, $a0, 0x1937
    ctx->pc = 0x19802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6455));
    // 0x198030: 0x24631920  addiu       $v1, $v1, 0x1920
    ctx->pc = 0x198030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6432));
    // 0x198034: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x198034u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x198038: 0x12b4821  addu        $t1, $t1, $t3
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x19803c: 0xad2c0000  sw          $t4, 0x0($t1)
    ctx->pc = 0x19803cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 12));
    // 0x198040: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x198040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x198044: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x198044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x198048: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x198048u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19804c: 0x8e090070  lw          $t1, 0x70($s0)
    ctx->pc = 0x19804cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x198050: 0x94040  sll         $t0, $t1, 1
    ctx->pc = 0x198050u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x198054: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x198054u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
    // 0x198058: 0x840c0  sll         $t0, $t0, 3
    ctx->pc = 0x198058u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x19805c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19805cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x198060: 0xa0ea0000  sb          $t2, 0x0($a3)
    ctx->pc = 0x198060u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 10));
    // 0x198064: 0x8e080070  lw          $t0, 0x70($s0)
    ctx->pc = 0x198064u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x198068: 0x83840  sll         $a3, $t0, 1
    ctx->pc = 0x198068u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x19806c: 0xe83821  addu        $a3, $a3, $t0
    ctx->pc = 0x19806cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x198070: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x198070u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x198074: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x198074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x198078: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x198078u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19807c: 0x8e070070  lw          $a3, 0x70($s0)
    ctx->pc = 0x19807cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x198080: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x198080u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x198084: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x198084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x198088: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x198088u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x19808c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x198090: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x198090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x198094: 0x8e050070  lw          $a1, 0x70($s0)
    ctx->pc = 0x198094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x198098: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x198098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x19809c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x19809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1980a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1980a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1980a4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1980a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1980a8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1980a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1980ac: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x1980acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1980b0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1980b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1980b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1980b8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1980b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1980bc: 0xc06604c  jal         func_198130
    ctx->pc = 0x1980BCu;
    SET_GPR_U32(ctx, 31, 0x1980C4u);
    ctx->pc = 0x1980C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1980BCu;
            // 0x1980c0: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198130u;
    if (runtime->hasFunction(0x198130u)) {
        auto targetFn = runtime->lookupFunction(0x198130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1980C4u; }
        if (ctx->pc != 0x1980C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RankingInsert_0x198130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1980C4u; }
        if (ctx->pc != 0x1980C4u) { return; }
    }
    ctx->pc = 0x1980C4u;
    // 0x1980c4: 0x0  nop
    ctx->pc = 0x1980c4u;
    // NOP
label_1980c8:
    // 0x1980c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1980c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1980cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1980ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1980d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1980D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1980D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980D0u;
            // 0x1980d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1980C8u: goto label_1980c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1980D8u;
}
