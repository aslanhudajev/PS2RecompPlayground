#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: CritterGetNextMove
// Address: 0x296a00 - 0x296bd4
void CritterGetNextMove_0x296a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x296a00u;

    // 0x296a00: 0x27bdffe0
    ctx->pc = 0x296a00u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x296a04: 0xffbf0010
    ctx->pc = 0x296a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x296a08: 0xffb00000
    ctx->pc = 0x296a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x296a0c: 0x80802d
    ctx->pc = 0x296a0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296a10: 0x8e020004
    ctx->pc = 0x296a10u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x296a14: 0x84470110
    ctx->pc = 0x296a14u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x296a18: 0x8c480124
    ctx->pc = 0x296a18u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 2), 292)));
    // 0x296a1c: 0x86030124
    ctx->pc = 0x296a1cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x296a20: 0x24020090
    ctx->pc = 0x296a20u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
    // 0x296a24: 0x621018
    ctx->pc = 0x296a24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296a28: 0x4610003
    ctx->pc = 0x296A28u;
    {
        const bool branch_taken_0x296a28 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x296A2Cu;
        SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        if (branch_taken_0x296a28) {
            ctx->pc = 0x296A38u;
            goto label_296a38;
        }
    }
    ctx->pc = 0x296A30u;
    // 0x296a30: 0x10000064
    ctx->pc = 0x296A30u;
    {
        const bool branch_taken_0x296a30 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296A34u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x296a30) {
            ctx->pc = 0x296BC4u;
            goto label_296bc4;
        }
    }
    ctx->pc = 0x296A38u;
label_296a38:
    // 0x296a38: 0x94430054
    ctx->pc = 0x296a38u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x296a3c: 0x84420054
    ctx->pc = 0x296a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x296a40: 0x4420003
    ctx->pc = 0x296A40u;
    {
        const bool branch_taken_0x296a40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296a40) {
            ctx->pc = 0x296A44u;
            SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->pc = 0x296A50u;
            goto label_296a50;
        }
    }
    ctx->pc = 0x296A48u;
    // 0x296a48: 0x1000005e
    ctx->pc = 0x296A48u;
    {
        const bool branch_taken_0x296a48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296A4Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 3));
        if (branch_taken_0x296a48) {
            ctx->pc = 0x296BC4u;
            goto label_296bc4;
        }
    }
    ctx->pc = 0x296A50u;
label_296a50:
    // 0x296a50: 0x86020124
    ctx->pc = 0x296a50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x296a54: 0x8c640124
    ctx->pc = 0x296a54u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 3), 292)));
    // 0x296a58: 0x24030090
    ctx->pc = 0x296a58u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 144));
    // 0x296a5c: 0x431018
    ctx->pc = 0x296a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296a60: 0x441021
    ctx->pc = 0x296a60u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x296a64: 0x8c430000
    ctx->pc = 0x296a64u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296a68: 0x24020001
    ctx->pc = 0x296a68u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
    // 0x296a6c: 0x54620021
    ctx->pc = 0x296A6Cu;
    {
        const bool branch_taken_0x296a6c = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x296a6c) {
            ctx->pc = 0x296A70u;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->pc = 0x296AF4u;
            goto label_296af4;
        }
    }
    ctx->pc = 0x296A74u;
    // 0x296a74: 0x8e040b60
    ctx->pc = 0x296a74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
    // 0x296a78: 0x1080001a
    ctx->pc = 0x296A78u;
    {
        const bool branch_taken_0x296a78 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x296A7Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x296a78) {
            ctx->pc = 0x296AE4u;
            goto label_296ae4;
        }
    }
    ctx->pc = 0x296A80u;
    // 0x296a80: 0x2406ffff
    ctx->pc = 0x296a80u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296a84: 0x84820124
    ctx->pc = 0x296a84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
label_296a88:
    // 0x296a88: 0x4430005
    ctx->pc = 0x296A88u;
    {
        const bool branch_taken_0x296a88 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x296a88) {
            ctx->pc = 0x296A8Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
            ctx->pc = 0x296AA0u;
            goto label_296aa0;
        }
    }
    ctx->pc = 0x296A90u;
    // 0x296a90: 0x84820126
    ctx->pc = 0x296a90u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 294)));
    // 0x296a94: 0x4420011
    ctx->pc = 0x296A94u;
    {
        const bool branch_taken_0x296a94 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x296a94) {
            ctx->pc = 0x296A98u;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2912)));
            ctx->pc = 0x296ADCu;
            goto label_296adc;
        }
    }
    ctx->pc = 0x296A9Cu;
    // 0x296a9c: 0x94820124
    ctx->pc = 0x296a9cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
label_296aa0:
    // 0x296aa0: 0x24420001
    ctx->pc = 0x296aa0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x296aa4: 0xa4820126
    ctx->pc = 0x296aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x296aa8: 0x8c830004
    ctx->pc = 0x296aa8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x296aac: 0x21400
    ctx->pc = 0x296aacu;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 2), 16));
    // 0x296ab0: 0x21403
    ctx->pc = 0x296ab0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x296ab4: 0x84630110
    ctx->pc = 0x296ab4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x296ab8: 0x43102a
    ctx->pc = 0x296ab8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x296abc: 0x50400003
    ctx->pc = 0x296ABCu;
    {
        const bool branch_taken_0x296abc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x296abc) {
            ctx->pc = 0x296AC0u;
            WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 6));
            ctx->pc = 0x296ACCu;
            goto label_296acc;
        }
    }
    ctx->pc = 0x296AC4u;
    // 0x296ac4: 0x10000004
    ctx->pc = 0x296AC4u;
    {
        const bool branch_taken_0x296ac4 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296AC8u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x296ac4) {
            ctx->pc = 0x296AD8u;
            goto label_296ad8;
        }
    }
    ctx->pc = 0x296ACCu;
label_296acc:
    // 0x296acc: 0x84820124
    ctx->pc = 0x296accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x296ad0: 0x28420000
    ctx->pc = 0x296ad0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 0));
    // 0x296ad4: 0x2280a
    ctx->pc = 0x296ad4u;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 5, GPR_U32(ctx, 0));
label_296ad8:
    // 0x296ad8: 0x8c840b60
    ctx->pc = 0x296ad8u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2912)));
label_296adc:
    // 0x296adc: 0x5480ffea
    ctx->pc = 0x296ADCu;
    {
        const bool branch_taken_0x296adc = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x296adc) {
            ctx->pc = 0x296AE0u;
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 292)));
            ctx->pc = 0x296A88u;
            goto label_296a88;
        }
    }
    ctx->pc = 0x296AE4u;
label_296ae4:
    // 0x296ae4: 0x14a00003
    ctx->pc = 0x296AE4u;
    {
        const bool branch_taken_0x296ae4 = (GPR_U32(ctx, 5) != GPR_U32(ctx, 0));
        ctx->pc = 0x296AE8u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
        if (branch_taken_0x296ae4) {
            ctx->pc = 0x296AF4u;
            goto label_296af4;
        }
    }
    ctx->pc = 0x296AECu;
    // 0x296aec: 0x10000035
    ctx->pc = 0x296AECu;
    {
        const bool branch_taken_0x296aec = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296AF0u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x296aec) {
            ctx->pc = 0x296BC4u;
            goto label_296bc4;
        }
    }
    ctx->pc = 0x296AF4u;
label_296af4:
    // 0x296af4: 0x24420001
    ctx->pc = 0x296af4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x296af8: 0xa6020126
    ctx->pc = 0x296af8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x296afc: 0x24050090
    ctx->pc = 0x296afcu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 144));
    // 0x296b00: 0x240400f0
    ctx->pc = 0x296b00u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 240));
    // 0x296b04: 0x0
    ctx->pc = 0x296b04u;
    // NOP
label_296b08:
    // 0x296b08: 0x86020126
    ctx->pc = 0x296b08u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
    // 0x296b0c: 0x453018
    ctx->pc = 0x296b0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296b10: 0xc81821
    ctx->pc = 0x296b10u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x296b14: 0x47102a
    ctx->pc = 0x296b14u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x296b18: 0x54400003
    ctx->pc = 0x296B18u;
    {
        const bool branch_taken_0x296b18 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x296b18) {
            ctx->pc = 0x296B1Cu;
            SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->pc = 0x296B28u;
            goto label_296b28;
        }
    }
    ctx->pc = 0x296B20u;
    // 0x296b20: 0x1000fff9
    ctx->pc = 0x296B20u;
    {
        const bool branch_taken_0x296b20 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296B24u;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 0));
        if (branch_taken_0x296b20) {
            ctx->pc = 0x296B08u;
            goto label_296b08;
        }
    }
    ctx->pc = 0x296B28u;
label_296b28:
    // 0x296b28: 0x50440006
    ctx->pc = 0x296B28u;
    {
        const bool branch_taken_0x296b28 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 4));
        if (branch_taken_0x296b28) {
            ctx->pc = 0x296B2Cu;
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
            ctx->pc = 0x296B44u;
            goto label_296b44;
        }
    }
    ctx->pc = 0x296B30u;
    // 0x296b30: 0x84630054
    ctx->pc = 0x296b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x296b34: 0x86020124
    ctx->pc = 0x296b34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
    // 0x296b38: 0x54620005
    ctx->pc = 0x296B38u;
    {
        const bool branch_taken_0x296b38 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x296b38) {
            ctx->pc = 0x296B3Cu;
            SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2912)));
            ctx->pc = 0x296B50u;
            goto label_296b50;
        }
    }
    ctx->pc = 0x296B40u;
    // 0x296b40: 0x96020126
    ctx->pc = 0x296b40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 294)));
label_296b44:
    // 0x296b44: 0x24420001
    ctx->pc = 0x296b44u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 1));
    // 0x296b48: 0x1000ffef
    ctx->pc = 0x296B48u;
    {
        const bool branch_taken_0x296b48 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x296B4Cu;
        WRITE16(ADD32(GPR_U32(ctx, 16), 294), (uint16_t)GPR_U32(ctx, 2));
        if (branch_taken_0x296b48) {
            ctx->pc = 0x296B08u;
            goto label_296b08;
        }
    }
    ctx->pc = 0x296B50u;
label_296b50:
    // 0x296b50: 0x5080000b
    ctx->pc = 0x296B50u;
    {
        const bool branch_taken_0x296b50 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x296b50) {
            ctx->pc = 0x296B54u;
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
            ctx->pc = 0x296B80u;
            goto label_296b80;
        }
    }
    ctx->pc = 0x296B58u;
    // 0x296b58: 0x2402ffff
    ctx->pc = 0x296b58u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296b5c: 0x0
    ctx->pc = 0x296b5cu;
    // NOP
label_296b60:
    // 0x296b60: 0xa4820126
    ctx->pc = 0x296b60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 294), (uint16_t)GPR_U32(ctx, 2));
    // 0x296b64: 0x8c840b60
    ctx->pc = 0x296b64u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 2912)));
    // 0x296b68: 0x0
    ctx->pc = 0x296b68u;
    // NOP
    // 0x296b6c: 0x0
    ctx->pc = 0x296b6cu;
    // NOP
    // 0x296b70: 0x0
    ctx->pc = 0x296b70u;
    // NOP
    // 0x296b74: 0x1480fffa
    ctx->pc = 0x296B74u;
    {
        const bool branch_taken_0x296b74 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x296b74) {
            ctx->pc = 0x296B60u;
            goto label_296b60;
        }
    }
    ctx->pc = 0x296B7Cu;
    // 0x296b7c: 0x86030124
    ctx->pc = 0x296b7cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 292)));
label_296b80:
    // 0x296b80: 0x4600010
    ctx->pc = 0x296B80u;
    {
        const bool branch_taken_0x296b80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x296B84u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 144));
        if (branch_taken_0x296b80) {
            ctx->pc = 0x296BC4u;
            goto label_296bc4;
        }
    }
    ctx->pc = 0x296B88u;
    // 0x296b88: 0x622018
    ctx->pc = 0x296b88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x296b8c: 0x881021
    ctx->pc = 0x296b8cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x296b90: 0x8c430000
    ctx->pc = 0x296b90u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x296b94: 0x24020011
    ctx->pc = 0x296b94u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 17));
    // 0x296b98: 0x1462000b
    ctx->pc = 0x296B98u;
    {
        const bool branch_taken_0x296b98 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x296B9Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x296b98) {
            ctx->pc = 0x296BC8u;
            goto label_296bc8;
        }
    }
    ctx->pc = 0x296BA0u;
    // 0x296ba0: 0x8e0400cc
    ctx->pc = 0x296ba0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x296ba4: 0x24050001
    ctx->pc = 0x296ba4u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x296ba8: 0xc0b41e4
    ctx->pc = 0x296BA8u;
    SET_GPR_U32(ctx, 31, 0x296BB0u);
    ctx->pc = 0x296BACu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296BB0u; }
    }
    if (ctx->pc != 0x296BB0u) { return; }
    ctx->pc = 0x296BB0u;
    // 0x296bb0: 0x8e0200cc
    ctx->pc = 0x296bb0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x296bb4: 0x8c440078
    ctx->pc = 0x296bb4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x296bb8: 0x24050002
    ctx->pc = 0x296bb8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x296bbc: 0xc0b41e4
    ctx->pc = 0x296BBCu;
    SET_GPR_U32(ctx, 31, 0x296BC4u);
    ctx->pc = 0x296BC0u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 2));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296BC4u; }
    }
    if (ctx->pc != 0x296BC4u) { return; }
    ctx->pc = 0x296BC4u;
label_296bc4:
    // 0x296bc4: 0xdfbf0010
    ctx->pc = 0x296bc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296bc8:
    // 0x296bc8: 0xdfb00000
    ctx->pc = 0x296bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x296bcc: 0x3e00008
    ctx->pc = 0x296BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296BD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x296A38u: goto label_296a38;
            case 0x296A50u: goto label_296a50;
            case 0x296A88u: goto label_296a88;
            case 0x296AA0u: goto label_296aa0;
            case 0x296ACCu: goto label_296acc;
            case 0x296AD8u: goto label_296ad8;
            case 0x296ADCu: goto label_296adc;
            case 0x296AE4u: goto label_296ae4;
            case 0x296AF4u: goto label_296af4;
            case 0x296B08u: goto label_296b08;
            case 0x296B28u: goto label_296b28;
            case 0x296B44u: goto label_296b44;
            case 0x296B50u: goto label_296b50;
            case 0x296B60u: goto label_296b60;
            case 0x296B80u: goto label_296b80;
            case 0x296BC4u: goto label_296bc4;
            case 0x296BC8u: goto label_296bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x296BD4u;
}
