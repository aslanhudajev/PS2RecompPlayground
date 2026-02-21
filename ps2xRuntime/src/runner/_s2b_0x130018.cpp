#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _s2b
// Address: 0x130018 - 0x130160
void _s2b_0x130018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x130018u;

    // 0x130018: 0x27bdff80
    ctx->pc = 0x130018u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x13001c: 0x24020009
    ctx->pc = 0x13001cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x130020: 0xffb50050
    ctx->pc = 0x130020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x130024: 0xe0a82d
    ctx->pc = 0x130024u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130028: 0xffb60060
    ctx->pc = 0x130028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x13002c: 0x26a30008
    ctx->pc = 0x13002cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 21), 8));
    // 0x130030: 0xffb40040
    ctx->pc = 0x130030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x130034: 0x62001a
    ctx->pc = 0x130034u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x130038: 0xffb30030
    ctx->pc = 0x130038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x13003c: 0xffb00000
    ctx->pc = 0x13003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130040: 0x24070001
    ctx->pc = 0x130040u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 1));
    // 0x130044: 0xffbf0070
    ctx->pc = 0x130044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x130048: 0xa0802d
    ctx->pc = 0x130048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13004c: 0xffb20020
    ctx->pc = 0x13004cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x130050: 0x80a02d
    ctx->pc = 0x130050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130054: 0xffb10010
    ctx->pc = 0x130054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x130058: 0xc0982d
    ctx->pc = 0x130058u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13005c: 0x50400001
    ctx->pc = 0x13005Cu;
    {
        const bool branch_taken_0x13005c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x13005c) {
            ctx->pc = 0x130060u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x130064u;
            goto label_130064;
        }
    }
    ctx->pc = 0x130064u;
label_130064:
    // 0x130064: 0x100b02d
    ctx->pc = 0x130064u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130068: 0x1812
    ctx->pc = 0x130068u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x13006c: 0xe3102a
    ctx->pc = 0x13006cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x130070: 0x1040000c
    ctx->pc = 0x130070u;
    {
        const bool branch_taken_0x130070 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x130074u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x130070) {
            ctx->pc = 0x1300A4u;
            goto label_1300a4;
        }
    }
    ctx->pc = 0x130078u;
    // 0x130078: 0x2a72000a
    ctx->pc = 0x130078u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 19), 10));
    // 0x13007c: 0x0
    ctx->pc = 0x13007cu;
    // NOP
label_130080:
    // 0x130080: 0x73840
    ctx->pc = 0x130080u;
    SET_GPR_U32(ctx, 7, SLL32(GPR_U32(ctx, 7), 1));
    // 0x130084: 0x24a50001
    ctx->pc = 0x130084u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x130088: 0xe3102a
    ctx->pc = 0x130088u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x13008c: 0x0
    ctx->pc = 0x13008cu;
    // NOP
    // 0x130090: 0x0
    ctx->pc = 0x130090u;
    // NOP
    // 0x130094: 0x1440fffa
    ctx->pc = 0x130094u;
    {
        const bool branch_taken_0x130094 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x130094) {
            ctx->pc = 0x130080u;
            goto label_130080;
        }
    }
    ctx->pc = 0x13009Cu;
    // 0x13009c: 0x10000003
    ctx->pc = 0x13009Cu;
    {
        const bool branch_taken_0x13009c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1300A0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13009c) {
            ctx->pc = 0x1300ACu;
            goto label_1300ac;
        }
    }
    ctx->pc = 0x1300A4u;
label_1300a4:
    // 0x1300a4: 0x2a72000a
    ctx->pc = 0x1300a4u;
    SET_GPR_U32(ctx, 18, SLT32(GPR_S32(ctx, 19), 10));
    // 0x1300a8: 0x280202d
    ctx->pc = 0x1300a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1300ac:
    // 0x1300ac: 0xc04bf8a
    ctx->pc = 0x1300ACu;
    SET_GPR_U32(ctx, 31, 0x1300B4u);
    ctx->pc = 0x1300B0u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 0), 9));
    ctx->pc = 0x12FE28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Balloc_0x12fe28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300B4u; }
    }
    if (ctx->pc != 0x1300B4u) { return; }
    ctx->pc = 0x1300B4u;
    // 0x1300b4: 0x40282d
    ctx->pc = 0x1300b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300b8: 0x24020001
    ctx->pc = 0x1300b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1300bc: 0xacb60014
    ctx->pc = 0x1300bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 22));
    // 0x1300c0: 0x1640000f
    ctx->pc = 0x1300C0u;
    {
        const bool branch_taken_0x1300c0 = (GPR_U32(ctx, 18) != GPR_U32(ctx, 0));
        ctx->pc = 0x1300C4u;
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        if (branch_taken_0x1300c0) {
            ctx->pc = 0x130100u;
            goto label_130100;
        }
    }
    ctx->pc = 0x1300C8u;
    // 0x1300c8: 0x26100009
    ctx->pc = 0x1300c8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 9));
    // 0x1300cc: 0x82070000
    ctx->pc = 0x1300ccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1300d0:
    // 0x1300d0: 0x280202d
    ctx->pc = 0x1300d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300d4: 0x2406000a
    ctx->pc = 0x1300d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1300d8: 0x26310001
    ctx->pc = 0x1300d8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x1300dc: 0x24e7ffd0
    ctx->pc = 0x1300dcu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x1300e0: 0xc04bfc0
    ctx->pc = 0x1300E0u;
    SET_GPR_U32(ctx, 31, 0x1300E8u);
    ctx->pc = 0x1300E4u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300E8u; }
    }
    if (ctx->pc != 0x1300E8u) { return; }
    ctx->pc = 0x1300E8u;
    // 0x1300e8: 0x40282d
    ctx->pc = 0x1300e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300ec: 0x233102a
    ctx->pc = 0x1300ecu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 19)));
    // 0x1300f0: 0x5440fff7
    ctx->pc = 0x1300F0u;
    {
        const bool branch_taken_0x1300f0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x1300f0) {
            ctx->pc = 0x1300F4u;
            SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->pc = 0x1300D0u;
            goto label_1300d0;
        }
    }
    ctx->pc = 0x1300F8u;
    // 0x1300f8: 0x10000002
    ctx->pc = 0x1300F8u;
    {
        const bool branch_taken_0x1300f8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1300FCu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
        if (branch_taken_0x1300f8) {
            ctx->pc = 0x130104u;
            goto label_130104;
        }
    }
    ctx->pc = 0x130100u;
label_130100:
    // 0x130100: 0x2610000a
    ctx->pc = 0x130100u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 10));
label_130104:
    // 0x130104: 0x235102a
    ctx->pc = 0x130104u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 21)));
    // 0x130108: 0x1040000a
    ctx->pc = 0x130108u;
    {
        const bool branch_taken_0x130108 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x13010Cu;
        SET_GPR_U32(ctx, 17, SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
        if (branch_taken_0x130108) {
            ctx->pc = 0x130134u;
            goto label_130134;
        }
    }
    ctx->pc = 0x130110u;
label_130110:
    // 0x130110: 0x82070000
    ctx->pc = 0x130110u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130114: 0x280202d
    ctx->pc = 0x130114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130118: 0x2406000a
    ctx->pc = 0x130118u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 10));
    // 0x13011c: 0x26100001
    ctx->pc = 0x13011cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    // 0x130120: 0x24e7ffd0
    ctx->pc = 0x130120u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 4294967248));
    // 0x130124: 0xc04bfc0
    ctx->pc = 0x130124u;
    SET_GPR_U32(ctx, 31, 0x13012Cu);
    ctx->pc = 0x130128u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->pc = 0x12FF00u;
    {
        const uint32_t __entryPc = ctx->pc;
        _multadd_0x12ff00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13012Cu; }
    }
    if (ctx->pc != 0x13012Cu) { return; }
    ctx->pc = 0x13012Cu;
    // 0x13012c: 0x1620fff8
    ctx->pc = 0x13012Cu;
    {
        const bool branch_taken_0x13012c = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x130130u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x13012c) {
            ctx->pc = 0x130110u;
            goto label_130110;
        }
    }
    ctx->pc = 0x130134u;
label_130134:
    // 0x130134: 0xdfbf0070
    ctx->pc = 0x130134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x130138: 0xa0102d
    ctx->pc = 0x130138u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13013c: 0xdfb60060
    ctx->pc = 0x13013cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x130140: 0xdfb50050
    ctx->pc = 0x130140u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x130144: 0xdfb40040
    ctx->pc = 0x130144u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x130148: 0xdfb30030
    ctx->pc = 0x130148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13014c: 0xdfb20020
    ctx->pc = 0x13014cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130150: 0xdfb10010
    ctx->pc = 0x130150u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130154: 0xdfb00000
    ctx->pc = 0x130154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130158: 0x3e00008
    ctx->pc = 0x130158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13015Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x130064u: goto label_130064;
            case 0x130080u: goto label_130080;
            case 0x1300A4u: goto label_1300a4;
            case 0x1300ACu: goto label_1300ac;
            case 0x1300D0u: goto label_1300d0;
            case 0x130100u: goto label_130100;
            case 0x130104u: goto label_130104;
            case 0x130110u: goto label_130110;
            case 0x130134u: goto label_130134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x130160u;
}
