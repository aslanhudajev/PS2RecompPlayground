#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef _DEBUG
#include "ps2_log.h"
#endif

// Function: inflate_flush
// Address: 0x1f18e0 - 0x1f1a6c
void inflate_flush_0x1f18e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef _DEBUG
    PS_LOG_ENTRY("inflate_flush_0x1f18e0");
#endif

    ctx->pc = 0x1f18e0u;

label_1f18e0:
    // 0x1f18e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f18e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f18e4:
    // 0x1f18e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f18e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f18e8:
    // 0x1f18e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f18e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f18ec:
    // 0x1f18ec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f18ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f18f0:
    // 0x1f18f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f18f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1f18f4:
    // 0x1f18f4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f18f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1f18f8:
    // 0x1f18f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f18f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_1f18fc:
    // 0x1f18fc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f18fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1f1900:
    // 0x1f1900: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f1900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1904:
    // 0x1f1904: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f1904u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f1908:
    // 0x1f1908: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1f1908u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f190c:
    // 0x1f190c: 0x8e740010  lw          $s4, 0x10($s3)
    ctx->pc = 0x1f190cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1f1910:
    // 0x1f1910: 0x8e510034  lw          $s1, 0x34($s2)
    ctx->pc = 0x1f1910u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_1f1914:
    // 0x1f1914: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1f1914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1f1918:
    // 0x1f1918: 0x51182b  sltu        $v1, $v0, $s1
    ctx->pc = 0x1f1918u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_1f191c:
    // 0x1f191c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1f1920:
    if (ctx->pc == 0x1F1920u) {
        ctx->pc = 0x1F1920u;
            // 0x1f1920: 0x518023  subu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1F1924u;
        goto label_1f1924;
    }
    ctx->pc = 0x1F191Cu;
    {
        const bool branch_taken_0x1f191c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F191Cu;
            // 0x1f1920: 0x518023  subu        $s0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f191c) {
            ctx->pc = 0x1F192Cu;
            goto label_1f192c;
        }
    }
    ctx->pc = 0x1F1924u;
label_1f1924:
    // 0x1f1924: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1f1924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1f1928:
    // 0x1f1928: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x1f1928u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f192c:
    // 0x1f192c: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1f192cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1f1930:
    // 0x1f1930: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1f1930u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1f1934:
    // 0x1f1934: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1f1934u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)0u)));
label_1f1938:
    // 0x1f1938: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1f1938u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1f193c:
    // 0x1f193c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1f1940:
    if (ctx->pc == 0x1F1940u) {
        ctx->pc = 0x1F1940u;
            // 0x1f1940: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x1F1944u;
        goto label_1f1944;
    }
    ctx->pc = 0x1F193Cu;
    {
        const bool branch_taken_0x1f193c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F193Cu;
            // 0x1f1940: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f193c) {
            ctx->pc = 0x1F194Cu;
            goto label_1f194c;
        }
    }
    ctx->pc = 0x1F1944u;
label_1f1944:
    // 0x1f1944: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x1f1944u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 21), GPR_VEC(ctx, 2)));
label_1f1948:
    // 0x1f1948: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x1f1948u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_1f194c:
    // 0x1f194c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1f194cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1f1950:
    // 0x1f1950: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1f1950u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f1954:
    // 0x1f1954: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1f1954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_1f1958:
    // 0x1f1958: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1f1958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_1f195c:
    // 0x1f195c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1f195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1f1960:
    // 0x1f1960: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x1f1960u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1f1964:
    // 0x1f1964: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f1964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f1968:
    // 0x1f1968: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x1f1968u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_1f196c:
    // 0x1f196c: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1f196cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1f1970:
    // 0x1f1970: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f1974:
    if (ctx->pc == 0x1F1974u) {
        ctx->pc = 0x1F1974u;
            // 0x1f1974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1978u;
        goto label_1f1978;
    }
    ctx->pc = 0x1F1970u;
    {
        const bool branch_taken_0x1f1970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1970u;
            // 0x1f1974: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1970) {
            ctx->pc = 0x1F198Cu;
            goto label_1f198c;
        }
    }
    ctx->pc = 0x1F1978u;
label_1f1978:
    // 0x1f1978: 0xde440040  ld          $a0, 0x40($s2)
    ctx->pc = 0x1f1978u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_1f197c:
    // 0x1f197c: 0x40f809  jalr        $v0
label_1f1980:
    if (ctx->pc == 0x1F1980u) {
        ctx->pc = 0x1F1980u;
            // 0x1f1980: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1984u;
        goto label_1f1984;
    }
    ctx->pc = 0x1F197Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1984u);
        ctx->pc = 0x1F1980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F197Cu;
            // 0x1f1980: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F18E0u: goto label_1f18e0;
            case 0x1F18E4u: goto label_1f18e4;
            case 0x1F18E8u: goto label_1f18e8;
            case 0x1F18ECu: goto label_1f18ec;
            case 0x1F18F0u: goto label_1f18f0;
            case 0x1F18F4u: goto label_1f18f4;
            case 0x1F18F8u: goto label_1f18f8;
            case 0x1F18FCu: goto label_1f18fc;
            case 0x1F1900u: goto label_1f1900;
            case 0x1F1904u: goto label_1f1904;
            case 0x1F1908u: goto label_1f1908;
            case 0x1F190Cu: goto label_1f190c;
            case 0x1F1910u: goto label_1f1910;
            case 0x1F1914u: goto label_1f1914;
            case 0x1F1918u: goto label_1f1918;
            case 0x1F191Cu: goto label_1f191c;
            case 0x1F1920u: goto label_1f1920;
            case 0x1F1924u: goto label_1f1924;
            case 0x1F1928u: goto label_1f1928;
            case 0x1F192Cu: goto label_1f192c;
            case 0x1F1930u: goto label_1f1930;
            case 0x1F1934u: goto label_1f1934;
            case 0x1F1938u: goto label_1f1938;
            case 0x1F193Cu: goto label_1f193c;
            case 0x1F1940u: goto label_1f1940;
            case 0x1F1944u: goto label_1f1944;
            case 0x1F1948u: goto label_1f1948;
            case 0x1F194Cu: goto label_1f194c;
            case 0x1F1950u: goto label_1f1950;
            case 0x1F1954u: goto label_1f1954;
            case 0x1F1958u: goto label_1f1958;
            case 0x1F195Cu: goto label_1f195c;
            case 0x1F1960u: goto label_1f1960;
            case 0x1F1964u: goto label_1f1964;
            case 0x1F1968u: goto label_1f1968;
            case 0x1F196Cu: goto label_1f196c;
            case 0x1F1970u: goto label_1f1970;
            case 0x1F1974u: goto label_1f1974;
            case 0x1F1978u: goto label_1f1978;
            case 0x1F197Cu: goto label_1f197c;
            case 0x1F1980u: goto label_1f1980;
            case 0x1F1984u: goto label_1f1984;
            case 0x1F1988u: goto label_1f1988;
            case 0x1F198Cu: goto label_1f198c;
            case 0x1F1990u: goto label_1f1990;
            case 0x1F1994u: goto label_1f1994;
            case 0x1F1998u: goto label_1f1998;
            case 0x1F199Cu: goto label_1f199c;
            case 0x1F19A0u: goto label_1f19a0;
            case 0x1F19A4u: goto label_1f19a4;
            case 0x1F19A8u: goto label_1f19a8;
            case 0x1F19ACu: goto label_1f19ac;
            case 0x1F19B0u: goto label_1f19b0;
            case 0x1F19B4u: goto label_1f19b4;
            case 0x1F19B8u: goto label_1f19b8;
            case 0x1F19BCu: goto label_1f19bc;
            case 0x1F19C0u: goto label_1f19c0;
            case 0x1F19C4u: goto label_1f19c4;
            case 0x1F19C8u: goto label_1f19c8;
            case 0x1F19CCu: goto label_1f19cc;
            case 0x1F19D0u: goto label_1f19d0;
            case 0x1F19D4u: goto label_1f19d4;
            case 0x1F19D8u: goto label_1f19d8;
            case 0x1F19DCu: goto label_1f19dc;
            case 0x1F19E0u: goto label_1f19e0;
            case 0x1F19E4u: goto label_1f19e4;
            case 0x1F19E8u: goto label_1f19e8;
            case 0x1F19ECu: goto label_1f19ec;
            case 0x1F19F0u: goto label_1f19f0;
            case 0x1F19F4u: goto label_1f19f4;
            case 0x1F19F8u: goto label_1f19f8;
            case 0x1F19FCu: goto label_1f19fc;
            case 0x1F1A00u: goto label_1f1a00;
            case 0x1F1A04u: goto label_1f1a04;
            case 0x1F1A08u: goto label_1f1a08;
            case 0x1F1A0Cu: goto label_1f1a0c;
            case 0x1F1A10u: goto label_1f1a10;
            case 0x1F1A14u: goto label_1f1a14;
            case 0x1F1A18u: goto label_1f1a18;
            case 0x1F1A1Cu: goto label_1f1a1c;
            case 0x1F1A20u: goto label_1f1a20;
            case 0x1F1A24u: goto label_1f1a24;
            case 0x1F1A28u: goto label_1f1a28;
            case 0x1F1A2Cu: goto label_1f1a2c;
            case 0x1F1A30u: goto label_1f1a30;
            case 0x1F1A34u: goto label_1f1a34;
            case 0x1F1A38u: goto label_1f1a38;
            case 0x1F1A3Cu: goto label_1f1a3c;
            case 0x1F1A40u: goto label_1f1a40;
            case 0x1F1A44u: goto label_1f1a44;
            case 0x1F1A48u: goto label_1f1a48;
            case 0x1F1A4Cu: goto label_1f1a4c;
            case 0x1F1A50u: goto label_1f1a50;
            case 0x1F1A54u: goto label_1f1a54;
            case 0x1F1A58u: goto label_1f1a58;
            case 0x1F1A5Cu: goto label_1f1a5c;
            case 0x1F1A60u: goto label_1f1a60;
            case 0x1F1A64u: goto label_1f1a64;
            case 0x1F1A68u: goto label_1f1a68;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1984u; }
            if (ctx->pc != 0x1F1984u) { return; }
        }
    }
    ctx->pc = 0x1F1984u;
label_1f1984:
    // 0x1f1984: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x1f1984u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_1f1988:
    // 0x1f1988: 0xfe620038  sd          $v0, 0x38($s3)
    ctx->pc = 0x1f1988u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 2));
label_1f198c:
    // 0x1f198c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f198cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1990:
    // 0x1f1990: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1994:
    // 0x1f1994: 0xc04ed22  jal         func_13B488
label_1f1998:
    if (ctx->pc == 0x1F1998u) {
        ctx->pc = 0x1F1998u;
            // 0x1f1998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F199Cu;
        goto label_1f199c;
    }
    ctx->pc = 0x1F1994u;
    SET_GPR_U32(ctx, 31, 0x1F199Cu);
    ctx->pc = 0x1F1998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1994u;
            // 0x1f1998: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F199Cu; }
        if (ctx->pc != 0x1F199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F199Cu; }
        if (ctx->pc != 0x1F199Cu) { return; }
    }
    ctx->pc = 0x1F199Cu;
label_1f199c:
    // 0x1f199c: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1f199cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1f19a0:
    // 0x1f19a0: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1f19a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1f19a4:
    // 0x1f19a4: 0x16230025  bne         $s1, $v1, . + 4 + (0x25 << 2)
label_1f19a8:
    if (ctx->pc == 0x1F19A8u) {
        ctx->pc = 0x1F19A8u;
            // 0x1f19a8: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x1F19ACu;
        goto label_1f19ac;
    }
    ctx->pc = 0x1F19A4u;
    {
        const bool branch_taken_0x1f19a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F19A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F19A4u;
            // 0x1f19a8: 0x290a021  addu        $s4, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19a4) {
            ctx->pc = 0x1F1A3Cu;
            goto label_1f1a3c;
        }
    }
    ctx->pc = 0x1F19ACu;
label_1f19ac:
    // 0x1f19ac: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1f19acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1f19b0:
    // 0x1f19b0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_1f19b4:
    if (ctx->pc == 0x1F19B4u) {
        ctx->pc = 0x1F19B4u;
            // 0x1f19b4: 0x8e51002c  lw          $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->pc = 0x1F19B8u;
        goto label_1f19b8;
    }
    ctx->pc = 0x1F19B0u;
    {
        const bool branch_taken_0x1f19b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F19B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F19B0u;
            // 0x1f19b4: 0x8e51002c  lw          $s1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19b0) {
            ctx->pc = 0x1F19C0u;
            goto label_1f19c0;
        }
    }
    ctx->pc = 0x1F19B8u;
label_1f19b8:
    // 0x1f19b8: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x1f19b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
label_1f19bc:
    // 0x1f19bc: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1f19bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1f19c0:
    // 0x1f19c0: 0x518023  subu        $s0, $v0, $s1
    ctx->pc = 0x1f19c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1f19c4:
    // 0x1f19c4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x1f19c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1f19c8:
    // 0x1f19c8: 0x70102b  sltu        $v0, $v1, $s0
    ctx->pc = 0x1f19c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_1f19cc:
    // 0x1f19cc: 0x38420000  xori        $v0, $v0, 0x0
    ctx->pc = 0x1f19ccu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), _mm_cvtsi32_si128((int)0u)));
label_1f19d0:
    // 0x1f19d0: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1f19d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1f19d4:
    // 0x1f19d4: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_1f19d8:
    if (ctx->pc == 0x1F19D8u) {
        ctx->pc = 0x1F19D8u;
            // 0x1f19d8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x1F19DCu;
        goto label_1f19dc;
    }
    ctx->pc = 0x1F19D4u;
    {
        const bool branch_taken_0x1f19d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F19D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F19D4u;
            // 0x1f19d8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f19d4) {
            ctx->pc = 0x1F19E4u;
            goto label_1f19e4;
        }
    }
    ctx->pc = 0x1F19DCu;
label_1f19dc:
    // 0x1f19dc: 0x2a21026  xor         $v0, $s5, $v0
    ctx->pc = 0x1f19dcu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 21), GPR_VEC(ctx, 2)));
label_1f19e0:
    // 0x1f19e0: 0x2a80a  movz        $s5, $zero, $v0
    ctx->pc = 0x1f19e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 0));
label_1f19e4:
    // 0x1f19e4: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x1f19e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1f19e8:
    // 0x1f19e8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x1f19e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1f19ec:
    // 0x1f19ec: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1f19ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
label_1f19f0:
    // 0x1f19f0: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x1f19f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_1f19f4:
    // 0x1f19f4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1f19f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_1f19f8:
    // 0x1f19f8: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x1f19f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
label_1f19fc:
    // 0x1f19fc: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1f19fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1f1a00:
    // 0x1f1a00: 0xfe620018  sd          $v0, 0x18($s3)
    ctx->pc = 0x1f1a00u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 24), GPR_U64(ctx, 2));
label_1f1a04:
    // 0x1f1a04: 0x8e42003c  lw          $v0, 0x3C($s2)
    ctx->pc = 0x1f1a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
label_1f1a08:
    // 0x1f1a08: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1f1a0c:
    if (ctx->pc == 0x1F1A0Cu) {
        ctx->pc = 0x1F1A0Cu;
            // 0x1f1a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A10u;
        goto label_1f1a10;
    }
    ctx->pc = 0x1F1A08u;
    {
        const bool branch_taken_0x1f1a08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A08u;
            // 0x1f1a0c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1a08) {
            ctx->pc = 0x1F1A24u;
            goto label_1f1a24;
        }
    }
    ctx->pc = 0x1F1A10u;
label_1f1a10:
    // 0x1f1a10: 0xde440040  ld          $a0, 0x40($s2)
    ctx->pc = 0x1f1a10u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 64)));
label_1f1a14:
    // 0x1f1a14: 0x40f809  jalr        $v0
label_1f1a18:
    if (ctx->pc == 0x1F1A18u) {
        ctx->pc = 0x1F1A18u;
            // 0x1f1a18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A1Cu;
        goto label_1f1a1c;
    }
    ctx->pc = 0x1F1A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F1A1Cu);
        ctx->pc = 0x1F1A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A14u;
            // 0x1f1a18: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F18E0u: goto label_1f18e0;
            case 0x1F18E4u: goto label_1f18e4;
            case 0x1F18E8u: goto label_1f18e8;
            case 0x1F18ECu: goto label_1f18ec;
            case 0x1F18F0u: goto label_1f18f0;
            case 0x1F18F4u: goto label_1f18f4;
            case 0x1F18F8u: goto label_1f18f8;
            case 0x1F18FCu: goto label_1f18fc;
            case 0x1F1900u: goto label_1f1900;
            case 0x1F1904u: goto label_1f1904;
            case 0x1F1908u: goto label_1f1908;
            case 0x1F190Cu: goto label_1f190c;
            case 0x1F1910u: goto label_1f1910;
            case 0x1F1914u: goto label_1f1914;
            case 0x1F1918u: goto label_1f1918;
            case 0x1F191Cu: goto label_1f191c;
            case 0x1F1920u: goto label_1f1920;
            case 0x1F1924u: goto label_1f1924;
            case 0x1F1928u: goto label_1f1928;
            case 0x1F192Cu: goto label_1f192c;
            case 0x1F1930u: goto label_1f1930;
            case 0x1F1934u: goto label_1f1934;
            case 0x1F1938u: goto label_1f1938;
            case 0x1F193Cu: goto label_1f193c;
            case 0x1F1940u: goto label_1f1940;
            case 0x1F1944u: goto label_1f1944;
            case 0x1F1948u: goto label_1f1948;
            case 0x1F194Cu: goto label_1f194c;
            case 0x1F1950u: goto label_1f1950;
            case 0x1F1954u: goto label_1f1954;
            case 0x1F1958u: goto label_1f1958;
            case 0x1F195Cu: goto label_1f195c;
            case 0x1F1960u: goto label_1f1960;
            case 0x1F1964u: goto label_1f1964;
            case 0x1F1968u: goto label_1f1968;
            case 0x1F196Cu: goto label_1f196c;
            case 0x1F1970u: goto label_1f1970;
            case 0x1F1974u: goto label_1f1974;
            case 0x1F1978u: goto label_1f1978;
            case 0x1F197Cu: goto label_1f197c;
            case 0x1F1980u: goto label_1f1980;
            case 0x1F1984u: goto label_1f1984;
            case 0x1F1988u: goto label_1f1988;
            case 0x1F198Cu: goto label_1f198c;
            case 0x1F1990u: goto label_1f1990;
            case 0x1F1994u: goto label_1f1994;
            case 0x1F1998u: goto label_1f1998;
            case 0x1F199Cu: goto label_1f199c;
            case 0x1F19A0u: goto label_1f19a0;
            case 0x1F19A4u: goto label_1f19a4;
            case 0x1F19A8u: goto label_1f19a8;
            case 0x1F19ACu: goto label_1f19ac;
            case 0x1F19B0u: goto label_1f19b0;
            case 0x1F19B4u: goto label_1f19b4;
            case 0x1F19B8u: goto label_1f19b8;
            case 0x1F19BCu: goto label_1f19bc;
            case 0x1F19C0u: goto label_1f19c0;
            case 0x1F19C4u: goto label_1f19c4;
            case 0x1F19C8u: goto label_1f19c8;
            case 0x1F19CCu: goto label_1f19cc;
            case 0x1F19D0u: goto label_1f19d0;
            case 0x1F19D4u: goto label_1f19d4;
            case 0x1F19D8u: goto label_1f19d8;
            case 0x1F19DCu: goto label_1f19dc;
            case 0x1F19E0u: goto label_1f19e0;
            case 0x1F19E4u: goto label_1f19e4;
            case 0x1F19E8u: goto label_1f19e8;
            case 0x1F19ECu: goto label_1f19ec;
            case 0x1F19F0u: goto label_1f19f0;
            case 0x1F19F4u: goto label_1f19f4;
            case 0x1F19F8u: goto label_1f19f8;
            case 0x1F19FCu: goto label_1f19fc;
            case 0x1F1A00u: goto label_1f1a00;
            case 0x1F1A04u: goto label_1f1a04;
            case 0x1F1A08u: goto label_1f1a08;
            case 0x1F1A0Cu: goto label_1f1a0c;
            case 0x1F1A10u: goto label_1f1a10;
            case 0x1F1A14u: goto label_1f1a14;
            case 0x1F1A18u: goto label_1f1a18;
            case 0x1F1A1Cu: goto label_1f1a1c;
            case 0x1F1A20u: goto label_1f1a20;
            case 0x1F1A24u: goto label_1f1a24;
            case 0x1F1A28u: goto label_1f1a28;
            case 0x1F1A2Cu: goto label_1f1a2c;
            case 0x1F1A30u: goto label_1f1a30;
            case 0x1F1A34u: goto label_1f1a34;
            case 0x1F1A38u: goto label_1f1a38;
            case 0x1F1A3Cu: goto label_1f1a3c;
            case 0x1F1A40u: goto label_1f1a40;
            case 0x1F1A44u: goto label_1f1a44;
            case 0x1F1A48u: goto label_1f1a48;
            case 0x1F1A4Cu: goto label_1f1a4c;
            case 0x1F1A50u: goto label_1f1a50;
            case 0x1F1A54u: goto label_1f1a54;
            case 0x1F1A58u: goto label_1f1a58;
            case 0x1F1A5Cu: goto label_1f1a5c;
            case 0x1F1A60u: goto label_1f1a60;
            case 0x1F1A64u: goto label_1f1a64;
            case 0x1F1A68u: goto label_1f1a68;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A1Cu; }
            if (ctx->pc != 0x1F1A1Cu) { return; }
        }
    }
    ctx->pc = 0x1F1A1Cu;
label_1f1a1c:
    // 0x1f1a1c: 0xfe420040  sd          $v0, 0x40($s2)
    ctx->pc = 0x1f1a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 64), GPR_U64(ctx, 2));
label_1f1a20:
    // 0x1f1a20: 0xfe620038  sd          $v0, 0x38($s3)
    ctx->pc = 0x1f1a20u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 2));
label_1f1a24:
    // 0x1f1a24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1f1a24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a28:
    // 0x1f1a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a2c:
    // 0x1f1a2c: 0xc04ed22  jal         func_13B488
label_1f1a30:
    if (ctx->pc == 0x1F1A30u) {
        ctx->pc = 0x1F1A30u;
            // 0x1f1a30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F1A34u;
        goto label_1f1a34;
    }
    ctx->pc = 0x1F1A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F1A34u);
    ctx->pc = 0x1F1A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A2Cu;
            // 0x1f1a30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B488u;
    if (runtime->hasFunction(0x13B488u)) {
        auto targetFn = runtime->lookupFunction(0x13B488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A34u; }
        if (ctx->pc != 0x1F1A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x13b488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1A34u; }
        if (ctx->pc != 0x1F1A34u) { return; }
    }
    ctx->pc = 0x1F1A34u;
label_1f1a34:
    // 0x1f1a34: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x1f1a34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_1f1a38:
    // 0x1f1a38: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x1f1a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_1f1a3c:
    // 0x1f1a3c: 0xae740010  sw          $s4, 0x10($s3)
    ctx->pc = 0x1f1a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 20));
label_1f1a40:
    // 0x1f1a40: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x1f1a40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
label_1f1a44:
    // 0x1f1a44: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f1a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f1a48:
    // 0x1f1a48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f1a48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f1a4c:
    // 0x1f1a4c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f1a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f1a50:
    // 0x1f1a50: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f1a50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f1a54:
    // 0x1f1a54: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f1a54u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f1a58:
    // 0x1f1a58: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f1a58u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1f1a5c:
    // 0x1f1a5c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f1a5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1f1a60:
    // 0x1f1a60: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f1a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1f1a64:
    // 0x1f1a64: 0x3e00008  jr          $ra
label_1f1a68:
    if (ctx->pc == 0x1F1A68u) {
        ctx->pc = 0x1F1A68u;
            // 0x1f1a68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1F1A6Cu;
        goto label_fallthrough_0x1f1a64;
    }
    ctx->pc = 0x1F1A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1A64u;
            // 0x1f1a68: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F18E0u: goto label_1f18e0;
            case 0x1F18E4u: goto label_1f18e4;
            case 0x1F18E8u: goto label_1f18e8;
            case 0x1F18ECu: goto label_1f18ec;
            case 0x1F18F0u: goto label_1f18f0;
            case 0x1F18F4u: goto label_1f18f4;
            case 0x1F18F8u: goto label_1f18f8;
            case 0x1F18FCu: goto label_1f18fc;
            case 0x1F1900u: goto label_1f1900;
            case 0x1F1904u: goto label_1f1904;
            case 0x1F1908u: goto label_1f1908;
            case 0x1F190Cu: goto label_1f190c;
            case 0x1F1910u: goto label_1f1910;
            case 0x1F1914u: goto label_1f1914;
            case 0x1F1918u: goto label_1f1918;
            case 0x1F191Cu: goto label_1f191c;
            case 0x1F1920u: goto label_1f1920;
            case 0x1F1924u: goto label_1f1924;
            case 0x1F1928u: goto label_1f1928;
            case 0x1F192Cu: goto label_1f192c;
            case 0x1F1930u: goto label_1f1930;
            case 0x1F1934u: goto label_1f1934;
            case 0x1F1938u: goto label_1f1938;
            case 0x1F193Cu: goto label_1f193c;
            case 0x1F1940u: goto label_1f1940;
            case 0x1F1944u: goto label_1f1944;
            case 0x1F1948u: goto label_1f1948;
            case 0x1F194Cu: goto label_1f194c;
            case 0x1F1950u: goto label_1f1950;
            case 0x1F1954u: goto label_1f1954;
            case 0x1F1958u: goto label_1f1958;
            case 0x1F195Cu: goto label_1f195c;
            case 0x1F1960u: goto label_1f1960;
            case 0x1F1964u: goto label_1f1964;
            case 0x1F1968u: goto label_1f1968;
            case 0x1F196Cu: goto label_1f196c;
            case 0x1F1970u: goto label_1f1970;
            case 0x1F1974u: goto label_1f1974;
            case 0x1F1978u: goto label_1f1978;
            case 0x1F197Cu: goto label_1f197c;
            case 0x1F1980u: goto label_1f1980;
            case 0x1F1984u: goto label_1f1984;
            case 0x1F1988u: goto label_1f1988;
            case 0x1F198Cu: goto label_1f198c;
            case 0x1F1990u: goto label_1f1990;
            case 0x1F1994u: goto label_1f1994;
            case 0x1F1998u: goto label_1f1998;
            case 0x1F199Cu: goto label_1f199c;
            case 0x1F19A0u: goto label_1f19a0;
            case 0x1F19A4u: goto label_1f19a4;
            case 0x1F19A8u: goto label_1f19a8;
            case 0x1F19ACu: goto label_1f19ac;
            case 0x1F19B0u: goto label_1f19b0;
            case 0x1F19B4u: goto label_1f19b4;
            case 0x1F19B8u: goto label_1f19b8;
            case 0x1F19BCu: goto label_1f19bc;
            case 0x1F19C0u: goto label_1f19c0;
            case 0x1F19C4u: goto label_1f19c4;
            case 0x1F19C8u: goto label_1f19c8;
            case 0x1F19CCu: goto label_1f19cc;
            case 0x1F19D0u: goto label_1f19d0;
            case 0x1F19D4u: goto label_1f19d4;
            case 0x1F19D8u: goto label_1f19d8;
            case 0x1F19DCu: goto label_1f19dc;
            case 0x1F19E0u: goto label_1f19e0;
            case 0x1F19E4u: goto label_1f19e4;
            case 0x1F19E8u: goto label_1f19e8;
            case 0x1F19ECu: goto label_1f19ec;
            case 0x1F19F0u: goto label_1f19f0;
            case 0x1F19F4u: goto label_1f19f4;
            case 0x1F19F8u: goto label_1f19f8;
            case 0x1F19FCu: goto label_1f19fc;
            case 0x1F1A00u: goto label_1f1a00;
            case 0x1F1A04u: goto label_1f1a04;
            case 0x1F1A08u: goto label_1f1a08;
            case 0x1F1A0Cu: goto label_1f1a0c;
            case 0x1F1A10u: goto label_1f1a10;
            case 0x1F1A14u: goto label_1f1a14;
            case 0x1F1A18u: goto label_1f1a18;
            case 0x1F1A1Cu: goto label_1f1a1c;
            case 0x1F1A20u: goto label_1f1a20;
            case 0x1F1A24u: goto label_1f1a24;
            case 0x1F1A28u: goto label_1f1a28;
            case 0x1F1A2Cu: goto label_1f1a2c;
            case 0x1F1A30u: goto label_1f1a30;
            case 0x1F1A34u: goto label_1f1a34;
            case 0x1F1A38u: goto label_1f1a38;
            case 0x1F1A3Cu: goto label_1f1a3c;
            case 0x1F1A40u: goto label_1f1a40;
            case 0x1F1A44u: goto label_1f1a44;
            case 0x1F1A48u: goto label_1f1a48;
            case 0x1F1A4Cu: goto label_1f1a4c;
            case 0x1F1A50u: goto label_1f1a50;
            case 0x1F1A54u: goto label_1f1a54;
            case 0x1F1A58u: goto label_1f1a58;
            case 0x1F1A5Cu: goto label_1f1a5c;
            case 0x1F1A60u: goto label_1f1a60;
            case 0x1F1A64u: goto label_1f1a64;
            case 0x1F1A68u: goto label_1f1a68;
            default: break;
        }
        return;
    }
label_fallthrough_0x1f1a64:
    ctx->pc = 0x1F1A6Cu;
}
